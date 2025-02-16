## Unreleased

### Backward incompatible change
* 6335:Remove time difference public api fields. [#6335](https://github.com/ydb-platform/ydb/pull/6335) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* 6713:Few changes in grammar for better antlr4 backward compatibility. [#6713](https://github.com/ydb-platform/ydb/pull/6713) ([Orlov Pavel](https://github.com/OrlovPavel)).

### Functionality
* 2977:Grammar fix. Wrote some .stg to generate protobuf with antlr4 in the same format as at antlr3. Not tested with code yet. [#2977](https://github.com/ydb-platform/ydb/pull/2977) ([Orlov Pavel](https://github.com/OrlovPavel)).
* 4891:Implement cpu limiter in node service. [#4891](https://github.com/ydb-platform/ydb/pull/4891) ([Mikhail Surin](https://github.com/ssmike)).
* 6253:Added pragma that enables spilling in grace join. ... [#6253](https://github.com/ydb-platform/ydb/pull/6253) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* 6257:YDB FQ: Support MDB MySQL in DatabaseResolver. [#6257](https://github.com/ydb-platform/ydb/pull/6257) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* 6298:YDB FQ: Add MySQL to fq proxy. [#6298](https://github.com/ydb-platform/ydb/pull/6298) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* 6310:Allow to set trace verbosity and ttl. [#6310](https://github.com/ydb-platform/ydb/pull/6310) ([Alexey Efimov](https://github.com/adameat)).
* 6342:Adding query 'ALTER TABLE table ALTER COLUMN column DROP NOT NULL'. [#6342](https://github.com/ydb-platform/ydb/pull/6342) ([flown4qqqq](https://github.com/flown4qqqq)).
* 6360:Support load cpu threshold. [#6360](https://github.com/ydb-platform/ydb/pull/6360) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 6420:... [#6420](https://github.com/ydb-platform/ydb/pull/6420) ([pilik](https://github.com/pashandor789)).
* 6463:Add UserSID (Security ID) who created long-running operation (export, import). [#6463](https://github.com/ydb-platform/ydb/pull/6463) ([Ilia Shakhov](https://github.com/pixcc)).
* 6574:Add security_tags table write hint. [#6574](https://github.com/ydb-platform/ydb/pull/6574) ([Vadim Averin](https://github.com/avevad)).
* 6584:Add sensors for duration of tablet starts and number of tablets currently starting. [#6584](https://github.com/ydb-platform/ydb/pull/6584) ([vporyadke](https://github.com/vporyadke)).
* 6603:... [#6603](https://github.com/ydb-platform/ydb/pull/6603) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* 6680:... [#6680](https://github.com/ydb-platform/ydb/pull/6680) ([kruall](https://github.com/kruall)).
* 6723:YDB FQ: support Oracle as an external data source. [#6723](https://github.com/ydb-platform/ydb/pull/6723) ([Grigorii Papashvili](https://github.com/lifthelm)).
* 6731:... [#6731](https://github.com/ydb-platform/ydb/pull/6731) ([Vitaly Stoyan](https://github.com/vitstn)).
* 6765:... [#6765](https://github.com/ydb-platform/ydb/pull/6765) ([Vitaly Stoyan](https://github.com/vitstn)).
* 6814:Support metadata storage over pdisk. [#6814](https://github.com/ydb-platform/ydb/pull/6814) ([Alexander Rutkovsky](https://github.com/alexvru)).
* 6859:New handler for returning groups data. more oriented for paging. [#6859](https://github.com/ydb-platform/ydb/pull/6859) ([Alexey Efimov](https://github.com/adameat)).
* 6872:Http viewer capabilities to check for supported features. [#6872](https://github.com/ydb-platform/ydb/pull/6872) ([Alexey Efimov](https://github.com/adameat)).
* 6878:`meta.meta_database_token_name` is used in the `Nebius` auth profile to specify the Jwt token that should be used for - `access_service_type` in tokenator config is used to detemine tokenator refreshing algorithm - requests to the meta database - rewrote `GetTableClient`, it depends on `access_service_type` now - renamed config parameter `auth-profile` to `access_service_type`. [#6878](https://github.com/ydb-platform/ydb/pull/6878) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* 6886:... [#6886](https://github.com/ydb-platform/ydb/pull/6886) ([Vitaly Stoyan](https://github.com/vitstn)).
* 6911:... [#6911](https://github.com/ydb-platform/ydb/pull/6911) ([pilik](https://github.com/pashandor789)).
* 6950:Support AnsiImplicitCrossJoin mode. [#6950](https://github.com/ydb-platform/ydb/pull/6950) ([Andrey Neporada](https://github.com/nepal)).
* 6956:Support ydb scheme ls for resource pools. [#6956](https://github.com/ydb-platform/ydb/pull/6956) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7052:New Change Data Capture (CDC) record format — `DEBEZIUM_JSON`. [#7052](https://github.com/ydb-platform/ydb/pull/7052) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* 7077:... [#7077](https://github.com/ydb-platform/ydb/pull/7077) ([Hor911](https://github.com/Hor911)).
* 7035:Add config option to specify ttl for user logins closes [#7035](https://github.com/ydb-platform/ydb/issues/7035). [#7083](https://github.com/ydb-platform/ydb/pull/7083) ([Alexey Efimov](https://github.com/adameat)).
* 7110:Async replication: concept, yql reference. [#7110](https://github.com/ydb-platform/ydb/pull/7110) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* 7112:... [#7112](https://github.com/ydb-platform/ydb/pull/7112) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7136:Added the ability to merge additional config to the main config. [#7136](https://github.com/ydb-platform/ydb/pull/7136) ([Nikita-Levuskin](https://github.com/Nikita-Levuskin)).
* 7157:... [#7157](https://github.com/ydb-platform/ydb/pull/7157) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7162:Fix config apply behavior - add reserved prefixes generation to plugin - use deprecated options in dynconfig. [#7162](https://github.com/ydb-platform/ydb/pull/7162) ([Innokentii Mokin](https://github.com/Enjection)).
* 7163:OAuth 2.0 token exchange. Allow multiple resource parameters. Update docs. [#7163](https://github.com/ydb-platform/ydb/pull/7163) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 7197:... [#7197](https://github.com/ydb-platform/ydb/pull/7197) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7250:Include port in worker-name header. [#7250](https://github.com/ydb-platform/ydb/pull/7250) ([Alexey Efimov](https://github.com/adameat)).
* 7338:... [#7338](https://github.com/ydb-platform/ydb/pull/7338) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7383:... [#7383](https://github.com/ydb-platform/ydb/pull/7383) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7389:Support sql for resource pool classifiers. [#7389](https://github.com/ydb-platform/ydb/pull/7389) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7416:... [#7416](https://github.com/ydb-platform/ydb/pull/7416) ([yumkam](https://github.com/yumkam)).
* 7430:... [#7430](https://github.com/ydb-platform/ydb/pull/7430) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7432:... [#7432](https://github.com/ydb-platform/ydb/pull/7432) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7443:Resource pools enabled. [#7443](https://github.com/ydb-platform/ydb/pull/7443) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7447:... [#7447](https://github.com/ydb-platform/ydb/pull/7447) ([Hor911](https://github.com/Hor911)).
* 7448:Add YQL syntax highlighting to YDB CLI. [#7448](https://github.com/ydb-platform/ydb/pull/7448) ([Victor Smirnov](https://github.com/vityaman)).
* 7491:Support resource pool classifiers objects saving. [#7491](https://github.com/ydb-platform/ydb/pull/7491) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7171:Add database parameter to viewer/tabletinfo handler closes [#7171](https://github.com/ydb-platform/ydb/issues/7171). [#7499](https://github.com/ydb-platform/ydb/pull/7499) ([Alexey Efimov](https://github.com/adameat)).
* 7503:... [#7503](https://github.com/ydb-platform/ydb/pull/7503) ([Alexey Ozeritskiy](https://github.com/resetius)).
* 7505:Add spilling stats per task. [#7505](https://github.com/ydb-platform/ydb/pull/7505) ([Vladluk](https://github.com/vladl2802)).
* 7516:... [#7516](https://github.com/ydb-platform/ydb/pull/7516) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7534:... [#7534](https://github.com/ydb-platform/ydb/pull/7534) ([Sergey Belyakov](https://github.com/serbel324)).
* 7548:... [#7548](https://github.com/ydb-platform/ydb/pull/7548) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7550:... [#7550](https://github.com/ydb-platform/ydb/pull/7550) ([pilik](https://github.com/pashandor789)).
* 7559:... [#7559](https://github.com/ydb-platform/ydb/pull/7559) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* 7564:... [#7564](https://github.com/ydb-platform/ydb/pull/7564) ([ya-at](https://github.com/ya-at)).
* 7602:... [#7602](https://github.com/ydb-platform/ydb/pull/7602) ([Artem Alekseev](https://github.com/fexolm)).
* 7605:... [#7605](https://github.com/ydb-platform/ydb/pull/7605) ([Alexey Ozeritskiy](https://github.com/resetius)).
* 7606:... [#7606](https://github.com/ydb-platform/ydb/pull/7606) ([Artem Alekseev](https://github.com/fexolm)).
* 7609:... [#7609](https://github.com/ydb-platform/ydb/pull/7609) ([Alexey Ozeritskiy](https://github.com/resetius)).
* 7632:Added decompression support for schema inference (https://st.yandex-team.ru/YQ-3528). [#7632](https://github.com/ydb-platform/ydb/pull/7632) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* 7642:Collect statistic about unsuccessful block rewrites for callables and types. [#7642](https://github.com/ydb-platform/ydb/pull/7642) ([Andrey Neporada](https://github.com/nepal)).
* 7688:Support resource pool classifiers cache in kqp_proxy. [#7688](https://github.com/ydb-platform/ydb/pull/7688) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7707:... [#7707](https://github.com/ydb-platform/ydb/pull/7707) ([Alexey Ozeritskiy](https://github.com/resetius)).
* 7702:Add limit_rows and truncated to viewer/query closes [#7702](https://github.com/ydb-platform/ydb/issues/7702). [#7715](https://github.com/ydb-platform/ydb/pull/7715) ([Alexey Efimov](https://github.com/adameat)).
* 7754:Config option for dynamic node registration token. Like config option `StaffApiUserToken` for CMS request. [#7754](https://github.com/ydb-platform/ydb/pull/7754) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 7766:The client receives the code `EES_WRITTEN_IN_TX` in response if he writes a message as part of a transaction. [#7766](https://github.com/ydb-platform/ydb/pull/7766) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* 7794:... [#7794](https://github.com/ydb-platform/ydb/pull/7794) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7797:Support filter on DNS names in client cert authentication. [#7797](https://github.com/ydb-platform/ydb/pull/7797) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 7818:Tests preparation before resource pool enable. [#7818](https://github.com/ydb-platform/ydb/pull/7818) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7819:Prepared canondata tests before enable resource pools. [#7819](https://github.com/ydb-platform/ydb/pull/7819) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 7829:Implement additional state for TKqpDataExecuter in which it will wait for all children Compute Actors for graceful shutdown. [#7829](https://github.com/ydb-platform/ydb/pull/7829) ([Ivan](https://github.com/abyss7)).
* 7830:Https://github.com/ydb-platform/ydb/issues/6822 add http-handle returning configs. [#7830](https://github.com/ydb-platform/ydb/pull/7830) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* 7869:... [#7869](https://github.com/ydb-platform/ydb/pull/7869) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7872:The options `--use-tx`, `--commit-period` and `--commit-messages` have been added to the `workload topic run write` command. [#7872](https://github.com/ydb-platform/ydb/pull/7872) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* 7895:... [#7895](https://github.com/ydb-platform/ydb/pull/7895) ([Artem Alekseev](https://github.com/fexolm)).
* 7948:... [#7948](https://github.com/ydb-platform/ydb/pull/7948) ([Vitaly Stoyan](https://github.com/vitstn)).
* 7954:Support all types of private keys, not only RSA. Set max TLS version to 1.3 instead of 1.2. [#7954](https://github.com/ydb-platform/ydb/pull/7954) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 7972:... [#7972](https://github.com/ydb-platform/ydb/pull/7972) ([pilik](https://github.com/pashandor789)).
* 7985:YDBOPS-9806. [#7985](https://github.com/ydb-platform/ydb/pull/7985) ([Artem](https://github.com/ArtemTrofimushkin)).
* 8001:Added MaxCommonLogChunks icb parameter for SSD/NVME and HDD. [#8001](https://github.com/ydb-platform/ydb/pull/8001) ([mregrock](https://github.com/mregrock)).
* 8031:... [#8031](https://github.com/ydb-platform/ydb/pull/8031) ([Vitaly Stoyan](https://github.com/vitstn)).
* 8047:... [#8047](https://github.com/ydb-platform/ydb/pull/8047) ([Artem Alekseev](https://github.com/fexolm)).
* 8058:... [#8058](https://github.com/ydb-platform/ydb/pull/8058) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* 8062:... [#8062](https://github.com/ydb-platform/ydb/pull/8062) ([Vitaly Stoyan](https://github.com/vitstn)).
* 8094:... [#8094](https://github.com/ydb-platform/ydb/pull/8094) ([Artem Alekseev](https://github.com/fexolm)).
* 8106:... [#8106](https://github.com/ydb-platform/ydb/pull/8106) ([pilik](https://github.com/pashandor789)).
* 8115:... [#8115](https://github.com/ydb-platform/ydb/pull/8115) ([pilik](https://github.com/pashandor789)).
* 8119:... [#8119](https://github.com/ydb-platform/ydb/pull/8119) ([azevaykin](https://github.com/azevaykin)).
* 8167:... [#8167](https://github.com/ydb-platform/ydb/pull/8167) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* 8179:Support reading UUIDs from YT tables. [#8179](https://github.com/ydb-platform/ydb/pull/8179) ([Vadim Averin](https://github.com/avevad)).
* 8221:New feature in ydb cli: topic consumer describe command. According to RFC: https://github.com/ydb-platform/ydb-rfc/blob/main/cli_topic_consumer_describe.md. [#8221](https://github.com/ydb-platform/ydb/pull/8221) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 8233:... [#8233](https://github.com/ydb-platform/ydb/pull/8233) ([Vitaly Stoyan](https://github.com/vitstn)).
* 8264:Allow to alter CDC topic's retention period. [#8264](https://github.com/ydb-platform/ydb/pull/8264) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* 3012:Copy section `host_configs` into `config.yaml` configuration. [#3012](https://github.com/ydb-platform/ydb/pull/3012) ([Aleksei Kobzev](https://github.com/kobzonega)).
* 3289:Add reason for pending action in maintenance public API. [#3289](https://github.com/ydb-platform/ydb/pull/3289) ([Ilia Shakhov](https://github.com/pixcc)).
* 3776:Add `ydb scheme permissions {clear,set}-inheritance` commands. Add `ydbd db schema access {clear,set}-inheritance` commands. [#3776](https://github.com/ydb-platform/ydb/pull/3776) ([ijon](https://github.com/ijon)).
* 4905:Add Pack/Unpack method implementations to TTupleLayoutFallback class. [#4905](https://github.com/ydb-platform/ydb/pull/4905) ([Alexander](https://github.com/san-kir-k)).
* 6059:[issue](https://github.com/orgs/ydb-platform/projects/37?pane=issue&itemId=67157010) - Added oidc-proxy configuration parameters. This includes `auth-profile`, which determines the logic that oidc_proxy will follow. Possible options: `y-profile`, `n-profile`. Default is `y-profile` - For oidc_proxy handlers, added a new version of logic depending on `auth-profile`. The old handlers were not changed, so some logic is duplicated. I plan to combine some of the logic in a minor refactoring later. - For tokenator (mvp authentithication) added a new version of logic depending on `auth-profile` also. I plan to new version support for `meta` later. - Moved new iam spec to github into public api - Changed the endpoint names in tests to more neutral ones. [#6059](https://github.com/ydb-platform/ydb/pull/6059) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* 6084:Ca factory in executer to support extra allocations and memory tracking everywhere. [#6084](https://github.com/ydb-platform/ydb/pull/6084) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* 6136:Implemented HeapIterator for VDisk iterators. [#6136](https://github.com/ydb-platform/ydb/pull/6136) ([mregrock](https://github.com/mregrock)).
* 6286:Add feature flag enableimplicitqueryparametertypes to table service config to not restart database when feature flag is changed. [#6286](https://github.com/ydb-platform/ydb/pull/6286) ([VPolka](https://github.com/VPolka)).
* 6307:Add PG upgrade script. Add missing catalog/sql files from 14.2. [#6307](https://github.com/ydb-platform/ydb/pull/6307) ([Andrey Neporada](https://github.com/nepal)).
* 6328:Switch generate_kernels.py to python3. Regenerate kernels. [#6328](https://github.com/ydb-platform/ydb/pull/6328) ([Andrey Neporada](https://github.com/nepal)).
* 6334:Upgrade pg_wrapper to PostgreSQL 14.3. [#6334](https://github.com/ydb-platform/ydb/pull/6334) ([Andrey Neporada](https://github.com/nepal)).
* 6346:Upgrade pg_wrapper to PostgreSQL 14.5. [#6346](https://github.com/ydb-platform/ydb/pull/6346) ([Andrey Neporada](https://github.com/nepal)).
* 6372:Document copy_src.sh and PostgreSQL update process. [#6372](https://github.com/ydb-platform/ydb/pull/6372) ([Andrey Neporada](https://github.com/nepal)).
* 6373:Upgrade pg_wrapper to PostgreSQL 14.8. [#6373](https://github.com/ydb-platform/ydb/pull/6373) ([Andrey Neporada](https://github.com/nepal)).
* 6407:Hide deprecated operation kinds in `operation list`. [#6407](https://github.com/ydb-platform/ydb/pull/6407) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* 6444:Create separate trace id for BlobStorage requests and link them to original traces. [#6444](https://github.com/ydb-platform/ydb/pull/6444) ([Alexander Rutkovsky](https://github.com/alexvru)).
* 6462:Change default value to enable spilling. [#6462](https://github.com/ydb-platform/ydb/pull/6462) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* 6479:Added request time info printing. [#6479](https://github.com/ydb-platform/ydb/pull/6479) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* 13789:This feature will help to easily add additional params to local_ydb in docker. [#13789](https://github.com/ydb-platform/ydb/pull/13789) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 6339:Support for UPDATE operation in EvWrite. [#6339](https://github.com/ydb-platform/ydb/pull/6339) ([azevaykin](https://github.com/azevaykin)).
* 6602:Syntax for creating vector index ```sql ALTER TABLE table ADD INDEX idx GLOBAL USING vector_kmeans_tree ON (col) COVER (col) WITH (key=value) ```. [#6602](https://github.com/ydb-platform/ydb/pull/6602) ([azevaykin](https://github.com/azevaykin)).
* 6800:ColumnShard + Datashard Reads. [#6800](https://github.com/ydb-platform/ydb/pull/6800) ([Nikita Vasilev](https://github.com/nikvas0)).
* 6877:... [#6877](https://github.com/ydb-platform/ydb/pull/6877) ([Oleg Doronin](https://github.com/dorooleg)).
* 7255:Partial implementation of https://github.com/ydb-platform/ydb-rfc/blob/main/0104_incr-backup-sql.md Add basic (create/alter/drop) `BACKUP COLLECTION` entity with settings. [#7255](https://github.com/ydb-platform/ydb/pull/7255) ([Innokentii Mokin](https://github.com/Enjection)).
* 7986:Support for new granular timecast protocol in mediator tablets. [#7986](https://github.com/ydb-platform/ydb/pull/7986) ([Aleksei Borzenkov](https://github.com/snaury)).
* 8090:Use granular mediator time that is not blocked by other tablets. [#8090](https://github.com/ydb-platform/ydb/pull/8090) ([Aleksei Borzenkov](https://github.com/snaury)).
* 8147:... [#8147](https://github.com/ydb-platform/ydb/pull/8147) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* 8400:... [#8400](https://github.com/ydb-platform/ydb/pull/8400) ([Aleksei Borzenkov](https://github.com/snaury)).
* 8570:ExtractCommonPredicatesFromLogicalOps setting and optimizers. [#8570](https://github.com/ydb-platform/ydb/pull/8570) ([Andrey Neporada](https://github.com/nepal)).
* 9003:... [#9003](https://github.com/ydb-platform/ydb/pull/9003) ([Aleksei Borzenkov](https://github.com/snaury)).
* 9090:Support for DISTINCT clause for aggregation functions calculated over window. [#9090](https://github.com/ydb-platform/ydb/pull/9090) ([Mark Ziganshin](https://github.com/loochek)).
* 10067:Exporting CMake with skip platforms with errors. [#10067](https://github.com/ydb-platform/ydb/pull/10067) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* 11764:Feature flag `enable_antlr4_parser` helps to enable the ANTLRv4 parser inside docker container local-ydb. [#11764](https://github.com/ydb-platform/ydb/pull/11764) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* 12520:This config option propagates inside Dq internals. For Kqp it's set to 100% by default to force copying of underlying buffers. [#12520](https://github.com/ydb-platform/ydb/pull/12520) ([Ivan](https://github.com/abyss7)).
* 12733:... [#12733](https://github.com/ydb-platform/ydb/pull/12733) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* 12917:Added new `ydb debug latency` kind `ActorChain`. [#12917](https://github.com/ydb-platform/ydb/pull/12917) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* 12956:Add log_config and better templating for ydbd_slice. [#12956](https://github.com/ydb-platform/ydb/pull/12956) ([Alexander Petrukhin](https://github.com/shmel1k)).
* 13071:Link udf function 'roaring'. [#13071](https://github.com/ydb-platform/ydb/pull/13071) ([azevaykin](https://github.com/azevaykin)).

#### Bugfix
* 3936:Fixed default for --null-value in ydb import file csv/tsv commands and improved error text. [#3936](https://github.com/ydb-platform/ydb/pull/3936) ([Bulat](https://github.com/Gazizonoki)).
* 5289:Do not use write lock in ICB when read lock is enough. Use swap to prevent read-check-write races. [#5289](https://github.com/ydb-platform/ydb/pull/5289) ([Cthulhu](https://github.com/the-ancient-1)).
* 5677:Implement a deadline for patching request stages to facilitate a rapid fallback process. [#5677](https://github.com/ydb-platform/ydb/pull/5677) ([kruall](https://github.com/kruall)).
* 6152:... [#6152](https://github.com/ydb-platform/ydb/pull/6152) ([yumkam](https://github.com/yumkam)).
* 6249:`TDecompressionTask` stores a weak reference to `TDataDecompressionInfo` and if the Parent has already been deleted, it does nothing. [#6249](https://github.com/ydb-platform/ydb/pull/6249) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* 6281:Fill change exchange split & activation lists just before commit. [#6281](https://github.com/ydb-platform/ydb/pull/6281) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* 6290:Fix HMAC secret key loading for OAuth 2.0 token exchange config HMAC key is binary data, so it must be loaded from json in base64 encoding (in Go SDK it is already done properly). [#6290](https://github.com/ydb-platform/ydb/pull/6290) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* 6331:Fix build after removing generate_patch.sh. [#6331](https://github.com/ydb-platform/ydb/pull/6331) ([Andrey Neporada](https://github.com/nepal)).
* 6347:Temporarily disable FilterPushdownEnableMultiusage. [#6347](https://github.com/ydb-platform/ydb/pull/6347) ([Andrey Neporada](https://github.com/nepal)).
* 6355:... [#6355](https://github.com/ydb-platform/ydb/pull/6355) ([kruall](https://github.com/kruall)).
* 6361:Build only postgresql sources in verify.sh. [#6361](https://github.com/ydb-platform/ydb/pull/6361) ([Andrey Neporada](https://github.com/nepal)).
* 6362:Fix unpatched global vars. [#6362](https://github.com/ydb-platform/ydb/pull/6362) ([Andrey Neporada](https://github.com/nepal)).
* 6396:Proper (de)serialization of structs, optionals and variants. [#6396](https://github.com/ydb-platform/ydb/pull/6396) ([Vadim Averin](https://github.com/avevad)).
* 6398:Handle empty GC commands correctly. [#6398](https://github.com/ydb-platform/ydb/pull/6398) ([Alexander Rutkovsky](https://github.com/alexvru)).
* 6401:Fix bugs in coordinator state migration. [#6401](https://github.com/ydb-platform/ydb/pull/6401) ([Aleksei Borzenkov](https://github.com/snaury)).
* 6405:Fix VDisk replication stuck sensor bug. [#6405](https://github.com/ydb-platform/ydb/pull/6405) ([Alexander Rutkovsky](https://github.com/alexvru)).
* 6409:... [#6409](https://github.com/ydb-platform/ydb/pull/6409) ([vporyadke](https://github.com/vporyadke)).
* 6414:... [#6414](https://github.com/ydb-platform/ydb/pull/6414) ([Oleg Doronin](https://github.com/dorooleg)).
* 6432:... [#6432](https://github.com/ydb-platform/ydb/pull/6432) ([Vitaly Stoyan](https://github.com/vitstn)).
* 6441:Fix problem with empty errors in http handlers. [#6441](https://github.com/ydb-platform/ydb/pull/6441) ([Alexey Efimov](https://github.com/adameat)).
* 6449:The PQ tablet sent a response to the SS. At that moment, `Hive' was running it on another node. The tablet was restored to the WAIT_RS state and waited for predicates from other participants. [#6449](https://github.com/ydb-platform/ydb/pull/6449) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* 6454:Previously, errors from spilling caused a deadlock. Error handling has now been added. [#6454](https://github.com/ydb-platform/ydb/pull/6454) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* 6491:Fix a bug where tablets could get stuck in boot queue. [#6491](https://github.com/ydb-platform/ydb/pull/6491) ([vporyadke](https://github.com/vporyadke)).
* 6492:Fix a bug where tablets total counter was not updated on followers deletion. [#6492](https://github.com/ydb-platform/ydb/pull/6492) ([vporyadke](https://github.com/vporyadke)).

