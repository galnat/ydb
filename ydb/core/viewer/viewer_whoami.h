#pragma once
#include "json_handlers.h"
#include "viewer.h"
#include <ydb/core/base/appdata_fwd.h>
#include <library/cpp/json/json_value.h>
#include <library/cpp/json/json_writer.h>
#include <ydb/library/aclib/aclib.h>
#include <ydb/library/actors/core/actor_bootstrapped.h>

namespace NKikimr::NViewer {

using namespace NActors;

class TJsonWhoAmI : public TActorBootstrapped<TJsonWhoAmI> {
    IViewer* Viewer;
    NMon::TEvHttpInfo::TPtr Event;

public:
    static constexpr NKikimrServices::TActivity::EType ActorActivityType() {
        return NKikimrServices::TActivity::VIEWER_HANDLER;
    }

    TJsonWhoAmI(IViewer* viewer, NMon::TEvHttpInfo::TPtr& ev)
        : Viewer(viewer)
        , Event(ev)
    {}

    void Bootstrap(const TActorContext& ctx) {
        ReplyAndDie(ctx);
    }

    bool CheckGroupMembership(std::unique_ptr<NACLib::TUserToken>& token, const NProtoBuf::RepeatedPtrField<TString>& sids) {
        if (sids.empty()) {
            return true;
        }
        for (const auto& sid : sids) {
            if (token->IsExist(sid)) {
                return true;
            }
        }
        return false;
    }

    void ReplyAndDie(const  TActorContext &ctx) {
        NACLibProto::TUserToken userToken;
        Y_PROTOBUF_SUPPRESS_NODISCARD userToken.ParseFromString(Event->Get()->UserToken);
        NJson::TJsonValue json(NJson::JSON_MAP);
        if (userToken.HasUserSID()) {
            json["UserSID"] = userToken.GetUserSID();
        }
        if (userToken.HasGroupSIDs() && userToken.GetGroupSIDs().BucketsSize() > 0) {
            NJson::TJsonValue& groupSIDs(json["GroupSIDs"]);
            groupSIDs.SetType(NJson::JSON_ARRAY);
            for (const auto& buckets : userToken.GetGroupSIDs().GetBuckets()) {
                for (const auto& group : buckets.GetValues()) {
                    groupSIDs.AppendValue(group);
                }
            }
        }
        if (userToken.HasOriginalUserToken()) {
            json["OriginalUserToken"] = userToken.GetOriginalUserToken();
        }
        if (userToken.HasAuthType()) {
            json["AuthType"] = userToken.GetAuthType();
        }
        auto token = std::make_unique<NACLib::TUserToken>(userToken);
        json["IsViewerAllowed"] = CheckGroupMembership(token, AppData()->SecurityConfig.GetViewerAllowedSIDs());
        json["IsMonitoringAllowed"] = CheckGroupMembership(token, AppData()->SecurityConfig.GetMonitoringAllowedSIDs());
        json["IsAdministrationAllowed"] = CheckGroupMembership(token, AppData()->SecurityConfig.GetAdministrationAllowedSIDs());
        ctx.Send(Event->Sender, new NMon::TEvHttpInfoRes(Viewer->GetHTTPOKJSON(Event->Get(), NJson::WriteJson(json, false)), 0, NMon::IEvHttpInfoRes::EContentType::Custom));
        Die(ctx);
    }

    void HandleTimeout(const TActorContext &ctx) {
        ctx.Send(Event->Sender, new NMon::TEvHttpInfoRes(Viewer->GetHTTPGATEWAYTIMEOUT(Event->Get()), 0, NMon::IEvHttpInfoRes::EContentType::Custom));
        Die(ctx);
    }

    static YAML::Node GetSwaggerSchema() {
        return YAML::Load(R"___(
            type: object
            title: WhoAmI
            properties:
                UserSID:
                    type: string
                    description: User ID / name
                GroupSID:
                    type: array
                    items:
                        type: string
                    description: User groups
                OriginalUserToken:
                    type: string
                    description: User's token used to authenticate
                AuthType:
                    type: string
                    description: Authentication type
                IsViewerAllowed:
                    type: boolean
                    description: Is user allowed to view data
                IsMonitoringAllowed:
                    type: boolean
                    description: Is user allowed to view deeper and make simple changes
                IsAdministrationAllowed:
                    type: boolean
                    description: Is user allowed to do unrestricted changes in the system
            )___");
    }

    static YAML::Node GetSwagger() {
        TSimpleYamlBuilder yaml({
            .Method = "get",
            .Tag = "viewer",
            .Summary = "Information about current user",
            .Description = "Returns information about user token",
        });
        yaml.SetResponseSchema(GetSwaggerSchema());
        return yaml;
    }
};

}
