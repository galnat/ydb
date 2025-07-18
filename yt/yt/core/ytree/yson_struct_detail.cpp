#include "yson_struct_detail.h"

#include "fluent.h"

namespace NYT::NYTree {

using namespace NYPath;

////////////////////////////////////////////////////////////////////////////////

std::optional<EUnrecognizedStrategy> GetRecursiveUnrecognizedStrategy(EUnrecognizedStrategy strategy)
{
    return strategy == EUnrecognizedStrategy::KeepRecursive || strategy == EUnrecognizedStrategy::ThrowRecursive
        ? std::make_optional(strategy)
        : std::nullopt;
}

bool ShouldKeep(EUnrecognizedStrategy strategy)
{
    return strategy == EUnrecognizedStrategy::Keep || strategy == EUnrecognizedStrategy::KeepRecursive;
}

bool ShouldThrow(EUnrecognizedStrategy strategy)
{
    return strategy == EUnrecognizedStrategy::Throw || strategy == EUnrecognizedStrategy::ThrowRecursive;
}

////////////////////////////////////////////////////////////////////////////////

void TYsonStructMeta::SetDefaultsOfInitializedStruct(TYsonStructBase* target) const
{
    if (auto* bitmap = target->GetSetFieldsBitmap()) {
        bitmap->Initialize(ssize(Parameters_));
    }

    for (const auto& [_, parameter] : SortedParameters_) {
        parameter->SetDefaultsInitialized(target);
    }

    for (const auto& preprocessor : Preprocessors_) {
        preprocessor(target);
    }
}

const THashSet<std::string>& TYsonStructMeta::GetRegisteredKeys() const
{
    return RegisteredKeys_;
}

const THashMap<std::string, IYsonStructParameterPtr>& TYsonStructMeta::GetParameterMap() const
{
    return Parameters_;
}

const std::vector<std::pair<std::string, IYsonStructParameterPtr>>& TYsonStructMeta::GetParameterSortedList() const
{
    return SortedParameters_;
}

IYsonStructParameterPtr TYsonStructMeta::GetParameter(const std::string& keyOrAlias) const
{
    auto it = Parameters_.find(keyOrAlias);
    if (it != Parameters_.end()) {
        return it->second;
    }

    for (const auto& [_, parameter] : SortedParameters_) {
        if (Count(parameter->GetAliases(), keyOrAlias) > 0) {
            return parameter;
        }
    }
    THROW_ERROR_EXCEPTION("Key or alias %Qv not found in yson struct", keyOrAlias);
}

void TYsonStructMeta::LoadParameter(TYsonStructBase* target, const std::string& key, const NYTree::INodePtr& node) const
{
    const auto& parameter = GetParameter(key);
    auto pathGetter = [&] {
        return "/" + key;
    };
    auto validate = [&] {
        parameter->PostprocessParameter(target, pathGetter);
        try {
            for (const auto& postprocessor : Postprocessors_) {
                postprocessor(target);
            }
        } catch (const std::exception& ex) {
            THROW_ERROR_EXCEPTION(
                "Postprocess failed while loading parameter %Qv from value %Qv",
                key,
                ConvertToYsonString(node, NYson::EYsonFormat::Text))
                    << ex;
        }
    };
    auto loadOptions = TLoadParameterOptions{
        .PathGetter = pathGetter,
    };

    parameter->SafeLoad(target, node, loadOptions, validate);
}

void TYsonStructMeta::PostprocessStruct(TYsonStructBase* target, const std::function<TYPath()>& pathGetter) const
{
    for (const auto& [name, parameter] : SortedParameters_) {
        parameter->PostprocessParameter(target, [&] {
            return (pathGetter ? pathGetter() : TYPath("")) + "/" + ToYPathLiteral(name);
        });
    }

    try {
        for (const auto& postprocessor : Postprocessors_) {
            postprocessor(target);
        }
    } catch (const std::exception& ex) {
        THROW_ERROR_EXCEPTION("Postprocess failed at %v",
            !pathGetter ? "root" : pathGetter())
                << ex;
    }
}

void TYsonStructMeta::LoadStruct(
    TYsonStructBase* target,
    INodePtr node,
    bool postprocess,
    bool setDefaults,
    const std::function<TYPath()>& pathGetter) const
{
    YT_VERIFY(*StructType_ == typeid(*target));
    YT_VERIFY(node);

    if (setDefaults) {
        SetDefaultsOfInitializedStruct(target);
    }

    auto mapNode = node->AsMap();
    auto unrecognizedStrategy = target->InstanceUnrecognizedStrategy_.template value_or(MetaUnrecognizedStrategy_);
    for (const auto& [name, parameter] : SortedParameters_) {
        std::string key = name;
        auto child = mapNode->FindChild(name); // can be NULL
        for (const auto& alias : parameter->GetAliases()) {
            auto otherChild = mapNode->FindChild(alias);
            if (child && otherChild && !AreNodesEqual(child, otherChild)) {
                THROW_ERROR_EXCEPTION("Different values for aliased parameters %Qv and %Qv", key, alias)
                        << TErrorAttribute("main_value", child)
                            << TErrorAttribute("aliased_value", otherChild);
            }
            if (!child && otherChild) {
                child = otherChild;
                key = alias;
            }
        }
        auto loadOptions = TLoadParameterOptions{
            .PathGetter = [&] {
                return (pathGetter ? pathGetter() : TYPath("")) + "/" + ToYPathLiteral(key);
            },
            .RecursiveUnrecognizedRecursively = GetRecursiveUnrecognizedStrategy(unrecognizedStrategy),
        };
        parameter->Load(target, child, loadOptions);
    }

    if (unrecognizedStrategy != EUnrecognizedStrategy::Drop) {
        const auto& registeredKeys = GetRegisteredKeys();
        if (!target->LocalUnrecognized_ && ShouldKeep(unrecognizedStrategy)) {
            target->LocalUnrecognized_ = GetEphemeralNodeFactory()->CreateMap();
        }
        for (const auto& [key, child] : mapNode->GetChildren()) {
            if (!registeredKeys.contains(key)) {
                if (ShouldThrow(unrecognizedStrategy)) {
                    auto path = (pathGetter ? pathGetter() : TYPath(""));
                    THROW_ERROR_EXCEPTION("Unrecognized field %Qv has been encountered", path + "/" + ToYPathLiteral(key))
                        << TErrorAttribute("key", key)
                        << TErrorAttribute("path", path);
                }
                target->LocalUnrecognized_->RemoveChild(key);
                YT_VERIFY(target->LocalUnrecognized_->AddChild(key, ConvertToNode(child)));
            }
        }
    }

    if (postprocess) {
        PostprocessStruct(target, pathGetter);
    }
}

void TYsonStructMeta::LoadStruct(
    TYsonStructBase* target,
    NYson::TYsonPullParserCursor* cursor,
    bool postprocess,
    bool setDefaults,
    const std::function<TYPath()>& pathGetter) const
{
    YT_VERIFY(*StructType_ == typeid(*target));
    YT_VERIFY(cursor);

    if (setDefaults) {
        SetDefaultsOfInitializedStruct(target);
    }

    auto unrecognizedStrategy = target->InstanceUnrecognizedStrategy_.template value_or(MetaUnrecognizedStrategy_);

    auto createLoadOptions = [&] (TStringBuf key) {
        return TLoadParameterOptions{
            .PathGetter = [&pathGetter, key] {
                return (pathGetter ? pathGetter() : TYPath("")) + "/" + ToYPathLiteral(key);
            },
            .RecursiveUnrecognizedRecursively = GetRecursiveUnrecognizedStrategy(unrecognizedStrategy),
        };
    };

    THashMap<TStringBuf, IYsonStructParameter*> keyToParameter;
    THashSet<IYsonStructParameter*> pendingParameters;
    for (const auto& [key, parameter] : SortedParameters_) {
        EmplaceOrCrash(keyToParameter, key, parameter.Get());
        for (const auto& alias : parameter->GetAliases()) {
            EmplaceOrCrash(keyToParameter, alias, parameter.Get());
        }
        InsertOrCrash(pendingParameters, parameter.Get());
    }

    THashMap<std::string, std::string> aliasedData;

    auto processPossibleAlias = [&] (
        IYsonStructParameter* parameter,
        TStringBuf key,
        NYson::TYsonPullParserCursor* cursor)
    {
        TStringStream ss;
        {
            NYson::TCheckedInDebugYsonTokenWriter writer(&ss);
            cursor->TransferComplexValue(&writer);
        }
        auto data = std::move(ss.Str());
        const auto& canonicalKey = parameter->GetKey();
        auto aliasedDataIt = aliasedData.find(canonicalKey);
        if (aliasedDataIt != aliasedData.end()) {
            auto firstNode = ConvertTo<INodePtr>(NYson::TYsonStringBuf(aliasedDataIt->second));
            auto secondNode = ConvertTo<INodePtr>(NYson::TYsonStringBuf(data));
            if (!AreNodesEqual(firstNode, secondNode)) {
                THROW_ERROR_EXCEPTION("Different values for aliased parameters %Qv and %Qv", canonicalKey, key)
                    << TErrorAttribute("main_value", firstNode)
                    << TErrorAttribute("aliased_value", secondNode);
            }
            return;
        }
        {
            TStringInput input(data);
            NYson::TYsonPullParser parser(&input, NYson::EYsonType::Node);
            NYson::TYsonPullParserCursor newCursor(&parser);
            parameter->Load(target, &newCursor, createLoadOptions(key));
        }
        EmplaceOrCrash(aliasedData, canonicalKey, std::move(data));
    };

    auto processUnrecognized = [&] (const std::string& key, NYson::TYsonPullParserCursor* cursor) {
        if (unrecognizedStrategy == EUnrecognizedStrategy::Drop) {
            cursor->SkipComplexValue();
            return;
        }
        if (ShouldThrow(unrecognizedStrategy)) {
            auto path = (pathGetter ? pathGetter() : TYPath(""));
            THROW_ERROR_EXCEPTION("Unrecognized field %Qv has been encountered", path + "/" + ToYPathLiteral(key))
                << TErrorAttribute("key", key)
                << TErrorAttribute("path", path);
        }
        if (!target->LocalUnrecognized_) {
            target->LocalUnrecognized_ = GetEphemeralNodeFactory()->CreateMap();
        }
        target->LocalUnrecognized_->RemoveChild(key);
        auto added = target->LocalUnrecognized_->AddChild(key, NYson::ExtractTo<INodePtr>(cursor));
        YT_VERIFY(added);
    };

    cursor->ParseMap([&] (NYson::TYsonPullParserCursor* cursor) {
        auto key = ExtractTo<std::string>(cursor);
        auto it = keyToParameter.find(key);
        if (it == keyToParameter.end()) {
            processUnrecognized(key, cursor);
            return;
        }

        auto* parameter = it->second;
        if (parameter->GetAliases().empty()) {
            parameter->Load(target, cursor, createLoadOptions(key));
        } else {
            processPossibleAlias(parameter, key, cursor);
        }
        // NB: Key may be missing in case of aliasing.
        pendingParameters.erase(parameter);
    });

    auto sortedPendingParameters = std::vector(pendingParameters.begin(), pendingParameters.end());
    Sort(sortedPendingParameters, [] (const auto* lhs, const auto* rhs) {
        return lhs->GetKey() < rhs->GetKey();
    });
    for (const auto parameter : sortedPendingParameters) {
        parameter->Load(target, /*cursor*/ nullptr, createLoadOptions(parameter->GetKey()));
    }

    if (postprocess) {
        PostprocessStruct(target, pathGetter);
    }
}

IMapNodePtr TYsonStructMeta::GetRecursiveUnrecognized(const TYsonStructBase* target) const
{
    // Take a copy of `LocalUnrecognized` and add parameter->GetRecursiveUnrecognized()
    // for all parameters that are TYsonStruct's themselves.
    auto result = target->LocalUnrecognized_ ? ConvertTo<IMapNodePtr>(target->LocalUnrecognized_) : GetEphemeralNodeFactory()->CreateMap();
    for (const auto& [name, parameter] : SortedParameters_) {
        auto unrecognized = parameter->GetRecursiveUnrecognized(target);
        if (unrecognized && unrecognized->AsMap()->GetChildCount() > 0) {
            result->AddChild(name, unrecognized);
        }
    }
    return result;
}

void TYsonStructMeta::RegisterParameter(std::string key, IYsonStructParameterPtr parameter)
{
    YT_VERIFY(Parameters_.template emplace(std::move(key), std::move(parameter)).second);
}

void TYsonStructMeta::RegisterPreprocessor(std::function<void(TYsonStructBase*)> preprocessor)
{
    Preprocessors_.push_back(std::move(preprocessor));
}

void TYsonStructMeta::RegisterPostprocessor(std::function<void(TYsonStructBase*)> postprocessor)
{
    Postprocessors_.push_back(std::move(postprocessor));
}

void TYsonStructMeta::SetUnrecognizedStrategy(EUnrecognizedStrategy strategy)
{
    MetaUnrecognizedStrategy_ = strategy;
}

void TYsonStructMeta::WriteSchema(const TYsonStructBase* target, NYson::IYsonConsumer* consumer) const
{
    BuildYsonFluently(consumer)
        .BeginMap()
            .Item("type_name").Value("struct")
            .Item("members").DoListFor(Parameters_, [&] (auto fluent, const auto& pair) {
                fluent.Item()
                    .BeginMap()
                        .Item("name").Value(pair.first)
                        .Item("type").Do([&] (auto fluent) {
                            pair.second->WriteSchema(target, fluent.GetConsumer());
                        })
                        .DoIf(pair.second->IsRequired(), [] (auto fluent) {
                            fluent.Item("required").Value(true);
                        })
                    .EndMap();
            })
        .EndMap();
}

void TYsonStructMeta::FinishInitialization(const std::type_info& structType)
{
    StructType_ = &structType;

    RegisteredKeys_.reserve(Parameters_.size());
    for (const auto& [name, parameter] : Parameters_) {
        RegisteredKeys_.insert(name);
        for (const auto& alias : parameter->GetAliases()) {
            RegisteredKeys_.insert(alias);
        }
    }

    SortedParameters_ = std::vector<std::pair<std::string, IYsonStructParameterPtr>>(Parameters_.begin(), Parameters_.end());
    std::sort(
        SortedParameters_.begin(),
        SortedParameters_.end(),
        [] (const auto& lhs, const auto& rhs) {
            return lhs.first < rhs.first;
        });
}

bool TYsonStructMeta::CompareStructs(
    const TYsonStructBase* lhs,
    const TYsonStructBase* rhs) const
{
    YT_VERIFY(lhs->Meta_ == this);

    if (lhs == rhs) {
        return true;
    }

    if (rhs->Meta_ != lhs->Meta_) {
        return false;
    }

    // Equal Meta implies equal struct types.
    // Thus structs must be instances of the same class.
    for (const auto& [_, parameter] : SortedParameters_) {
        if (!parameter->CompareParameter(lhs, rhs)) {
            return false;
        }
    }

    return true;
}

////////////////////////////////////////////////////////////////////////////////

} // namespace NYT::NYTree
