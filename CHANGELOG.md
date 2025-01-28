### YDB release HEAD (9cb9dec87f5bac630075d63568accc93a792bafa) as compared to 44a1cd02b9d9f3e11eed6d02ac5fe4649e6f6dd7 (44a1cd02b9d)

#### Backward incompatible change
* Remove time difference public api fields. [#6335](https://github.com/ydb-platform/ydb/pull/6335) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Few changes in grammar for better antlr4 backward compatibility. [#6713](https://github.com/ydb-platform/ydb/pull/6713) ([Orlov Pavel](https://github.com/OrlovPavel)).
* Change grammar for antlr4 backward compatibility. [#8186](https://github.com/ydb-platform/ydb/pull/8186) ([Orlov Pavel](https://github.com/OrlovPavel)).
* ... [#12637](https://github.com/ydb-platform/ydb/pull/12637) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13274](https://github.com/ydb-platform/ydb/pull/13274) ([Alexey Efimov](https://github.com/adameat)).

#### New feature
* Grammar fix. Wrote some .stg to generate protobuf with antlr4 in the same format as at antlr3. Not tested with code yet. [#2977](https://github.com/ydb-platform/ydb/pull/2977) ([Orlov Pavel](https://github.com/OrlovPavel)).
* Implement cpu limiter in node service. [#4891](https://github.com/ydb-platform/ydb/pull/4891) ([Mikhail Surin](https://github.com/ssmike)).
* Added pragma that enables spilling in grace join. ... [#6253](https://github.com/ydb-platform/ydb/pull/6253) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* YDB FQ: Support MDB MySQL in DatabaseResolver. [#6257](https://github.com/ydb-platform/ydb/pull/6257) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* YDB FQ: Add MySQL to fq proxy. [#6298](https://github.com/ydb-platform/ydb/pull/6298) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* Allow to set trace verbosity and ttl. [#6310](https://github.com/ydb-platform/ydb/pull/6310) ([Alexey Efimov](https://github.com/adameat)).
* Adding query 'ALTER TABLE table ALTER COLUMN column DROP NOT NULL'. [#6342](https://github.com/ydb-platform/ydb/pull/6342) ([flown4qqqq](https://github.com/flown4qqqq)).
* Support load cpu threshold. [#6360](https://github.com/ydb-platform/ydb/pull/6360) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#6420](https://github.com/ydb-platform/ydb/pull/6420) ([pilik](https://github.com/pashandor789)).
* Add UserSID (Security ID) who created long-running operation (export, import). [#6463](https://github.com/ydb-platform/ydb/pull/6463) ([Ilia Shakhov](https://github.com/pixcc)).
* Add security_tags table write hint. [#6574](https://github.com/ydb-platform/ydb/pull/6574) ([Vadim Averin](https://github.com/avevad)).
* Add sensors for duration of tablet starts and number of tablets currently starting. [#6584](https://github.com/ydb-platform/ydb/pull/6584) ([vporyadke](https://github.com/vporyadke)).
* ... [#6603](https://github.com/ydb-platform/ydb/pull/6603) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#6680](https://github.com/ydb-platform/ydb/pull/6680) ([kruall](https://github.com/kruall)).
* YDB FQ: support Oracle as an external data source. [#6723](https://github.com/ydb-platform/ydb/pull/6723) ([Grigorii Papashvili](https://github.com/lifthelm)).
* ... [#6731](https://github.com/ydb-platform/ydb/pull/6731) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#6765](https://github.com/ydb-platform/ydb/pull/6765) ([Vitaly Stoyan](https://github.com/vitstn)).
* Support metadata storage over pdisk. [#6814](https://github.com/ydb-platform/ydb/pull/6814) ([Alexander Rutkovsky](https://github.com/alexvru)).
* New handler for returning groups data. more oriented for paging. [#6859](https://github.com/ydb-platform/ydb/pull/6859) ([Alexey Efimov](https://github.com/adameat)).
* Http viewer capabilities to check for supported features. [#6872](https://github.com/ydb-platform/ydb/pull/6872) ([Alexey Efimov](https://github.com/adameat)).
* `meta.meta_database_token_name` is used in the `Nebius` auth profile to specify the Jwt token that should be used for - `access_service_type` in tokenator config is used to detemine tokenator refreshing algorithm - requests to the meta database - rewrote `GetTableClient`, it depends on `access_service_type` now - renamed config parameter `auth-profile` to `access_service_type`. [#6878](https://github.com/ydb-platform/ydb/pull/6878) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#6886](https://github.com/ydb-platform/ydb/pull/6886) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#6911](https://github.com/ydb-platform/ydb/pull/6911) ([pilik](https://github.com/pashandor789)).
* Support AnsiImplicitCrossJoin mode. [#6950](https://github.com/ydb-platform/ydb/pull/6950) ([Andrey Neporada](https://github.com/nepal)).
* Support ydb scheme ls for resource pools. [#6956](https://github.com/ydb-platform/ydb/pull/6956) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* New Change Data Capture (CDC) record format — `DEBEZIUM_JSON`. [#7052](https://github.com/ydb-platform/ydb/pull/7052) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#7077](https://github.com/ydb-platform/ydb/pull/7077) ([Hor911](https://github.com/Hor911)).
* Add config option to specify ttl for user logins closes [#7035](https://github.com/ydb-platform/ydb/issues/7035). [#7083](https://github.com/ydb-platform/ydb/pull/7083) ([Alexey Efimov](https://github.com/adameat)).
* Async replication: concept, yql reference. [#7110](https://github.com/ydb-platform/ydb/pull/7110) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#7112](https://github.com/ydb-platform/ydb/pull/7112) ([Vitaly Stoyan](https://github.com/vitstn)).
* Added the ability to merge additional config to the main config. [#7136](https://github.com/ydb-platform/ydb/pull/7136) ([Nikita-Levuskin](https://github.com/Nikita-Levuskin)).
* ... [#7157](https://github.com/ydb-platform/ydb/pull/7157) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix config apply behavior - add reserved prefixes generation to plugin - use deprecated options in dynconfig. [#7162](https://github.com/ydb-platform/ydb/pull/7162) ([Innokentii Mokin](https://github.com/Enjection)).
* OAuth 2.0 token exchange. Allow multiple resource parameters. Update docs. [#7163](https://github.com/ydb-platform/ydb/pull/7163) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#7197](https://github.com/ydb-platform/ydb/pull/7197) ([Vitaly Stoyan](https://github.com/vitstn)).
* Include port in worker-name header. [#7250](https://github.com/ydb-platform/ydb/pull/7250) ([Alexey Efimov](https://github.com/adameat)).
* ... [#7338](https://github.com/ydb-platform/ydb/pull/7338) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#7383](https://github.com/ydb-platform/ydb/pull/7383) ([Vitaly Stoyan](https://github.com/vitstn)).
* Support sql for resource pool classifiers. [#7389](https://github.com/ydb-platform/ydb/pull/7389) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#7416](https://github.com/ydb-platform/ydb/pull/7416) ([yumkam](https://github.com/yumkam)).
* ... [#7430](https://github.com/ydb-platform/ydb/pull/7430) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#7432](https://github.com/ydb-platform/ydb/pull/7432) ([Vitaly Stoyan](https://github.com/vitstn)).
* Resource pools enabled. [#7443](https://github.com/ydb-platform/ydb/pull/7443) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#7447](https://github.com/ydb-platform/ydb/pull/7447) ([Hor911](https://github.com/Hor911)).
* Add YQL syntax highlighting to YDB CLI. [#7448](https://github.com/ydb-platform/ydb/pull/7448) ([Victor Smirnov](https://github.com/vityaman)).
* Support resource pool classifiers objects saving. [#7491](https://github.com/ydb-platform/ydb/pull/7491) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add database parameter to viewer/tabletinfo handler closes [#7171](https://github.com/ydb-platform/ydb/issues/7171). [#7499](https://github.com/ydb-platform/ydb/pull/7499) ([Alexey Efimov](https://github.com/adameat)).
* ... [#7503](https://github.com/ydb-platform/ydb/pull/7503) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Add spilling stats per task. [#7505](https://github.com/ydb-platform/ydb/pull/7505) ([Vladluk](https://github.com/vladl2802)).
* ... [#7516](https://github.com/ydb-platform/ydb/pull/7516) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#7534](https://github.com/ydb-platform/ydb/pull/7534) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#7548](https://github.com/ydb-platform/ydb/pull/7548) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#7550](https://github.com/ydb-platform/ydb/pull/7550) ([pilik](https://github.com/pashandor789)).
* ... [#7559](https://github.com/ydb-platform/ydb/pull/7559) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* ... [#7564](https://github.com/ydb-platform/ydb/pull/7564) ([ya-at](https://github.com/ya-at)).
* ... [#7602](https://github.com/ydb-platform/ydb/pull/7602) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#7605](https://github.com/ydb-platform/ydb/pull/7605) ([Alexey Ozeritskiy](https://github.com/resetius)).
* ... [#7606](https://github.com/ydb-platform/ydb/pull/7606) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#7609](https://github.com/ydb-platform/ydb/pull/7609) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Added decompression support for schema inference (https://st.yandex-team.ru/YQ-3528). [#7632](https://github.com/ydb-platform/ydb/pull/7632) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Collect statistic about unsuccessful block rewrites for callables and types. [#7642](https://github.com/ydb-platform/ydb/pull/7642) ([Andrey Neporada](https://github.com/nepal)).
* Support resource pool classifiers cache in kqp_proxy. [#7688](https://github.com/ydb-platform/ydb/pull/7688) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#7707](https://github.com/ydb-platform/ydb/pull/7707) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Add limit_rows and truncated to viewer/query closes [#7702](https://github.com/ydb-platform/ydb/issues/7702). [#7715](https://github.com/ydb-platform/ydb/pull/7715) ([Alexey Efimov](https://github.com/adameat)).
* Config option for dynamic node registration token. Like config option `StaffApiUserToken` for CMS request. [#7754](https://github.com/ydb-platform/ydb/pull/7754) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* The client receives the code `EES_WRITTEN_IN_TX` in response if he writes a message as part of a transaction. [#7766](https://github.com/ydb-platform/ydb/pull/7766) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#7794](https://github.com/ydb-platform/ydb/pull/7794) ([Vitaly Stoyan](https://github.com/vitstn)).
* Support filter on DNS names in client cert authentication. [#7797](https://github.com/ydb-platform/ydb/pull/7797) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Tests preparation before resource pool enable. [#7818](https://github.com/ydb-platform/ydb/pull/7818) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Prepared canondata tests before enable resource pools. [#7819](https://github.com/ydb-platform/ydb/pull/7819) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Implement additional state for TKqpDataExecuter in which it will wait for all children Compute Actors for graceful shutdown. [#7829](https://github.com/ydb-platform/ydb/pull/7829) ([Ivan](https://github.com/abyss7)).
* Https://github.com/ydb-platform/ydb/issues/6822 add http-handle returning configs. [#7830](https://github.com/ydb-platform/ydb/pull/7830) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#7869](https://github.com/ydb-platform/ydb/pull/7869) ([Vitaly Stoyan](https://github.com/vitstn)).
* The options `--use-tx`, `--commit-period` and `--commit-messages` have been added to the `workload topic run write` command. [#7872](https://github.com/ydb-platform/ydb/pull/7872) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#7895](https://github.com/ydb-platform/ydb/pull/7895) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#7948](https://github.com/ydb-platform/ydb/pull/7948) ([Vitaly Stoyan](https://github.com/vitstn)).
* Support all types of private keys, not only RSA. Set max TLS version to 1.3 instead of 1.2. [#7954](https://github.com/ydb-platform/ydb/pull/7954) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#7972](https://github.com/ydb-platform/ydb/pull/7972) ([pilik](https://github.com/pashandor789)).
* YDBOPS-9806. [#7985](https://github.com/ydb-platform/ydb/pull/7985) ([Artem](https://github.com/ArtemTrofimushkin)).
* Added MaxCommonLogChunks icb parameter for SSD/NVME and HDD. [#8001](https://github.com/ydb-platform/ydb/pull/8001) ([mregrock](https://github.com/mregrock)).
* ... [#8031](https://github.com/ydb-platform/ydb/pull/8031) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8047](https://github.com/ydb-platform/ydb/pull/8047) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#8058](https://github.com/ydb-platform/ydb/pull/8058) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#8062](https://github.com/ydb-platform/ydb/pull/8062) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8094](https://github.com/ydb-platform/ydb/pull/8094) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#8106](https://github.com/ydb-platform/ydb/pull/8106) ([pilik](https://github.com/pashandor789)).
* ... [#8115](https://github.com/ydb-platform/ydb/pull/8115) ([pilik](https://github.com/pashandor789)).
* ... [#8119](https://github.com/ydb-platform/ydb/pull/8119) ([azevaykin](https://github.com/azevaykin)).
* ... [#8167](https://github.com/ydb-platform/ydb/pull/8167) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Support reading UUIDs from YT tables. [#8179](https://github.com/ydb-platform/ydb/pull/8179) ([Vadim Averin](https://github.com/avevad)).
* New feature in ydb cli: topic consumer describe command. According to RFC: https://github.com/ydb-platform/ydb-rfc/blob/main/cli_topic_consumer_describe.md. [#8221](https://github.com/ydb-platform/ydb/pull/8221) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#8233](https://github.com/ydb-platform/ydb/pull/8233) ([Vitaly Stoyan](https://github.com/vitstn)).
* Allow to alter CDC topic's retention period. [#8264](https://github.com/ydb-platform/ydb/pull/8264) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#8284](https://github.com/ydb-platform/ydb/pull/8284) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* ... [#8287](https://github.com/ydb-platform/ydb/pull/8287) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix cors headers, closes [#7906](https://github.com/ydb-platform/ydb/issues/7906). [#8303](https://github.com/ydb-platform/ydb/pull/8303) ([Alexey Efimov](https://github.com/adameat)).
* Add storage/groups latencies and ignore empty vslot status. [#8320](https://github.com/ydb-platform/ydb/pull/8320) ([Alexey Efimov](https://github.com/adameat)).
* ... [#8334](https://github.com/ydb-platform/ydb/pull/8334) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#8340](https://github.com/ydb-platform/ydb/pull/8340) ([Alexey Ozeritskiy](https://github.com/resetius)).
* ... [#8344](https://github.com/ydb-platform/ydb/pull/8344) ([Vitaly Stoyan](https://github.com/vitstn)).
* Новая логика уровней оптимизаций:. [#8348](https://github.com/ydb-platform/ydb/pull/8348) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Refactor whiteboard info, to reduce possible footprint and allow to specify which fields are required. [#8366](https://github.com/ydb-platform/ydb/pull/8366) ([Alexey Efimov](https://github.com/adameat)).
* ... [#8424](https://github.com/ydb-platform/ydb/pull/8424) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#8445](https://github.com/ydb-platform/ydb/pull/8445) ([Oleg Doronin](https://github.com/dorooleg)).
* Pushdown non-separable filters over Aggregate. [#8468](https://github.com/ydb-platform/ydb/pull/8468) ([Andrey Neporada](https://github.com/nepal)).
* ... [#8469](https://github.com/ydb-platform/ydb/pull/8469) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8472](https://github.com/ydb-platform/ydb/pull/8472) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#8502](https://github.com/ydb-platform/ydb/pull/8502) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* ... [#8504](https://github.com/ydb-platform/ydb/pull/8504) ([pilik](https://github.com/pashandor789)).
* Fixes [#8513](https://github.com/ydb-platform/ydb/issues/8513). [#8535](https://github.com/ydb-platform/ydb/pull/8535) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#8541](https://github.com/ydb-platform/ydb/pull/8541) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8554](https://github.com/ydb-platform/ydb/pull/8554) ([pilik](https://github.com/pashandor789)).
* ... [#8599](https://github.com/ydb-platform/ydb/pull/8599) ([Олег](https://github.com/iddqdex)).
* Kqprun support creating tennants. [#8675](https://github.com/ydb-platform/ydb/pull/8675) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#8707](https://github.com/ydb-platform/ydb/pull/8707) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#8742](https://github.com/ydb-platform/ydb/pull/8742) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* ... [#8748](https://github.com/ydb-platform/ydb/pull/8748) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8848](https://github.com/ydb-platform/ydb/pull/8848) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#8893](https://github.com/ydb-platform/ydb/pull/8893) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#8912](https://github.com/ydb-platform/ydb/pull/8912) ([Orlov Pavel](https://github.com/OrlovPavel)).
* ... [#8941](https://github.com/ydb-platform/ydb/pull/8941) ([Orlov Pavel](https://github.com/OrlovPavel)).
* Fix decimal output for builtin query requests closes [#8920](https://github.com/ydb-platform/ydb/issues/8920). [#8950](https://github.com/ydb-platform/ydb/pull/8950) ([Alexey Efimov](https://github.com/adameat)).
* ... [#8959](https://github.com/ydb-platform/ydb/pull/8959) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#9002](https://github.com/ydb-platform/ydb/pull/9002) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* ... [#9012](https://github.com/ydb-platform/ydb/pull/9012) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#9040](https://github.com/ydb-platform/ydb/pull/9040) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add microseconds and seconds format in Datetime UDF. [#9081](https://github.com/ydb-platform/ydb/pull/9081) ([Vadim Averin](https://github.com/avevad)).
* ... [#9091](https://github.com/ydb-platform/ydb/pull/9091) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#9112](https://github.com/ydb-platform/ydb/pull/9112) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Add tracing to healthcheck. [#9143](https://github.com/ydb-platform/ydb/pull/9143) ([Alexey Efimov](https://github.com/adameat)).
* Export current_public_dir in test_ya for use in tests in which you want to publish the results in s3 for each retry separately. [#9147](https://github.com/ydb-platform/ydb/pull/9147) ([Vladluk](https://github.com/vladl2802)).
* Fixes [#8658](https://github.com/ydb-platform/ydb/issues/8658). [#9158](https://github.com/ydb-platform/ydb/pull/9158) ([Artem Alekseev](https://github.com/fexolm)).
* Ydb/tests/postgres_integrations/go-libpq/[docker_wrapper_test.py] chunk chunk. [#9160](https://github.com/ydb-platform/ydb/pull/9160) ([Kirill Rysin](https://github.com/naspirato)).
* Fixes [#8659](https://github.com/ydb-platform/ydb/issues/8659). [#9246](https://github.com/ydb-platform/ydb/pull/9246) ([Artem Alekseev](https://github.com/fexolm)).
* Add field `sanitized_token` for audit log. It contains token without signature. [#9287](https://github.com/ydb-platform/ydb/pull/9287) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#9336](https://github.com/ydb-platform/ydb/pull/9336) ([azevaykin](https://github.com/azevaykin)).
* There is a problem in handling operation_timeout parameter during rate limiter request. The ways how in works causes race, when rate limiter can reply OK (and spend resource), but RPC timeout will say to the user that request timeouted. It is much better to support more safe cancel_after parameter < operation_timeout. In this case response will be consistent with quoter service. [#9348](https://github.com/ydb-platform/ydb/pull/9348) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Adds `--emulate-pq` option for dqrun. [#9349](https://github.com/ydb-platform/ydb/pull/9349) ([Fiodar Miron](https://github.com/fedor-miron)).
* GROUP BY HOP now supports static inputs like AS_TABLE. [#9370](https://github.com/ydb-platform/ydb/pull/9370) ([Alexey Pozdniakov](https://github.com/APozdniakov)).
* ... [#9372](https://github.com/ydb-platform/ydb/pull/9372) ([Artem Alekseev](https://github.com/fexolm)).
* Added parameters to `ydb sql` command - Refactored input options. [#9388](https://github.com/ydb-platform/ydb/pull/9388) ([Nikolay Perfilov](https://github.com/pnv1)).
* Add node roles, like: * bootstrapper * statestorage * statestorageboard * schemeboard. [#9413](https://github.com/ydb-platform/ydb/pull/9413) ([Alexey Efimov](https://github.com/adameat)).
* Add session info. [#9420](https://github.com/ydb-platform/ydb/pull/9420) ([Alexey Efimov](https://github.com/adameat)).
* Added query script `execute` and `fetch` handlers post `/query/script/execute` get `/query/script/fetch` - each handler evokes grpc service `queryservice` - changed grpc_services for the work. [#9423](https://github.com/ydb-platform/ydb/pull/9423) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Added recipe for kqprun. [#9453](https://github.com/ydb-platform/ydb/pull/9453) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#9517](https://github.com/ydb-platform/ydb/pull/9517) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Simple http rate limiter. [#9541](https://github.com/ydb-platform/ydb/pull/9541) ([Alexey Efimov](https://github.com/adameat)).
* Fix nodes type, introduce storage type for nodes. [#9575](https://github.com/ydb-platform/ydb/pull/9575) ([Alexey Efimov](https://github.com/adameat)).
* Pass decimal parameters from KQP and SDK to Datashard and ColumnShard. [#9587](https://github.com/ydb-platform/ydb/pull/9587) ([azevaykin](https://github.com/azevaykin)).
* ... [#9627](https://github.com/ydb-platform/ydb/pull/9627) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Add setting to configure min delay before node shutdown. [#9688](https://github.com/ydb-platform/ydb/pull/9688) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#9738](https://github.com/ydb-platform/ydb/pull/9738) ([Sergey Belyakov](https://github.com/serbel324)).
* Improvements in the SDK. The Commit call waits for the topic writing session to receive all Acks. [#9761](https://github.com/ydb-platform/ydb/pull/9761) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* YDB FQ: Connector filtering modes. [#9778](https://github.com/ydb-platform/ydb/pull/9778) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Implement resource pool weights. [#9839](https://github.com/ydb-platform/ydb/pull/9839) ([Mikhail Surin](https://github.com/ssmike)).
* You can use `TTxControl` to commit a transaction. The SDK waits for the recording session to receive all ACKs for written messages. [#9890](https://github.com/ydb-platform/ydb/pull/9890) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Add cpus info to cluster handler. [#9896](https://github.com/ydb-platform/ydb/pull/9896) ([Alexey Efimov](https://github.com/adameat)).
* Enable 3 modes for Arrow memory tracking: - serialization-deserialization (default) - deep-copy - no tracking. [#9951](https://github.com/ydb-platform/ydb/pull/9951) ([Ivan](https://github.com/abyss7)).
* ... [#9959](https://github.com/ydb-platform/ydb/pull/9959) ([Artem Alekseev](https://github.com/fexolm)).
* Make block combine hashed use stream instead of flow. [#9979](https://github.com/ydb-platform/ydb/pull/9979) ([Vladluk](https://github.com/vladl2802)).
* ... [#10033](https://github.com/ydb-platform/ydb/pull/10033) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ... [#10058](https://github.com/ydb-platform/ydb/pull/10058) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* ... [#10065](https://github.com/ydb-platform/ydb/pull/10065) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Fix nodes grouping and uptime calculations. [#10075](https://github.com/ydb-platform/ydb/pull/10075) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10117](https://github.com/ydb-platform/ydb/pull/10117) ([Vitaly Stoyan](https://github.com/vitstn)).
* Support output for audit logs siilar to json log format for usual debug logs. [#10143](https://github.com/ydb-platform/ydb/pull/10143) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* YDB FQ: set up filtering options for YQL Generic Read Actor and Lookup Actor. [#10161](https://github.com/ydb-platform/ydb/pull/10161) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Add rate limiting settings to http. [#10164](https://github.com/ydb-platform/ydb/pull/10164) ([Alexey Efimov](https://github.com/adameat)).
* Add hint for compact Join. [#10236](https://github.com/ydb-platform/ydb/pull/10236) ([Vadim Averin](https://github.com/avevad)).
* Switch to json2proto to allow decode of any. [#10269](https://github.com/ydb-platform/ydb/pull/10269) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10402](https://github.com/ydb-platform/ydb/pull/10402) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Add ydb2 schema, add some crazy types to render to json closes [#8043](https://github.com/ydb-platform/ydb/issues/8043). [#10443](https://github.com/ydb-platform/ydb/pull/10443) ([Alexey Efimov](https://github.com/adameat)).
* Follower statistics is passed: * datashard; * schemeshard; * sys_view partition_stats. [#10482](https://github.com/ydb-platform/ydb/pull/10482) ([azevaykin](https://github.com/azevaykin)).
* ... [#10509](https://github.com/ydb-platform/ydb/pull/10509) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Add node name filter, improve filter behavior closes [#10554](https://github.com/ydb-platform/ydb/issues/10554). [#10585](https://github.com/ydb-platform/ydb/pull/10585) ([Alexey Efimov](https://github.com/adameat)).
* `AFTER MATCH SKIP PAST LAST ROW` is default option now. [#10597](https://github.com/ydb-platform/ydb/pull/10597) ([Alexey Pozdniakov](https://github.com/APozdniakov)).
* Added new field COMPRESSION_LEVEL in Column Family. [#10645](https://github.com/ydb-platform/ydb/pull/10645) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* Added database & node_id for logging backend. [#10666](https://github.com/ydb-platform/ydb/pull/10666) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Log events during backup/restore. [#10681](https://github.com/ydb-platform/ydb/pull/10681) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Add memorydetailed field to viewer/nodes handler. [#10694](https://github.com/ydb-platform/ydb/pull/10694) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10752](https://github.com/ydb-platform/ydb/pull/10752) ([azevaykin](https://github.com/azevaykin)).
* Add setting of external traces' detalization level to tracing config. [#10784](https://github.com/ydb-platform/ydb/pull/10784) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#10800](https://github.com/ydb-platform/ydb/pull/10800) ([beehelit](https://github.com/beehelit)).
* ... [#10842](https://github.com/ydb-platform/ydb/pull/10842) ([Vitaly Stoyan](https://github.com/vitstn)).
* Sys columns support for YT map block input mode. [#10844](https://github.com/ydb-platform/ydb/pull/10844) ([Mark Ziganshin](https://github.com/loochek)).
* Follower statistics is passed: * datashard; * schemeshard; * sys_view partition_stats; * sys_view top_partitions_one_minute; * sys_view top_partitions_one_hour. [#10849](https://github.com/ydb-platform/ydb/pull/10849) ([azevaykin](https://github.com/azevaykin)).
* ... [#10883](https://github.com/ydb-platform/ydb/pull/10883) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Implement intermixed inplace and huge blobs and add test for this case. [#10973](https://github.com/ydb-platform/ydb/pull/10973) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Extend network diagnostics. [#10981](https://github.com/ydb-platform/ydb/pull/10981) ([Alexey Efimov](https://github.com/adameat)).
* Calculate disconnections in last hour. [#11007](https://github.com/ydb-platform/ydb/pull/11007) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#11015](https://github.com/ydb-platform/ydb/pull/11015) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#11155](https://github.com/ydb-platform/ydb/pull/11155) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#11189](https://github.com/ydb-platform/ydb/pull/11189) ([azevaykin](https://github.com/azevaykin)).
* Add fetch and replace public api. [#11313](https://github.com/ydb-platform/ydb/pull/11313) ([mregrock](https://github.com/mregrock)).
* Add network diagnostics columns to viewer/nodes handler. [#11344](https://github.com/ydb-platform/ydb/pull/11344) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11393](https://github.com/ydb-platform/ydb/pull/11393) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* ... [#11411](https://github.com/ydb-platform/ydb/pull/11411) ([Artem Alekseev](https://github.com/fexolm)).
* Https://nebius.atlassian.net/browse/nbydb-594. [#11449](https://github.com/ydb-platform/ydb/pull/11449) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Support the configuration setting to wrap log records into a fixed json envelope, based on the log record nature. To be used when a single-stream unified logs delivery system is in place (like stderr in k8s installations), with all logs streamed there (including audit), and which needs to have some environment-specific information in the message to decide which system to forward a particular record to. [#11466](https://github.com/ydb-platform/ydb/pull/11466) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#11546](https://github.com/ydb-platform/ydb/pull/11546) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#11585](https://github.com/ydb-platform/ydb/pull/11585) ([Oleg Doronin](https://github.com/dorooleg)).
* A new balancing option "group_slots" has been added, which enables uniform distribution of VDisks belonging to specific storage groups or storage pool across PDisks. [#11589](https://github.com/ydb-platform/ydb/pull/11589) ([kruall](https://github.com/kruall)).
* ... [#11590](https://github.com/ydb-platform/ydb/pull/11590) ([Sergey Belyakov](https://github.com/serbel324)).
* If the `blobstorage_config` section is omitted, use distconf. Introduce `fail_domain_type` setting that's useful for the 3-node cluster case. [#11632](https://github.com/ydb-platform/ydb/pull/11632) ([Ivan Blinkov](https://github.com/blinkov)).
* ... [#11675](https://github.com/ydb-platform/ydb/pull/11675) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Report CPU consumtion of TSkeleton actor. [#11719](https://github.com/ydb-platform/ydb/pull/11719) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Datashard reports statistics about its locks. [#11731](https://github.com/ydb-platform/ydb/pull/11731) ([azevaykin](https://github.com/azevaykin)).
* Add support for ydbd server start with dynconfig (config with metadata and selectors). [#11745](https://github.com/ydb-platform/ydb/pull/11745) ([mregrock](https://github.com/mregrock)).
* ... [#11759](https://github.com/ydb-platform/ydb/pull/11759) ([Arseny](https://github.com/what-the-fawk)).
* YDB FQ: support Logging as an external data source. [#11765](https://github.com/ydb-platform/ydb/pull/11765) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ... [#11771](https://github.com/ydb-platform/ydb/pull/11771) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#11786](https://github.com/ydb-platform/ydb/pull/11786) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#11925](https://github.com/ydb-platform/ydb/pull/11925) ([Alexey Efimov](https://github.com/adameat)).
* Added the ability to check users' passwords whenever they are set with `CREATE USER` and `ALTER USER` Were added following checks: - Minimum password length - Passwords must include a lowercase character - Passwords must include an uppercase character - Passwords must include a number - Passwords must include a special character from list `!@#$%^&*()_+{}|<>?=` All checks can be enabled or disabled over configuration. [#11963](https://github.com/ydb-platform/ydb/pull/11963) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Works in the memory profiling mode only. [#11968](https://github.com/ydb-platform/ydb/pull/11968) ([Ivan](https://github.com/abyss7)).
* ... [#12042](https://github.com/ydb-platform/ydb/pull/12042) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#12044](https://github.com/ydb-platform/ydb/pull/12044) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#12048](https://github.com/ydb-platform/ydb/pull/12048) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* ... [#12075](https://github.com/ydb-platform/ydb/pull/12075) ([Alexey Efimov](https://github.com/adameat)).
* ... [#12262](https://github.com/ydb-platform/ydb/pull/12262) ([Oleg Doronin](https://github.com/dorooleg)).
* Added a backup of changefeeds when calling the tools dump command in the ydb cli. [#12283](https://github.com/ydb-platform/ydb/pull/12283) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* ... [#12286](https://github.com/ydb-platform/ydb/pull/12286) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Add ydb cli replace and fetch commands into ydb_cli. [#12312](https://github.com/ydb-platform/ydb/pull/12312) ([mregrock](https://github.com/mregrock)).
* Valid link https://hub.docker.com/r/ydbplatform/local-ydb. [#12371](https://github.com/ydb-platform/ydb/pull/12371) ([Vladislav Polyakov](https://github.com/polRk)).
* ... [#12374](https://github.com/ydb-platform/ydb/pull/12374) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#12405](https://github.com/ydb-platform/ydb/pull/12405) ([Semyon](https://github.com/swalrus1)).
* Implement GetBlockRequest. [#12431](https://github.com/ydb-platform/ydb/pull/12431) ([mregrock](https://github.com/mregrock)).
* ... [#12521](https://github.com/ydb-platform/ydb/pull/12521) ([kungurtsev](https://github.com/kunga)).
* Changed the default compression to LZ4 - Added the ability to change the default compression through the CS configuration. - If compression is not specified for a column in a schema, plain compression will not be specified. - Added error checking if compression level is set but compression type is not specified. [#12542](https://github.com/ydb-platform/ydb/pull/12542) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* ... [#12544](https://github.com/ydb-platform/ydb/pull/12544) ([Alexey Efimov](https://github.com/adameat)).
* ... [#12563](https://github.com/ydb-platform/ydb/pull/12563) ([Oleg Doronin](https://github.com/dorooleg)).
* `ydb import file csv` command now saves import progress. Relaunching import command will continue from the line it was interrupted on. [#12570](https://github.com/ydb-platform/ydb/pull/12570) ([Nikolay Perfilov](https://github.com/pnv1)).
* Automatically account lockout after some attempts to login with wrong password. User is unlocked after `AttemptResetDuration` time in config. If `AttemptResetDuration` is 0 then user is locked out permanently. [#12578](https://github.com/ydb-platform/ydb/pull/12578) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Support tracing feature in topic write session. There are three commands in write session: init, write and update token requests. For all these commands we generate separate sampled traces as for single grpc requests. [#12649](https://github.com/ydb-platform/ydb/pull/12649) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Addi BSC/Console interaction protocol for single config replacement. [#12662](https://github.com/ydb-platform/ydb/pull/12662) ([mregrock](https://github.com/mregrock)).
* ... [#12664](https://github.com/ydb-platform/ydb/pull/12664) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#12730](https://github.com/ydb-platform/ydb/pull/12730) ([Oleg Doronin](https://github.com/dorooleg)).
* Ydb/apps/ydb/ut ydbworkloadtopic.full_statistics_usetx. [#12786](https://github.com/ydb-platform/ydb/pull/12786) ([Kirill Rysin](https://github.com/naspirato)).
* Added BSController transaction to stop PDisk - Added new PDisk state `Stopped`. [#12799](https://github.com/ydb-platform/ydb/pull/12799) ([Semyon Danilov](https://github.com/SammyVimes)).
* Snapshot Isolation. [#12825](https://github.com/ydb-platform/ydb/pull/12825) ([Nikita Vasilev](https://github.com/nikvas0)).
* Export changefeed's configuration to s3. [#12882](https://github.com/ydb-platform/ydb/pull/12882) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* ... [#12897](https://github.com/ydb-platform/ydb/pull/12897) ([Dmitry O](https://github.com/alephonea)).
* Add validation of backup file checksums during importing from S3. [#12909](https://github.com/ydb-platform/ydb/pull/12909) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#12946](https://github.com/ydb-platform/ydb/pull/12946) ([SloNN](https://github.com/SloNN)).
* New option in query: CREATE USER user LOGIN; CREATE USER user NOLOGIN; ALTER USER user LOGIN; ALTER USER user NOLOGIN;. [#12957](https://github.com/ydb-platform/ydb/pull/12957) ([flown4qqqq](https://github.com/flown4qqqq)).
* ... [#12962](https://github.com/ydb-platform/ydb/pull/12962) ([Alexey Efimov](https://github.com/adameat)).
* This control from Immediate Control Board was interfering with tcmalloc's default memory soft limit from MemoryController - since I found no way to combine both I have to remove the control. [#13008](https://github.com/ydb-platform/ydb/pull/13008) ([Ivan](https://github.com/abyss7)).
* Https://st.yandex-team.ru/yq-4000. [#13028](https://github.com/ydb-platform/ydb/pull/13028) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#13046](https://github.com/ydb-platform/ydb/pull/13046) ([Oleg Doronin](https://github.com/dorooleg)).
* Remove verify that checks generation increases by one. [#13076](https://github.com/ydb-platform/ydb/pull/13076) ([mregrock](https://github.com/mregrock)).
* New oidc handler for cleaning cookie. [#13097](https://github.com/ydb-platform/ydb/pull/13097) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Support Console interoperation through distconf. [#13109](https://github.com/ydb-platform/ydb/pull/13109) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Add block-4-2-4-nodes and block-4-2-2-nodes erasure types for ydbd_slice. [#13163](https://github.com/ydb-platform/ydb/pull/13163) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Use discovery for kafka proxy port (instead of single port assigned in configs). ... [#13197](https://github.com/ydb-platform/ydb/pull/13197) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* Default compression setting via CS config and its validation. [#13203](https://github.com/ydb-platform/ydb/pull/13203) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* Add erasure none for slices. [#13208](https://github.com/ydb-platform/ydb/pull/13208) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Added CREATE TABLE text suggestion on scheme error during `ydb import file csv`. [#13247](https://github.com/ydb-platform/ydb/pull/13247) ([Nikolay Perfilov](https://github.com/pnv1)).
* Add top-level security config declaration. [#13273](https://github.com/ydb-platform/ydb/pull/13273) ([mregrock](https://github.com/mregrock)).
* ... [#13307](https://github.com/ydb-platform/ydb/pull/13307) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13371](https://github.com/ydb-platform/ydb/pull/13371) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Also fix heap-use-after-free for failed allocation backtrace. [#13376](https://github.com/ydb-platform/ydb/pull/13376) ([Ivan](https://github.com/abyss7)).
* ... [#13389](https://github.com/ydb-platform/ydb/pull/13389) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* Adds streaming support to viewer query executions, closes [#13327](https://github.com/ydb-platform/ydb/issues/13327). [#13488](https://github.com/ydb-platform/ydb/pull/13488) ([Alexey Efimov](https://github.com/adameat)).
* Usage example: ```text StorageLoad: { DurationSeconds: 300000 Tablets: { Tablets: { TabletName: "Loader" Channel: 4 GroupId: 2181038080 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 5 GroupId: 2181038081 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 6 GroupId: 2181038082 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 7 GroupId: 2181038083 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 8 GroupId: 2181038084 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 9 GroupId: 2181038085 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 10 GroupId: 2181038086 Generation: 1 } Tablets: { TabletName: "Loader" Channel: 11 GroupId: 2181038087 Generation: 1 }. [#13547](https://github.com/ydb-platform/ydb/pull/13547) ([Sergey Belyakov](https://github.com/serbel324)).
* Add network utilization aggregate. [#13550](https://github.com/ydb-platform/ydb/pull/13550) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13680](https://github.com/ydb-platform/ydb/pull/13680) ([Alexander Avdonkin](https://github.com/aavdonkin)).
* The new sensor name is "Stats/MemMapsCount". [#13758](https://github.com/ydb-platform/ydb/pull/13758) ([Ivan](https://github.com/abyss7)).
* ... [#13768](https://github.com/ydb-platform/ydb/pull/13768) ([Oleg Doronin](https://github.com/dorooleg)).
* Add command line option for kafka ports. [#13799](https://github.com/ydb-platform/ydb/pull/13799) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).

#### Performance improvement
* ... [#6333](https://github.com/ydb-platform/ydb/pull/6333) ([Roman Udovichenko](https://github.com/rvu1024)).
* Permanently enable extended payload format generation. [#6434](https://github.com/ydb-platform/ydb/pull/6434) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Do not trigger tablet balancer when all nodes have high usage. [#6532](https://github.com/ydb-platform/ydb/pull/6532) ([vporyadke](https://github.com/vporyadke)).
* Added milestone queue in replication to reduce work unit computations. [#6561](https://github.com/ydb-platform/ydb/pull/6561) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#6705](https://github.com/ydb-platform/ydb/pull/6705) ([yumkam](https://github.com/yumkam)).
* ... [#6753](https://github.com/ydb-platform/ydb/pull/6753) ([Oleg Doronin](https://github.com/dorooleg)).
* Make less coordinator&mediator moves. [#6840](https://github.com/ydb-platform/ydb/pull/6840) ([vporyadke](https://github.com/vporyadke)).
* ... [#6951](https://github.com/ydb-platform/ydb/pull/6951) ([yumkam](https://github.com/yumkam)).
* Optimize tenantinfo handler add trace spans. [#7699](https://github.com/ydb-platform/ydb/pull/7699) ([Alexey Efimov](https://github.com/adameat)).
* ... [#8146](https://github.com/ydb-platform/ydb/pull/8146) ([yumkam](https://github.com/yumkam)).
* Closes [#8382](https://github.com/ydb-platform/ydb/issues/8382). [#8619](https://github.com/ydb-platform/ydb/pull/8619) ([Alexey Efimov](https://github.com/adameat)).
* Fix autocomplete to work with directories, optimize a little. [#9074](https://github.com/ydb-platform/ydb/pull/9074) ([Alexey Efimov](https://github.com/adameat)).
* ... [#9099](https://github.com/ydb-platform/ydb/pull/9099) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Little optimizations for healthcheck. [#9221](https://github.com/ydb-platform/ydb/pull/9221) ([Alexey Efimov](https://github.com/adameat)).
* ... [#9298](https://github.com/ydb-platform/ydb/pull/9298) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Pre-serialize topic's bootstrap config. [#9331](https://github.com/ydb-platform/ydb/pull/9331) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#9332](https://github.com/ydb-platform/ydb/pull/9332) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Disable blob header by default in VDisk. [#9491](https://github.com/ydb-platform/ydb/pull/9491) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#9572](https://github.com/ydb-platform/ydb/pull/9572) ([yumkam](https://github.com/yumkam)).
* Fix buggy IC setting leading to performance degradation. [#9707](https://github.com/ydb-platform/ydb/pull/9707) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#9715](https://github.com/ydb-platform/ydb/pull/9715) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* PDisk will choose different BufferPool sizes based on underlying device type - it's important for NVMe to have more buffers with less size. [#9865](https://github.com/ydb-platform/ydb/pull/9865) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Parse CDC topic's partitioning once and more efficiently. [#9914](https://github.com/ydb-platform/ydb/pull/9914) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Improved connection loss handling in Change Data Capture. [#9993](https://github.com/ydb-platform/ydb/pull/9993) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#10085](https://github.com/ydb-platform/ydb/pull/10085) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ... [#10130](https://github.com/ydb-platform/ydb/pull/10130) ([yumkam](https://github.com/yumkam)).
* Optimized batch processing in Topics. [#10131](https://github.com/ydb-platform/ydb/pull/10131) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Added simdjson parser into RD. [#10204](https://github.com/ydb-platform/ydb/pull/10204) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Disable pipe retries by default. [#10238](https://github.com/ydb-platform/ydb/pull/10238) ([Alexey Efimov](https://github.com/adameat)).
* The `UpdateOffsetsInTransaction` method is retrieved once before COMMIT. [#10273](https://github.com/ydb-platform/ydb/pull/10273) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#10288](https://github.com/ydb-platform/ydb/pull/10288) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Added messages accumulating. [#10380](https://github.com/ydb-platform/ydb/pull/10380) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Support of block input in map operations jobs (using Arrow input format provided by YT). [#10587](https://github.com/ydb-platform/ydb/pull/10587) ([Mark Ziganshin](https://github.com/loochek)).
* Query service: optimize result passing over trailing results. [#10690](https://github.com/ydb-platform/ydb/pull/10690) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Passed UV from parser to filter. [#10721](https://github.com/ydb-platform/ydb/pull/10721) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* The PQ tablet can perform transactions in parallel. [#10885](https://github.com/ydb-platform/ydb/pull/10885) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Optimize hive start time. [#10969](https://github.com/ydb-platform/ydb/pull/10969) ([vporyadke](https://github.com/vporyadke)).
* ... [#11010](https://github.com/ydb-platform/ydb/pull/11010) ([Aleksei Borzenkov](https://github.com/snaury)).
* Enabled LLVM in purecalc filters. [#11442](https://github.com/ydb-platform/ydb/pull/11442) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Increased ydb import file csv throughput approximately from 40 to 70 MiB/s. [#11679](https://github.com/ydb-platform/ydb/pull/11679) ([Nikolay Perfilov](https://github.com/pnv1)).
* Increased ydb import file csv throughput approximately from 70 to 90 MiB/s. [#11864](https://github.com/ydb-platform/ydb/pull/11864) ([Nikolay Perfilov](https://github.com/pnv1)).
* ... [#11872](https://github.com/ydb-platform/ydb/pull/11872) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Increased ydb import file csv throughput approximately from 90 to 130 MiB/s. [#11907](https://github.com/ydb-platform/ydb/pull/11907) ([Nikolay Perfilov](https://github.com/pnv1)).
* Removed mutex for purecalc compilation. [#12136](https://github.com/ydb-platform/ydb/pull/12136) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Now we are giving all messages to the end of the blob in which they are stored to reduce the load when reading small messages. [#12153](https://github.com/ydb-platform/ydb/pull/12153) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Enhanced parallelism of data restoring in `ydb tools restore`. [#12203](https://github.com/ydb-platform/ydb/pull/12203) ([Ilia Shakhov](https://github.com/pixcc)).
* Previous pr - https://github.com/ydb-platform/ydb/pull/9332. [#12366](https://github.com/ydb-platform/ydb/pull/12366) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Use new YQL mechanic for the Arrow buffer resize - to shrink in 100% of times when consuming blocks for DqOutput. Otherwise we get over-allocated buffers with very small accounted logical size - it leads to OOMs. [#12373](https://github.com/ydb-platform/ydb/pull/12373) ([Ivan](https://github.com/abyss7)).
* Added parallel purecalc compilation and abort requests. [#12505](https://github.com/ydb-platform/ydb/pull/12505) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add caching for `ListNodes` request in `DynamicNameserver`. [#12694](https://github.com/ydb-platform/ydb/pull/12694) ([Ilia Shakhov](https://github.com/pixcc)).
* Node TNodeLocation processing to NodeWarden in order to reduce CPU consumption. [#12776](https://github.com/ydb-platform/ydb/pull/12776) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#13174](https://github.com/ydb-platform/ydb/pull/13174) ([Maksim Zinal](https://github.com/zinal)).

#### Experimental feature
* Support for UPDATE operation in EvWrite. [#6339](https://github.com/ydb-platform/ydb/pull/6339) ([azevaykin](https://github.com/azevaykin)).
* Syntax for creating vector index ```sql ALTER TABLE table ADD INDEX idx GLOBAL USING vector_kmeans_tree ON (col) COVER (col) WITH (key=value) ```. [#6602](https://github.com/ydb-platform/ydb/pull/6602) ([azevaykin](https://github.com/azevaykin)).
* ColumnShard + Datashard Reads. [#6800](https://github.com/ydb-platform/ydb/pull/6800) ([Nikita Vasilev](https://github.com/nikvas0)).
* ... [#6877](https://github.com/ydb-platform/ydb/pull/6877) ([Oleg Doronin](https://github.com/dorooleg)).
* Partial implementation of https://github.com/ydb-platform/ydb-rfc/blob/main/0104_incr-backup-sql.md Add basic (create/alter/drop) `BACKUP COLLECTION` entity with settings. [#7255](https://github.com/ydb-platform/ydb/pull/7255) ([Innokentii Mokin](https://github.com/Enjection)).
* Support for new granular timecast protocol in mediator tablets. [#7986](https://github.com/ydb-platform/ydb/pull/7986) ([Aleksei Borzenkov](https://github.com/snaury)).
* Use granular mediator time that is not blocked by other tablets. [#8090](https://github.com/ydb-platform/ydb/pull/8090) ([Aleksei Borzenkov](https://github.com/snaury)).
* ... [#8147](https://github.com/ydb-platform/ydb/pull/8147) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ... [#8400](https://github.com/ydb-platform/ydb/pull/8400) ([Aleksei Borzenkov](https://github.com/snaury)).
* ExtractCommonPredicatesFromLogicalOps setting and optimizers. [#8570](https://github.com/ydb-platform/ydb/pull/8570) ([Andrey Neporada](https://github.com/nepal)).
* ... [#9003](https://github.com/ydb-platform/ydb/pull/9003) ([Aleksei Borzenkov](https://github.com/snaury)).
* Support for DISTINCT clause for aggregation functions calculated over window. [#9090](https://github.com/ydb-platform/ydb/pull/9090) ([Mark Ziganshin](https://github.com/loochek)).
* Exporting CMake with skip platforms with errors. [#10067](https://github.com/ydb-platform/ydb/pull/10067) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* Feature flag `enable_antlr4_parser` helps to enable the ANTLRv4 parser inside docker container local-ydb. [#11764](https://github.com/ydb-platform/ydb/pull/11764) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* This config option propagates inside Dq internals. For Kqp it's set to 100% by default to force copying of underlying buffers. [#12520](https://github.com/ydb-platform/ydb/pull/12520) ([Ivan](https://github.com/abyss7)).
* ... [#12733](https://github.com/ydb-platform/ydb/pull/12733) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* Added new `ydb debug latency` kind `ActorChain`. [#12917](https://github.com/ydb-platform/ydb/pull/12917) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Add log_config and better templating for ydbd_slice. [#12956](https://github.com/ydb-platform/ydb/pull/12956) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Link udf function 'roaring'. [#13071](https://github.com/ydb-platform/ydb/pull/13071) ([azevaykin](https://github.com/azevaykin)).

#### Improvement
* Copy section `host_configs` into `config.yaml` configuration. [#3012](https://github.com/ydb-platform/ydb/pull/3012) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Add reason for pending action in maintenance public API. [#3289](https://github.com/ydb-platform/ydb/pull/3289) ([Ilia Shakhov](https://github.com/pixcc)).
* Add `ydb scheme permissions {clear,set}-inheritance` commands. Add `ydbd db schema access {clear,set}-inheritance` commands. [#3776](https://github.com/ydb-platform/ydb/pull/3776) ([ijon](https://github.com/ijon)).
* Add Pack/Unpack method implementations to TTupleLayoutFallback class. [#4905](https://github.com/ydb-platform/ydb/pull/4905) ([Alexander](https://github.com/san-kir-k)).
* [issue](https://github.com/orgs/ydb-platform/projects/37?pane=issue&itemId=67157010) - Added oidc-proxy configuration parameters. This includes `auth-profile`, which determines the logic that oidc_proxy will follow. Possible options: `y-profile`, `n-profile`. Default is `y-profile` - For oidc_proxy handlers, added a new version of logic depending on `auth-profile`. The old handlers were not changed, so some logic is duplicated. I plan to combine some of the logic in a minor refactoring later. - For tokenator (mvp authentithication) added a new version of logic depending on `auth-profile` also. I plan to new version support for `meta` later. - Moved new iam spec to github into public api - Changed the endpoint names in tests to more neutral ones. [#6059](https://github.com/ydb-platform/ydb/pull/6059) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Ca factory in executer to support extra allocations and memory tracking everywhere. [#6084](https://github.com/ydb-platform/ydb/pull/6084) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Implemented HeapIterator for VDisk iterators. [#6136](https://github.com/ydb-platform/ydb/pull/6136) ([mregrock](https://github.com/mregrock)).
* Add feature flag enableimplicitqueryparametertypes to table service config to not restart database when feature flag is changed. [#6286](https://github.com/ydb-platform/ydb/pull/6286) ([VPolka](https://github.com/VPolka)).
* Add PG upgrade script. Add missing catalog/sql files from 14.2. [#6307](https://github.com/ydb-platform/ydb/pull/6307) ([Andrey Neporada](https://github.com/nepal)).
* Switch generate_kernels.py to python3. Regenerate kernels. [#6328](https://github.com/ydb-platform/ydb/pull/6328) ([Andrey Neporada](https://github.com/nepal)).
* Upgrade pg_wrapper to PostgreSQL 14.3. [#6334](https://github.com/ydb-platform/ydb/pull/6334) ([Andrey Neporada](https://github.com/nepal)).
* Upgrade pg_wrapper to PostgreSQL 14.5. [#6346](https://github.com/ydb-platform/ydb/pull/6346) ([Andrey Neporada](https://github.com/nepal)).
* Document copy_src.sh and PostgreSQL update process. [#6372](https://github.com/ydb-platform/ydb/pull/6372) ([Andrey Neporada](https://github.com/nepal)).
* Upgrade pg_wrapper to PostgreSQL 14.8. [#6373](https://github.com/ydb-platform/ydb/pull/6373) ([Andrey Neporada](https://github.com/nepal)).
* Hide deprecated operation kinds in `operation list`. [#6407](https://github.com/ydb-platform/ydb/pull/6407) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Create separate trace id for BlobStorage requests and link them to original traces. [#6444](https://github.com/ydb-platform/ydb/pull/6444) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Change default value to enable spilling. [#6462](https://github.com/ydb-platform/ydb/pull/6462) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Added request time info printing. [#6479](https://github.com/ydb-platform/ydb/pull/6479) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#6509](https://github.com/ydb-platform/ydb/pull/6509) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Improve memory limits errors observability (add debugging details). [#6551](https://github.com/ydb-platform/ydb/pull/6551) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Move allocate resources call before actor launch from node service to factory. [#6583](https://github.com/ydb-platform/ydb/pull/6583) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Added benchmarks and implemented HeapIterator in code. [#6611](https://github.com/ydb-platform/ydb/pull/6611) ([mregrock](https://github.com/mregrock)).
* Use same on memory limit handler everywhere. [#6641](https://github.com/ydb-platform/ydb/pull/6641) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fixed WM counters. [#6643](https://github.com/ydb-platform/ydb/pull/6643) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#6651](https://github.com/ydb-platform/ydb/pull/6651) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#6655](https://github.com/ydb-platform/ydb/pull/6655) ([Mars Agliullin](https://github.com/marsaly79)).
* Added CPU monitoring and yaml configs. [#6675](https://github.com/ydb-platform/ydb/pull/6675) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added retries for CURLE_COULDNT_RESOLVE_HOST. [#6732](https://github.com/ydb-platform/ydb/pull/6732) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add spilling nodes and pragma. [#6769](https://github.com/ydb-platform/ydb/pull/6769) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Randomize default spilling root. [#6781](https://github.com/ydb-platform/ydb/pull/6781) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* ... [#6784](https://github.com/ydb-platform/ydb/pull/6784) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#6791](https://github.com/ydb-platform/ydb/pull/6791) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Added feature flag for resource pools on sls. [#6808](https://github.com/ydb-platform/ydb/pull/6808) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Allow enabling spilling for compute nodes. [#6895](https://github.com/ydb-platform/ydb/pull/6895) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* ... [#6916](https://github.com/ydb-platform/ydb/pull/6916) ([vporyadke](https://github.com/vporyadke)).
* Add queued time into query stats. [#6965](https://github.com/ydb-platform/ydb/pull/6965) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Periodically update node resource maximum to reflect as thread pool sizes changes. [#6967](https://github.com/ydb-platform/ydb/pull/6967) ([vporyadke](https://github.com/vporyadke)).
* ... [#7042](https://github.com/ydb-platform/ydb/pull/7042) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Refactor viewer backend closes [#6668](https://github.com/ydb-platform/ydb/issues/6668). [#7071](https://github.com/ydb-platform/ydb/pull/7071) ([Alexey Efimov](https://github.com/adameat)).
* Temporary files that are created during spilling now will be stored in /tmp/spilling-service-tmp/node_\<nodeId\>_\<guid\> and will be removed on next SpillingService run. [#7108](https://github.com/ydb-platform/ydb/pull/7108) ([Vladluk](https://github.com/vladl2802)).
* Added pools cache. [#7186](https://github.com/ydb-platform/ydb/pull/7186) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Improve node deletion in hive. [#7218](https://github.com/ydb-platform/ydb/pull/7218) ([vporyadke](https://github.com/vporyadke)).
* Added grpc endpoint into kqprun. [#7231](https://github.com/ydb-platform/ydb/pull/7231) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Renamed oidc `endpoint` parameters to `url-path`. [#7246](https://github.com/ydb-platform/ydb/pull/7246) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Fix handling of schema elements in .sys directory. [#7429](https://github.com/ydb-platform/ydb/pull/7429) ([Alexey Efimov](https://github.com/adameat)).
* Removed abort. Added error event instead. ... [#7435](https://github.com/ydb-platform/ydb/pull/7435) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* `arrow::Type::STRING`, `arrow::Type::BINARY`, etc types are now not optional with type inferring. [#7456](https://github.com/ydb-platform/ydb/pull/7456) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Add group-by function to storage/groups handler. many fixes. [#7480](https://github.com/ydb-platform/ydb/pull/7480) ([Alexey Efimov](https://github.com/adameat)).
* Closes [#7478](https://github.com/ydb-platform/ydb/issues/7478). [#7481](https://github.com/ydb-platform/ydb/pull/7481) ([Alexey Efimov](https://github.com/adameat)).
* Https://github.com/orgs/ydb-platform/projects/37/views/1?filterquery=%5b%5bnebius+iam+integration%5d%5d&pane=issue&itemid=67157010 remove unnecessary - unused variable accessservicetype - handle tevhttpincomingresponse dublicates - removeappliedcookie method. cookie removed like in the first version now. [#7487](https://github.com/ydb-platform/ydb/pull/7487) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Remove start message for kqprun. [#7490](https://github.com/ydb-platform/ydb/pull/7490) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Support memory pools configurations & improve spilling settings. [#7510](https://github.com/ydb-platform/ydb/pull/7510) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Support EnforceUserTokenCheckRequirement option for the case of mTLS. [#7511](https://github.com/ydb-platform/ydb/pull/7511) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Add `--pgwire-port` and `--pgwire-address` command line options for ydbd process. [#7528](https://github.com/ydb-platform/ydb/pull/7528) ([Timofey Koolin](https://github.com/rekby)).
* [refactoring] Remove unused GatherParents API. [#7541](https://github.com/ydb-platform/ydb/pull/7541) ([Andrey Neporada](https://github.com/nepal)).
* Add audit logging for login operation. [#7546](https://github.com/ydb-platform/ydb/pull/7546) ([ijon](https://github.com/ijon)).
* [issue](https://github.com/ydb-platform/ydb/issues/4611) -- changed `StorageUsage` to `TablesStorage`. If there is no quota info about specifi storage type - it doesn't return -- added `DatabaseStorage` -- use `SoftQuota` for storage limit. [#7554](https://github.com/ydb-platform/ydb/pull/7554) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#7574](https://github.com/ydb-platform/ydb/pull/7574) ([Innokentii Mokin](https://github.com/Enjection)).
* When client says that it expects data in json format, send issues in json format instead of html. It improves issues display in YDB UI. [#7576](https://github.com/ydb-platform/ydb/pull/7576) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Schedule tablets even when all nodes report extremely high network or cpu usage. [#7583](https://github.com/ydb-platform/ydb/pull/7583) ([vporyadke](https://github.com/vporyadke)).
* Limit transformation count while trying to annotate single node. [#7588](https://github.com/ydb-platform/ydb/pull/7588) ([Andrey Neporada](https://github.com/nepal)).
* Query Hints for Cardinality and Join algorithms are added to the Cost Based Optimizer. [#7629](https://github.com/ydb-platform/ydb/pull/7629) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Refactor constructors of DSProxy requests. [#7631](https://github.com/ydb-platform/ydb/pull/7631) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#7667](https://github.com/ydb-platform/ydb/pull/7667) ([Innokentii Mokin](https://github.com/Enjection)).
* Pass actor system config into testlib. [#7693](https://github.com/ydb-platform/ydb/pull/7693) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add interrupt-inheritance flag to acl handler. [#7701](https://github.com/ydb-platform/ydb/pull/7701) ([Alexey Efimov](https://github.com/adameat)).
* Https://st.yandex-team.ru/yq-2830. [#7734](https://github.com/ydb-platform/ydb/pull/7734) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Add stats for queries with errors. [#7753](https://github.com/ydb-platform/ydb/pull/7753) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Added validations on not existing for alter/drop object. [#7757](https://github.com/ydb-platform/ydb/pull/7757) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Don't penalize resource pools after consumption peaks. [#7763](https://github.com/ydb-platform/ydb/pull/7763) ([Mikhail Surin](https://github.com/ssmike)).
* Добавил версии RetryQuery, которые возращают TASyncStatus и TStatus и которые принимают ламбду, принимающую TQueryClient. [#7777](https://github.com/ydb-platform/ydb/pull/7777) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* Increase future wait timeout. [#7780](https://github.com/ydb-platform/ydb/pull/7780) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Refactoring tests for `ydb-cli`. The tests use a recipe. It creates a database `/local` with the user `root`. [#7781](https://github.com/ydb-platform/ydb/pull/7781) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Removed session creation per file and added saving for describe result before import start, that allows to load more than 50 files without "active sessions limit" error. [#7785](https://github.com/ydb-platform/ydb/pull/7785) ([Bulat](https://github.com/Gazizonoki)).
* Support client cert in WhoAmI (it has separate implementation). [#7816](https://github.com/ydb-platform/ydb/pull/7816) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#7836](https://github.com/ydb-platform/ydb/pull/7836) ([Vadim Averin](https://github.com/avevad)).
* Fix for [yq-2576](https://st.yandex-team.ru/yq-2576). [#7842](https://github.com/ydb-platform/ydb/pull/7842) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Pass allow local files into runtime listing and schema inference. [#7844](https://github.com/ydb-platform/ydb/pull/7844) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* [ydb-cli] saving plan & ast even on errors. [#7874](https://github.com/ydb-platform/ydb/pull/7874) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Minor style fixes. [#7907](https://github.com/ydb-platform/ydb/pull/7907) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Add more introspection into PDisk's ChunkWrite and LogWrite. [#7941](https://github.com/ydb-platform/ydb/pull/7941) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Currently mkql allocator makes requests by chunks of 30mib minimum, so making that configurable and changing that limit to 8mib. [#7951](https://github.com/ydb-platform/ydb/pull/7951) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Improve error in s3 applicator actor. [#7976](https://github.com/ydb-platform/ydb/pull/7976) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added s3 wildcards validations. [#8017](https://github.com/ydb-platform/ydb/pull/8017) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Ensure per_az followers are created when new datacenter is registered & are deleted when it is deregistered. [#8069](https://github.com/ydb-platform/ydb/pull/8069) ([vporyadke](https://github.com/vporyadke)).
* Add monitoring sensors for `Node Broker` tablet. [#8091](https://github.com/ydb-platform/ydb/pull/8091) ([Ilia Shakhov](https://github.com/pixcc)).
* Type inference json suppoty. [#8102](https://github.com/ydb-platform/ydb/pull/8102) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Optimize nodes handler fix issues with serverless databases fix http redirects issues switch viewer ut to in-memory disks add cookie to scheme board actor. [#8111](https://github.com/ydb-platform/ydb/pull/8111) ([Alexey Efimov](https://github.com/adameat)).
* Implement tpc benchmarks as tests. [#8125](https://github.com/ydb-platform/ydb/pull/8125) ([Vladluk](https://github.com/vladl2802)).
* ... [#8131](https://github.com/ydb-platform/ydb/pull/8131) ([Sergey Belyakov](https://github.com/serbel324)).
* Add support redirects for oidc proxy. [#8151](https://github.com/ydb-platform/ydb/pull/8151) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#8160](https://github.com/ydb-platform/ydb/pull/8160) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix for [#7989](https://github.com/ydb-platform/ydb/issues/7989). [#8210](https://github.com/ydb-platform/ydb/pull/8210) ([Ivan](https://github.com/abyss7)).
* ... [#8232](https://github.com/ydb-platform/ydb/pull/8232) ([Oleg Doronin](https://github.com/dorooleg)).
* Support for `partitioned_by`, `file_pattern` and `csv_delimiter` parameters with schema inference. [#8252](https://github.com/ydb-platform/ydb/pull/8252) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Added default values for `Family` and `FamilyName` fields when use describe handler. [#8266](https://github.com/ydb-platform/ydb/pull/8266) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Implement security tags passthrough in DQ. [#8308](https://github.com/ydb-platform/ydb/pull/8308) ([Vadim Averin](https://github.com/avevad)).
* If DataShard detects IsSubDomainOutOfSpace than it should return DISK_SPACE_EXHAUSTED error. [#8318](https://github.com/ydb-platform/ydb/pull/8318) ([azevaykin](https://github.com/azevaykin)).
* Do not use Likely() as a sign of already performed pushdown * Add more cases when pushdown should not be done. [#8360](https://github.com/ydb-platform/ydb/pull/8360) ([Andrey Neporada](https://github.com/nepal)).
* ... [#8376](https://github.com/ydb-platform/ydb/pull/8376) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* CMS request priorities is enabled by default. [#8380](https://github.com/ydb-platform/ydb/pull/8380) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#8395](https://github.com/ydb-platform/ydb/pull/8395) ([pilik](https://github.com/pashandor789)).
* ... [#8396](https://github.com/ydb-platform/ydb/pull/8396) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Change a little how feature flags are returned. [#8434](https://github.com/ydb-platform/ydb/pull/8434) ([Alexey Efimov](https://github.com/adameat)).
* Improved overload issues. [#8437](https://github.com/ydb-platform/ydb/pull/8437) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix cors headers for traces. [#8458](https://github.com/ydb-platform/ydb/pull/8458) ([Alexey Efimov](https://github.com/adameat)).
* Support per-query limits [#4889](https://github.com/ydb-platform/ydb/issues/4889). [#8520](https://github.com/ydb-platform/ydb/pull/8520) ([Mikhail Surin](https://github.com/ssmike)).
* Collect security tags properly from table content files. [#8542](https://github.com/ydb-platform/ydb/pull/8542) ([Vadim Averin](https://github.com/avevad)).
* Add audit logging for (database/tables) export and import operations. [#8550](https://github.com/ydb-platform/ydb/pull/8550) ([ijon](https://github.com/ijon)).
* ... [#8567](https://github.com/ydb-platform/ydb/pull/8567) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add doc for parallel scans. [#8585](https://github.com/ydb-platform/ydb/pull/8585) ([Mikhail Surin](https://github.com/ssmike)).
* More confident DS proxy phantom blob checking logic. [#8611](https://github.com/ydb-platform/ydb/pull/8611) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Relax FlatMap over Extend requirements. [#8626](https://github.com/ydb-platform/ydb/pull/8626) ([Andrey Neporada](https://github.com/nepal)).
* ... [#8637](https://github.com/ydb-platform/ydb/pull/8637) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#8657](https://github.com/ydb-platform/ydb/pull/8657) ([Vitaly Stoyan](https://github.com/vitstn)).
* Interactive CLI (`ydb` command) now works over QueryService instead of QueryService - Interactive CLI now terminates on "quit" or "exit" commands. [#8665](https://github.com/ydb-platform/ydb/pull/8665) ([Nikolay Perfilov](https://github.com/pnv1)).
* Added issues for timeout and cancelled. [#8718](https://github.com/ydb-platform/ydb/pull/8718) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Allow SelfHeal operation while in DEGRADED state. [#8734](https://github.com/ydb-platform/ydb/pull/8734) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Inference projections support. [#8744](https://github.com/ydb-platform/ydb/pull/8744) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* ... [#8755](https://github.com/ydb-platform/ydb/pull/8755) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8760](https://github.com/ydb-platform/ydb/pull/8760) ([Vitaly Stoyan](https://github.com/vitstn)).
* Warn user that timestamp format params are not supported with type inferring. [#8762](https://github.com/ydb-platform/ydb/pull/8762) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Always show table with broken locks. [#8763](https://github.com/ydb-platform/ydb/pull/8763) ([Nikita Vasilev](https://github.com/nikvas0)).
* Report errors on databases ignore host in incoming cache. [#8766](https://github.com/ydb-platform/ydb/pull/8766) ([Alexey Efimov](https://github.com/adameat)).
* Added cancel after for script requests. [#8768](https://github.com/ydb-platform/ydb/pull/8768) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#8785](https://github.com/ydb-platform/ydb/pull/8785) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Split wideCombiner's state into buckets earlier - when the memory limit is set. It should prevent OOM after hash table x2 growth ... [#8804](https://github.com/ydb-platform/ydb/pull/8804) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Better spilling errors ... [#8812](https://github.com/ydb-platform/ydb/pull/8812) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Enable column shard by default in kqprun. [#8820](https://github.com/ydb-platform/ydb/pull/8820) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added validations for resource pool parametres. [#8831](https://github.com/ydb-platform/ydb/pull/8831) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Support PG types in YT export and some build fixes. [#8833](https://github.com/ydb-platform/ydb/pull/8833) ([Ivan Nikolaev](https://github.com/lex007in)).
* ... [#8902](https://github.com/ydb-platform/ydb/pull/8902) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add IListBuilder to UDF ABI. [#8914](https://github.com/ydb-platform/ydb/pull/8914) ([Vadim Averin](https://github.com/avevad)).
* Move redirects to base class, solve problem with redirects in serverless databases. [#8934](https://github.com/ydb-platform/ydb/pull/8934) ([Alexey Efimov](https://github.com/adameat)).
* Optimize waiting for index creation during restore in YDB CLI. [#8936](https://github.com/ydb-platform/ydb/pull/8936) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#8946](https://github.com/ydb-platform/ydb/pull/8946) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#8947](https://github.com/ydb-platform/ydb/pull/8947) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#8948](https://github.com/ydb-platform/ydb/pull/8948) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#8982](https://github.com/ydb-platform/ydb/pull/8982) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Fixed AS pools and added validations. [#9030](https://github.com/ydb-platform/ydb/pull/9030) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added resource pools classifiers validations. [#9037](https://github.com/ydb-platform/ydb/pull/9037) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add audit logging for web logout operation. [#9050](https://github.com/ydb-platform/ydb/pull/9050) ([ijon](https://github.com/ijon)).
* Added DisableExternalDataSourcesOnServerless feature flag. [#9062](https://github.com/ydb-platform/ydb/pull/9062) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#9080](https://github.com/ydb-platform/ydb/pull/9080) ([Andrey Molotkov](https://github.com/molotkov-and)).
* General improvements for in-test tpc benchs that run in nightly-run. [#9124](https://github.com/ydb-platform/ydb/pull/9124) ([Vladluk](https://github.com/vladl2802)).
* ... [#9192](https://github.com/ydb-platform/ydb/pull/9192) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Implement merge reads option for data query. [#9206](https://github.com/ydb-platform/ydb/pull/9206) ([Mikhail Surin](https://github.com/ssmike)).
* ... [#9245](https://github.com/ydb-platform/ydb/pull/9245) ([Vitaly Stoyan](https://github.com/vitstn)).
* 1. Inherit column group usage from YtMerge/YtCopy consumers to minimize data transformations in merge ops 2. Validate that YtCopy has equal input/output column groups 3. ResPull behaves like YtPublish without column group hint - a possible full result should have no column groups. [#9269](https://github.com/ydb-platform/ydb/pull/9269) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fix for [YQ-3677](https://st.yandex-team.ru/YQ-3677). [#9278](https://github.com/ydb-platform/ydb/pull/9278) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Put spilling stats in metrics in order to get those from dqrun. [#9282](https://github.com/ydb-platform/ydb/pull/9282) ([Vladluk](https://github.com/vladl2802)).
* Add easier way to get content of a group: - filter_group_by = group kind - filter_group = content for filtering. [#9289](https://github.com/ydb-platform/ydb/pull/9289) ([Alexey Efimov](https://github.com/adameat)).
* Support all arrow types in size calcer except of: * DENSE_UNION * DICTIONARY * EXTENSION. [#9296](https://github.com/ydb-platform/ydb/pull/9296) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#9305](https://github.com/ydb-platform/ydb/pull/9305) ([Vitaly Stoyan](https://github.com/vitstn)).
* Limit inflight cross-database scheme requests in the replication controller. [#9334](https://github.com/ydb-platform/ydb/pull/9334) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Support PG types in arrow and clickhouse. [#9335](https://github.com/ydb-platform/ydb/pull/9335) ([Ivan Nikolaev](https://github.com/lex007in)).
* Support PG types in CDC. [#9337](https://github.com/ydb-platform/ydb/pull/9337) ([Ivan Nikolaev](https://github.com/lex007in)).
* ... [#9379](https://github.com/ydb-platform/ydb/pull/9379) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#9403](https://github.com/ydb-platform/ydb/pull/9403) ([Vitaly Stoyan](https://github.com/vitstn)).
* Highlight YQL using common lexer in YDB CLI interactive mode. [#9404](https://github.com/ydb-platform/ydb/pull/9404) ([Victor Smirnov](https://github.com/vityaman)).
* Support Fetch and Replace operations for storage_config.yaml. [#9412](https://github.com/ydb-platform/ydb/pull/9412) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Node roles in cluster handler. [#9479](https://github.com/ydb-platform/ydb/pull/9479) ([Alexey Efimov](https://github.com/adameat)).
* Add more sort options for nodes handler. [#9481](https://github.com/ydb-platform/ydb/pull/9481) ([Alexey Efimov](https://github.com/adameat)).
* Make execute-query default action for query handler. [#9483](https://github.com/ydb-platform/ydb/pull/9483) ([Alexey Efimov](https://github.com/adameat)).
* Ignoring columns with unsupported parquet and json types (a.k.a. lists, structs, maps, dicts, etc) with type inferring. [#9524](https://github.com/ydb-platform/ydb/pull/9524) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Tune trace names. [#9540](https://github.com/ydb-platform/ydb/pull/9540) ([Alexey Efimov](https://github.com/adameat)).
* ... [#9553](https://github.com/ydb-platform/ydb/pull/9553) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#9556](https://github.com/ydb-platform/ydb/pull/9556) ([Oleg Doronin](https://github.com/dorooleg)).
* `ydb workload query run` command is now working over QueryService instead of ScriptingService. [#9564](https://github.com/ydb-platform/ydb/pull/9564) ([Nikolay Perfilov](https://github.com/pnv1)).
* Fix for [YQ-3691](https://st.yandex-team.ru/YQ-3691). [#9571](https://github.com/ydb-platform/ydb/pull/9571) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Add new field to sort lwtrack on it. [#9576](https://github.com/ydb-platform/ydb/pull/9576) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Remove state from cookie. Create random string, sign this string by client secret and send this pair as state. Remove isAjaxRequest from cookie. [#9588](https://github.com/ydb-platform/ydb/pull/9588) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Added session settings. [#9589](https://github.com/ydb-platform/ydb/pull/9589) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added kqp proxy database cache. [#9644](https://github.com/ydb-platform/ydb/pull/9644) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Help is now printed if a command is executed without required free arguments. [#9693](https://github.com/ydb-platform/ydb/pull/9693) ([Nikolay Perfilov](https://github.com/pnv1)).
* CMS allows to evict all vdisks from a rack. [#9740](https://github.com/ydb-platform/ydb/pull/9740) ([Ilia Shakhov](https://github.com/pixcc)).
* Add traces and database redirects to local rpc calls unify parameters and method checks and bootstrap procedures. [#9745](https://github.com/ydb-platform/ydb/pull/9745) ([Alexey Efimov](https://github.com/adameat)).
* This way profiler stacks are resolved much more precisely - and include inlined frames now. [#9766](https://github.com/ydb-platform/ydb/pull/9766) ([Ivan](https://github.com/abyss7)).
* Added database id for workload manager. [#9768](https://github.com/ydb-platform/ydb/pull/9768) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix empty group names closes [#9762](https://github.com/ydb-platform/ydb/issues/9762). [#9775](https://github.com/ydb-platform/ydb/pull/9775) ([Alexey Efimov](https://github.com/adameat)).
* Wide combiner spill during state split. ... [#9785](https://github.com/ydb-platform/ydb/pull/9785) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Support relative paths in scheme service. [#9846](https://github.com/ydb-platform/ydb/pull/9846) ([Alexey Efimov](https://github.com/adameat)).
* Add support PG types in CellMaker. [#9856](https://github.com/ydb-platform/ydb/pull/9856) ([Ivan Nikolaev](https://github.com/lex007in)).
* Use CH udf in json parsing. [#9878](https://github.com/ydb-platform/ydb/pull/9878) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Groups sorting. [#9892](https://github.com/ydb-platform/ydb/pull/9892) ([Alexey Efimov](https://github.com/adameat)).
* Added pushdown for extract members in PQ provider. [#9939](https://github.com/ydb-platform/ydb/pull/9939) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#10015](https://github.com/ydb-platform/ydb/pull/10015) ([Vitaly Stoyan](https://github.com/vitstn)).
* Replace conanfile.txt by conanfile.py. [#10066](https://github.com/ydb-platform/ydb/pull/10066) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* Add url params to trace attributes. [#10076](https://github.com/ydb-platform/ydb/pull/10076) ([Alexey Efimov](https://github.com/adameat)).
* Https://github.com/ydb-platform/ydb/issues/10112 added grpc connection keep alive properties to avoid deadline exceeded. [#10101](https://github.com/ydb-platform/ydb/pull/10101) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Support optimizers for AssumeUnique/AssumeDistinct callables in DQ/YT providers. [#10102](https://github.com/ydb-platform/ydb/pull/10102) ([Roman Udovichenko](https://github.com/rvu1024)).
* ... [#10199](https://github.com/ydb-platform/ydb/pull/10199) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add history to some logs in dsproxy. [#10214](https://github.com/ydb-platform/ydb/pull/10214) ([VPolka](https://github.com/VPolka)).
* Delay making EquiJoin inputs unordered until CROSS JOIN is rewritten to inner. [#10229](https://github.com/ydb-platform/ydb/pull/10229) ([Andrey Neporada](https://github.com/nepal)).
* Do not trigger dead tablet issue during creation of a lot of tablets (e. g. a backup operation). [#10235](https://github.com/ydb-platform/ydb/pull/10235) ([vporyadke](https://github.com/vporyadke)).
* More detailed trace in viewer/tenantinfo. [#10239](https://github.com/ydb-platform/ydb/pull/10239) ([Alexey Efimov](https://github.com/adameat)).
* Minor fixes for storage groups. [#10249](https://github.com/ydb-platform/ydb/pull/10249) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10254](https://github.com/ydb-platform/ydb/pull/10254) ([Nikita-Levuskin](https://github.com/Nikita-Levuskin)).
* Https://nebius.atlassian.net/browse/nbydb-475 added mask for token in mvp. [#10276](https://github.com/ydb-platform/ydb/pull/10276) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Option for tests with topics. [#10292](https://github.com/ydb-platform/ydb/pull/10292) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#10311](https://github.com/ydb-platform/ydb/pull/10311) ([Vitaly Stoyan](https://github.com/vitstn)).
* Https://nebius.atlassian.net/browse/nbydb-475 mask set-cookie in http response. [#10316](https://github.com/ydb-platform/ydb/pull/10316) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Support PG types for TTL in datashard. [#10318](https://github.com/ydb-platform/ydb/pull/10318) ([Ivan Nikolaev](https://github.com/lex007in)).
* Add compression level validation for S3 backups. [#10329](https://github.com/ydb-platform/ydb/pull/10329) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#10367](https://github.com/ydb-platform/ydb/pull/10367) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* ... [#10379](https://github.com/ydb-platform/ydb/pull/10379) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#10399](https://github.com/ydb-platform/ydb/pull/10399) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Https://nebius.atlassian.net/browse/nbydb-475 don't use `getrawdata` for logging. [#10450](https://github.com/ydb-platform/ydb/pull/10450) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Supported optional columns as NULLs. [#10452](https://github.com/ydb-platform/ydb/pull/10452) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Now we won't immediately flush all following changes after first uncommitted changes read. [#10507](https://github.com/ydb-platform/ydb/pull/10507) ([Nikita Vasilev](https://github.com/nikvas0)).
* Now with the `SysLogToStdErr` option from `TLogConfig` enabled, logs are duplicated in stderr. [#10595](https://github.com/ydb-platform/ydb/pull/10595) ([Dmitry Razumov](https://github.com/dvrazumov)).
* Enhance help for ImportData option in ydb tools restore. [#10599](https://github.com/ydb-platform/ydb/pull/10599) ([Ilia Shakhov](https://github.com/pixcc)).
* Improve whiteboard tracing and skip invalid path id. [#10704](https://github.com/ydb-platform/ydb/pull/10704) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10732](https://github.com/ydb-platform/ydb/pull/10732) ([Vitaly Stoyan](https://github.com/vitstn)).
* Supported computation graph invalidation in purecalc in push stream mode, it is required for stateless execution. [#10799](https://github.com/ydb-platform/ydb/pull/10799) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#10848](https://github.com/ydb-platform/ydb/pull/10848) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#10856](https://github.com/ydb-platform/ydb/pull/10856) ([Oleg Doronin](https://github.com/dorooleg)).
* Support pg types in datashard. [#10872](https://github.com/ydb-platform/ydb/pull/10872) ([Ivan Nikolaev](https://github.com/lex007in)).
* Add nodes group by state. [#10877](https://github.com/ydb-platform/ydb/pull/10877) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10890](https://github.com/ydb-platform/ydb/pull/10890) ([Oleg Doronin](https://github.com/dorooleg)).
* Add some logs to dsproxy. [#10905](https://github.com/ydb-platform/ydb/pull/10905) ([VPolka](https://github.com/VPolka)).
* `tools restore`: print location in error messages. [#10948](https://github.com/ydb-platform/ydb/pull/10948) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Stop wide combiner state from growing unlimited and spill it if spilling is enabled. [#10997](https://github.com/ydb-platform/ydb/pull/10997) ([Vladluk](https://github.com/vladl2802)).
* Use -FreeSlots() as PickerScore in BSC to properly populate disks of unequal size. [#11008](https://github.com/ydb-platform/ydb/pull/11008) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Add test for shard splitting by PG key * Support PG types for PartitionKeySchema in PQ. [#11023](https://github.com/ydb-platform/ydb/pull/11023) ([Ivan Nikolaev](https://github.com/lex007in)).
* ... [#11068](https://github.com/ydb-platform/ydb/pull/11068) ([Vitaly Stoyan](https://github.com/vitstn)).
* Support PG and Decimal in scheme board cache viewer. [#11076](https://github.com/ydb-platform/ydb/pull/11076) ([Ivan Nikolaev](https://github.com/lex007in)).
* #10907 Don't take locks in ShapshotReadOnly. [#11085](https://github.com/ydb-platform/ydb/pull/11085) ([Mikhail Surin](https://github.com/ssmike)).
* ... [#11091](https://github.com/ydb-platform/ydb/pull/11091) ([Vitaly Stoyan](https://github.com/vitstn)).
* Added new options to `ydb workload topic`: --tx-commit-interval and --tx-commit-messages, allowing you to specify commit interval either in milliseconds or in number of messages written. Also now you can load test YDB topics, using wide transactions that span over all partitions in the topic. This works both in write and in end-to-end workload scenarios. ... [#11141](https://github.com/ydb-platform/ydb/pull/11141) ([Andrey Serebryanskiy](https://github.com/a-serebryanskiy)).
* Supported Json columns without predicate. [#11150](https://github.com/ydb-platform/ydb/pull/11150) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#11152](https://github.com/ydb-platform/ydb/pull/11152) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add simplified mirror-3dc support in CMS. [#11190](https://github.com/ydb-platform/ydb/pull/11190) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#11207](https://github.com/ydb-platform/ydb/pull/11207) ([Roman Udovichenko](https://github.com/rvu1024)).
* ... [#11219](https://github.com/ydb-platform/ydb/pull/11219) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add YQL highlighting tests. [#11234](https://github.com/ydb-platform/ydb/pull/11234) ([Victor Smirnov](https://github.com/vityaman)).
* Human readable `cluster_name` property from logconfig (instead of runconfig with uuid format) - fix `node_type` session meta property value. [#11240](https://github.com/ydb-platform/ydb/pull/11240) ([Aleksei Kobzev](https://github.com/kobzonega)).
* For tickets in ticket parser cashe set low priority for requests to access service. [#11278](https://github.com/ydb-platform/ydb/pull/11278) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Force oldest (not newest) locks into shard locks due to range limits. [#11329](https://github.com/ydb-platform/ydb/pull/11329) ([Aleksei Borzenkov](https://github.com/snaury)).
* Support strings parsing in Json columns. [#11331](https://github.com/ydb-platform/ydb/pull/11331) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* New CLI flag here: --no-consumer. It allows user to read topic without creating a consumer in advance. Boosts the debugging through the CLI speed. ... [#11352](https://github.com/ydb-platform/ydb/pull/11352) ([Andrey Serebryanskiy](https://github.com/a-serebryanskiy)).
* Added obfuscated cookie logs. [#11367](https://github.com/ydb-platform/ydb/pull/11367) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Specify more clearly what concrete type of timestamp is in options - Support different timestamp formats. [#11387](https://github.com/ydb-platform/ydb/pull/11387) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Optimized purecalc memory usage. [#11394](https://github.com/ydb-platform/ydb/pull/11394) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Supported COALESCE and IF pushdown. [#11397](https://github.com/ydb-platform/ydb/pull/11397) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#11401](https://github.com/ydb-platform/ydb/pull/11401) ([Alexey Efimov](https://github.com/adameat)).
* Add field LogMessage to structure TError of ticket parser for return special message for log. [#11403](https://github.com/ydb-platform/ydb/pull/11403) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Return special error messages for write to log from ldap auth provider. [#11404](https://github.com/ydb-platform/ydb/pull/11404) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Switch actor system to lock-free mailboxes with intrusive event lists. [#11419](https://github.com/ydb-platform/ydb/pull/11419) ([Aleksei Borzenkov](https://github.com/snaury)).
* Evwrite optimizations. [#11428](https://github.com/ydb-platform/ydb/pull/11428) ([Nikita Vasilev](https://github.com/nikvas0)).
* Supported OR split during pushdown. [#11439](https://github.com/ydb-platform/ydb/pull/11439) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#11443](https://github.com/ydb-platform/ydb/pull/11443) ([Oleg Doronin](https://github.com/dorooleg)).
* Support PG literals in KQP. [#11446](https://github.com/ydb-platform/ydb/pull/11446) ([Ivan Nikolaev](https://github.com/lex007in)).
* ... [#11450](https://github.com/ydb-platform/ydb/pull/11450) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11470](https://github.com/ydb-platform/ydb/pull/11470) ([Alexey Efimov](https://github.com/adameat)).
* # Docker image. [#11472](https://github.com/ydb-platform/ydb/pull/11472) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Replace usage of `CPP_STYLE_TEST_16` with `STYLE_CPP`. [#11523](https://github.com/ydb-platform/ydb/pull/11523) ([andrei-levitskii](https://github.com/andrei-levitskii)).
* Supported mod pushdown. [#11543](https://github.com/ydb-platform/ydb/pull/11543) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix for [yq-2950](https://st.yandex-team.ru/yq-2950). [#11608](https://github.com/ydb-platform/ydb/pull/11608) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Add direct conversion from Ydb::Value tuple to Cell in rpc_read_table. [#11615](https://github.com/ydb-platform/ydb/pull/11615) ([Ivan Nikolaev](https://github.com/lex007in)).
* Supported regexp pushdown. [#11626](https://github.com/ydb-platform/ydb/pull/11626) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added limit for parser buffer size. [#11627](https://github.com/ydb-platform/ydb/pull/11627) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Support ALTER TABLE for adding PG types. [#11630](https://github.com/ydb-platform/ydb/pull/11630) ([Ivan Nikolaev](https://github.com/lex007in)).
* Use `DEBUGINFO_LINES_ONLY` param for ydbd binary in breakpad docker tag This will allow to extract the correct stacktraces and see lines in coredumps (thanks to @iddqdex). [#11671](https://github.com/ydb-platform/ydb/pull/11671) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Replace logical ids with 0 in canonized files as it is done in dq_file. [#11683](https://github.com/ydb-platform/ydb/pull/11683) ([Andrey Neporada](https://github.com/nepal)).
* Bump breakpad dependency to `v2023.06.01` - disable useless thread events from gdb output for stacktrace - add debug symbols into pkg.json for build docker `debug` image - add readme.md for `breakpad_init` package. [#11735](https://github.com/ydb-platform/ydb/pull/11735) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Allow running stock bench for Olap shards. [#11757](https://github.com/ydb-platform/ydb/pull/11757) ([Nikita Vasilev](https://github.com/nikvas0)).
* Minidump_script.py in docker breakpad should firstly extract backtrace from current thread. [#11815](https://github.com/ydb-platform/ydb/pull/11815) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Added per node partition limit. [#11830](https://github.com/ydb-platform/ydb/pull/11830) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* In 24-3, support for redirecting requests to dynodes was added. The fix adjusts the scenario where a redirect is not possible: instead of throwing a "Failed to resolve database" error, the request is processed locally on the node that received it. [#11841](https://github.com/ydb-platform/ydb/pull/11841) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Allow to enable and kafka api port for ydb-local docker image. [#11892](https://github.com/ydb-platform/ydb/pull/11892) ([Timofey Koolin](https://github.com/rekby)).
* Removed S3 MaxReadSizePerQuery config. [#11936](https://github.com/ydb-platform/ydb/pull/11936) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Passed UV from filter to read actor + topic session refactor. [#11940](https://github.com/ydb-platform/ydb/pull/11940) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* New internal error status for EvWriteResult from data_events: wrong shard state. [#11955](https://github.com/ydb-platform/ydb/pull/11955) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* Add signal information for the coredump that was generated from the minidump. This information is parsed from the `minidump_stackwalk` output and appended to the gdb-generated information with backtraces. [#12011](https://github.com/ydb-platform/ydb/pull/12011) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Audit logs have sanitized_token field. Provide this field also for login audit record. [#12031](https://github.com/ydb-platform/ydb/pull/12031) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* MinStep value - transactions are ordered by (Step, TxId) - the name of the state instead of the number. [#12060](https://github.com/ydb-platform/ydb/pull/12060) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Supported pushdown for SafeCast, ToBytes, FlatMap. [#12066](https://github.com/ydb-platform/ydb/pull/12066) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* There are situations when we need to generate a new trace id (or throttle existing one) not only from grpc proxy actor, but in several other places (long living topic session). For this case I refactored tracing configurator so that it can be available from every actor system thread. [#12067](https://github.com/ydb-platform/ydb/pull/12067) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Additional validation for s3 writes, double optional types are now explicitly unsupported. [#12082](https://github.com/ydb-platform/ydb/pull/12082) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* If the transaction is not scheduled, a dash is shown in the Step field. [#12085](https://github.com/ydb-platform/ydb/pull/12085) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* It is now allowed to describe index table using `ydb cli scheme describe <table_path>/<index_name>`. [#12103](https://github.com/ydb-platform/ydb/pull/12103) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#12105](https://github.com/ydb-platform/ydb/pull/12105) ([Vitaly Stoyan](https://github.com/vitstn)).
* Added script execute stats_mode in swagger. [#12137](https://github.com/ydb-platform/ydb/pull/12137) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#12149](https://github.com/ydb-platform/ydb/pull/12149) ([vporyadke](https://github.com/vporyadke)).
* [YQL-19309] Switch YT provider to DQ nodes from yql/essentials. [#12158](https://github.com/ydb-platform/ydb/pull/12158) ([Andrey Neporada](https://github.com/nepal)).
* Improve WriteActor: - move serialization to fwd actor - remove table resolve - fixed segfault. [#12167](https://github.com/ydb-platform/ydb/pull/12167) ([Nikita Vasilev](https://github.com/nikvas0)).
* [YQL-19309] Sync with Arcadia. [#12219](https://github.com/ydb-platform/ydb/pull/12219) ([Andrey Neporada](https://github.com/nepal)).
* ... [#12285](https://github.com/ydb-platform/ydb/pull/12285) ([Vitaly Stoyan](https://github.com/vitstn)).
* [YQL-19206] Sync with Arcadia. [#12300](https://github.com/ydb-platform/ydb/pull/12300) ([Andrey Neporada](https://github.com/nepal)).
* Add some more direct read cache proxy counters. [#12317](https://github.com/ydb-platform/ydb/pull/12317) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* Now describe consumer result in CPP SDK have more fields. LastReadTime, MaxReadTimeLag and MaxWriteTimeLag ... [#12347](https://github.com/ydb-platform/ydb/pull/12347) ([alexnick88](https://github.com/alexnick88)).
* Added TYQLConclusionStatusImpl with NYql::TIssues as error. [#12452](https://github.com/ydb-platform/ydb/pull/12452) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add support for topic operations in BufferWriteActor with enabled OLTP sink. [#12464](https://github.com/ydb-platform/ydb/pull/12464) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* Improved metadata objects errors. [#12486](https://github.com/ydb-platform/ydb/pull/12486) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Stream requests are long running session requests such as topic sessions. That's why they require special handling. [#12493](https://github.com/ydb-platform/ydb/pull/12493) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Minidump_script `signal_name` split by space - minidump_script limit gdb threads by 999. [#12501](https://github.com/ydb-platform/ydb/pull/12501) ([Aleksei Kobzev](https://github.com/kobzonega)).
* Collect Sink Stats. [#12507](https://github.com/ydb-platform/ydb/pull/12507) ([Nikita Vasilev](https://github.com/nikvas0)).
* Optimize memory allocation for schema versions on CS init. [#12533](https://github.com/ydb-platform/ydb/pull/12533) ([Semyon](https://github.com/swalrus1)).
* Try to preserve in-memory state (locks in particular) across datashard restarts. [#12567](https://github.com/ydb-platform/ydb/pull/12567) ([Aleksei Borzenkov](https://github.com/snaury)).
* Clean up fields of TIndexInfo to reduce memory footprint. [#12593](https://github.com/ydb-platform/ydb/pull/12593) ([Semyon](https://github.com/swalrus1)).
* Added parser mkql counters. [#12607](https://github.com/ydb-platform/ydb/pull/12607) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#12644](https://github.com/ydb-platform/ydb/pull/12644) ([Alexey Efimov](https://github.com/adameat)).
* Added more compatibilty with ydb configuration for ydbd_slice. [#12658](https://github.com/ydb-platform/ydb/pull/12658) ([Alexander Petrukhin](https://github.com/shmel1k)).
* The duplication in the code has been removed. References to values are used along with copies. Remove the unnecessary `TCacheEvictionStrategy:: SaveUserOffset` method. [#12661](https://github.com/ydb-platform/ydb/pull/12661) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Add support for immediate commit and rollback with topics in BufferWriteActor. ... [#12669](https://github.com/ydb-platform/ydb/pull/12669) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* Reuse schemas between cs on the same node. [#12673](https://github.com/ydb-platform/ydb/pull/12673) ([Semyon](https://github.com/swalrus1)).
* ... [#12677](https://github.com/ydb-platform/ydb/pull/12677) ([VPolka](https://github.com/VPolka)).
* Add support for column tables with topics in BufferWriteActor. [#12686](https://github.com/ydb-platform/ydb/pull/12686) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* ... [#12687](https://github.com/ydb-platform/ydb/pull/12687) ([Alexey Efimov](https://github.com/adameat)).
* Abort volatile transactions during graceful restarts. [#12689](https://github.com/ydb-platform/ydb/pull/12689) ([Aleksei Borzenkov](https://github.com/snaury)).
* Add test to check counters are created for newly added consumer. [#12711](https://github.com/ydb-platform/ydb/pull/12711) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* Change algorithm for create fingerprints of certificates from sha1 to sha256. [#12723](https://github.com/ydb-platform/ydb/pull/12723) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Now Put requests with blobs of 0 size are validated and rejected with ERROR status. [#12881](https://github.com/ydb-platform/ydb/pull/12881) ([Sergey Belyakov](https://github.com/serbel324)).
* Rename block-4-2 to block-4-2-8-nodes. [#12888](https://github.com/ydb-platform/ydb/pull/12888) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Improved slices template configuration. [#12899](https://github.com/ydb-platform/ydb/pull/12899) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Now if you specify `pqconfig.require_credentials_in_new_protocol: false` in cluster config, it will not require credentials to read/write/administrate topics through Kafka proxy. [#12900](https://github.com/ydb-platform/ydb/pull/12900) ([Andrey Serebryanskiy](https://github.com/a-serebryanskiy)).
* Ydbd_slice: add `sys_log: true` to default logging configuration. [#12968](https://github.com/ydb-platform/ydb/pull/12968) ([Alexander Petrukhin](https://github.com/shmel1k)).
* User can change self password by yourself. [#12983](https://github.com/ydb-platform/ydb/pull/12983) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Process follower updates in chunks to definitely avoid hitting commit size limit. [#13023](https://github.com/ydb-platform/ydb/pull/13023) ([vporyadke](https://github.com/vporyadke)).
* New column `CreatedAt` was added to schemeshard localdb in table `Sids`. [#13044](https://github.com/ydb-platform/ydb/pull/13044) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Added the TxInFly and TxCompleteLag metrics for the PQ tablet. [#13072](https://github.com/ydb-platform/ydb/pull/13072) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* New functions added. [#13120](https://github.com/ydb-platform/ydb/pull/13120) ([jsjant](https://github.com/jsjant)).
* Prepare login lockout info in order to use it in system view. [#13123](https://github.com/ydb-platform/ydb/pull/13123) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Added confirmation for ydbd_slice install/clear/format. [#13146](https://github.com/ydb-platform/ydb/pull/13146) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Improved multi query mode and storage settings. [#13177](https://github.com/ydb-platform/ydb/pull/13177) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Added TMemoryControllerConfig support in ydbd_slice. [#13250](https://github.com/ydb-platform/ydb/pull/13250) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Data integrity for OLAP. [#13277](https://github.com/ydb-platform/ydb/pull/13277) ([Nikita Vasilev](https://github.com/nikvas0)).
* Support folders in S3 URIs for CS tiers. [#13337](https://github.com/ydb-platform/ydb/pull/13337) ([Semyon](https://github.com/swalrus1)).
* ... [#13386](https://github.com/ydb-platform/ydb/pull/13386) ([Alexey Efimov](https://github.com/adameat)).
* Added NodeInterlace to `TScore` so that in case there are multiple VDisks in one rack (and group's DomainInterlace is > 0) next PDisk would not be selected from nodes that already have disks from this group. [#13458](https://github.com/ydb-platform/ydb/pull/13458) ([Semyon Danilov](https://github.com/SammyVimes)).
* Coordinator plan resolution can now be configured using immediate control board. [#13721](https://github.com/ydb-platform/ydb/pull/13721) ([Aleksei Borzenkov](https://github.com/snaury)).
* [Schema object limits](https://ydb.tech/docs/en/concepts/limits-ydb#schema-object) are now available as metrics. [#13723](https://github.com/ydb-platform/ydb/pull/13723) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Https://nebius.atlassian.net/browse/nbydb-770 add max-age to session cookie depending on iam response specification said that set-cookie max-age attribute is unsigned 31 bit. [#13732](https://github.com/ydb-platform/ydb/pull/13732) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Maintain access to populated tiers removed from TTL on CS. [#13733](https://github.com/ydb-platform/ydb/pull/13733) ([Semyon](https://github.com/swalrus1)).
* Default level of cost based optimization is set to 2, which means the cost based optimizer will only work on queries that include at least one column shard. ... [#13740](https://github.com/ydb-platform/ydb/pull/13740) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* This feature will help to easily add additional params to local_ydb in docker. [#13789](https://github.com/ydb-platform/ydb/pull/13789) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).

#### Bugfix
* Fixed default for --null-value in ydb import file csv/tsv commands and improved error text. [#3936](https://github.com/ydb-platform/ydb/pull/3936) ([Bulat](https://github.com/Gazizonoki)).
* Do not use write lock in ICB when read lock is enough. Use swap to prevent read-check-write races. [#5289](https://github.com/ydb-platform/ydb/pull/5289) ([Cthulhu](https://github.com/the-ancient-1)).
* Implement a deadline for patching request stages to facilitate a rapid fallback process. [#5677](https://github.com/ydb-platform/ydb/pull/5677) ([kruall](https://github.com/kruall)).
* ... [#6152](https://github.com/ydb-platform/ydb/pull/6152) ([yumkam](https://github.com/yumkam)).
* `TDecompressionTask` stores a weak reference to `TDataDecompressionInfo` and if the Parent has already been deleted, it does nothing. [#6249](https://github.com/ydb-platform/ydb/pull/6249) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fill change exchange split & activation lists just before commit. [#6281](https://github.com/ydb-platform/ydb/pull/6281) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix HMAC secret key loading for OAuth 2.0 token exchange config HMAC key is binary data, so it must be loaded from json in base64 encoding (in Go SDK it is already done properly). [#6290](https://github.com/ydb-platform/ydb/pull/6290) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Fix build after removing generate_patch.sh. [#6331](https://github.com/ydb-platform/ydb/pull/6331) ([Andrey Neporada](https://github.com/nepal)).
* Temporarily disable FilterPushdownEnableMultiusage. [#6347](https://github.com/ydb-platform/ydb/pull/6347) ([Andrey Neporada](https://github.com/nepal)).
* ... [#6355](https://github.com/ydb-platform/ydb/pull/6355) ([kruall](https://github.com/kruall)).
* Build only postgresql sources in verify.sh. [#6361](https://github.com/ydb-platform/ydb/pull/6361) ([Andrey Neporada](https://github.com/nepal)).
* Fix unpatched global vars. [#6362](https://github.com/ydb-platform/ydb/pull/6362) ([Andrey Neporada](https://github.com/nepal)).
* Proper (de)serialization of structs, optionals and variants. [#6396](https://github.com/ydb-platform/ydb/pull/6396) ([Vadim Averin](https://github.com/avevad)).
* Handle empty GC commands correctly. [#6398](https://github.com/ydb-platform/ydb/pull/6398) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix bugs in coordinator state migration. [#6401](https://github.com/ydb-platform/ydb/pull/6401) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix VDisk replication stuck sensor bug. [#6405](https://github.com/ydb-platform/ydb/pull/6405) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#6409](https://github.com/ydb-platform/ydb/pull/6409) ([vporyadke](https://github.com/vporyadke)).
* ... [#6414](https://github.com/ydb-platform/ydb/pull/6414) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#6432](https://github.com/ydb-platform/ydb/pull/6432) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix problem with empty errors in http handlers. [#6441](https://github.com/ydb-platform/ydb/pull/6441) ([Alexey Efimov](https://github.com/adameat)).
* The PQ tablet sent a response to the SS. At that moment, `Hive' was running it on another node. The tablet was restored to the WAIT_RS state and waited for predicates from other participants. [#6449](https://github.com/ydb-platform/ydb/pull/6449) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Previously, errors from spilling caused a deadlock. Error handling has now been added. [#6454](https://github.com/ydb-platform/ydb/pull/6454) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Fix a bug where tablets could get stuck in boot queue. [#6491](https://github.com/ydb-platform/ydb/pull/6491) ([vporyadke](https://github.com/vporyadke)).
* Fix a bug where tablets total counter was not updated on followers deletion. [#6492](https://github.com/ydb-platform/ydb/pull/6492) ([vporyadke](https://github.com/vporyadke)).
* ... [#6497](https://github.com/ydb-platform/ydb/pull/6497) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix null pointer dereference during node registration in `Node Broker`. [#6516](https://github.com/ydb-platform/ydb/pull/6516) ([Ilia Shakhov](https://github.com/pixcc)).
* ... [#6521](https://github.com/ydb-platform/ydb/pull/6521) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix getting oauth2 key file credentials from environment. Silly error. [#6550](https://github.com/ydb-platform/ydb/pull/6550) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#6585](https://github.com/ydb-platform/ydb/pull/6585) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#6586](https://github.com/ydb-platform/ydb/pull/6586) ([vporyadke](https://github.com/vporyadke)).
* Continue to emit resolved timestamp after table merge. [#6594](https://github.com/ydb-platform/ydb/pull/6594) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix a bug where some nodes could remain down after a downgrade. [#6613](https://github.com/ydb-platform/ydb/pull/6613) ([vporyadke](https://github.com/vporyadke)).
* Changed memory calculation for TEvFreeItems. [#6625](https://github.com/ydb-platform/ydb/pull/6625) ([mregrock](https://github.com/mregrock)).
* Fixed endless retries for external error. [#6626](https://github.com/ydb-platform/ydb/pull/6626) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#6634](https://github.com/ydb-platform/ydb/pull/6634) ([Roman Udovichenko](https://github.com/rvu1024)).
* YDB FQ: distinguish dedicated and serverless YDBs via 'storageConfig' section. [#6703](https://github.com/ydb-platform/ydb/pull/6703) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ... [#6711](https://github.com/ydb-platform/ydb/pull/6711) ([yumkam](https://github.com/yumkam)).
* Fixed error failed to execute callable ResWrite. [#6752](https://github.com/ydb-platform/ydb/pull/6752) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix handling of backups of too massive databases (in terms of number of tables and number of table partitions). [#6760](https://github.com/ydb-platform/ydb/pull/6760) ([ijon](https://github.com/ijon)).
* Disable outgoing cache for mvp meta. [#6806](https://github.com/ydb-platform/ydb/pull/6806) ([Alexey Efimov](https://github.com/adameat)).
* ... [#6821](https://github.com/ydb-platform/ydb/pull/6821) ([Anton Martsenyuk](https://github.com/antoniox)).
* The PQ tablet performed the transaction. I received the value of the predicate from the partition and waited for RS from other tablets. At this time, Hive was restarting it on another node. After the restart, the tablet restored the transaction and continued to execute it. I received all RS and sent the message `TEvTxCommit` to the partition. As a result, the program crashed, since the partition did not know anything about this transaction after the restart. [#6831](https://github.com/ydb-platform/ydb/pull/6831) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#6846](https://github.com/ydb-platform/ydb/pull/6846) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#6881](https://github.com/ydb-platform/ydb/pull/6881) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#6894](https://github.com/ydb-platform/ydb/pull/6894) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix for dead nodes always passing filter fixes [#6608](https://github.com/ydb-platform/ydb/issues/6608). [#6912](https://github.com/ydb-platform/ydb/pull/6912) ([Alexey Efimov](https://github.com/adameat)).
* Don't make a lock on zero memory change. [#6926](https://github.com/ydb-platform/ydb/pull/6926) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* ... [#6930](https://github.com/ydb-platform/ydb/pull/6930) ([Innokentii Mokin](https://github.com/Enjection)).
* ... [#6941](https://github.com/ydb-platform/ydb/pull/6941) ([Andrey Molotkov](https://github.com/molotkov-and)).
* YDB FQ: avoid outdated syntax "SELECT * FROM cluster.db.table" (now database name is always within cluster). [#6945](https://github.com/ydb-platform/ydb/pull/6945) ([Grigorii Papashvili](https://github.com/lifthelm)).
* ... [#6946](https://github.com/ydb-platform/ydb/pull/6946) ([Oleg Doronin](https://github.com/dorooleg)).
* Fixed requests starts for queue size zero. [#6949](https://github.com/ydb-platform/ydb/pull/6949) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix storage info. [#6960](https://github.com/ydb-platform/ydb/pull/6960) ([Alexey Efimov](https://github.com/adameat)).
* ... [#6978](https://github.com/ydb-platform/ydb/pull/6978) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fixed resource pools permissions validation: * https://github.com/ydb-platform/ydb/pull/6989/files#diff-c22bfd9bf5593c8954ffe6e0c48529572eeaf460d44dc7bfece7ea6859b19ff5L395-R397 * https://github.com/ydb-platform/ydb/pull/6989/files#diff-acbe24321404698ebde9ee88b975c07511a9ef7ee29393ba47cf4024d3385ec8R494-R497. [#6989](https://github.com/ydb-platform/ydb/pull/6989) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Replace HTTP control characters with alternative ones while displaying exceptions. [#7014](https://github.com/ydb-platform/ydb/pull/7014) ([Cthulhu](https://github.com/the-ancient-1)).
* The partitioning predicate is not saved for the transaction. After recovery, the tablet resends commands to the partitions to calculate the predicate. [#7015](https://github.com/ydb-platform/ydb/pull/7015) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix unit tests counters validation. [#7030](https://github.com/ydb-platform/ydb/pull/7030) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#7044](https://github.com/ydb-platform/ydb/pull/7044) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ... [#7051](https://github.com/ydb-platform/ydb/pull/7051) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix for sls feature flag. [#7057](https://github.com/ydb-platform/ydb/pull/7057) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#7060](https://github.com/ydb-platform/ydb/pull/7060) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#7076](https://github.com/ydb-platform/ydb/pull/7076) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix incompatibility bug. [#7079](https://github.com/ydb-platform/ydb/pull/7079) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix distconf startup bug. [#7094](https://github.com/ydb-platform/ydb/pull/7094) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#7097](https://github.com/ydb-platform/ydb/pull/7097) ([Oleg Doronin](https://github.com/dorooleg)).
* Fix viewer redirects when we make a call to newer node via older one. [#7103](https://github.com/ydb-platform/ydb/pull/7103) ([Alexey Efimov](https://github.com/adameat)).
* ... [#7109](https://github.com/ydb-platform/ydb/pull/7109) ([Innokentii Mokin](https://github.com/Enjection)).
* The user's token may be empty. The program did not take this into account and the call to `AddOffsetToTransaction` failed with an error. [#7117](https://github.com/ydb-platform/ydb/pull/7117) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Due to the fact that the field force_io_pool_threads could be unassigned, the generation of the dynamic config was interrupted with an error. [#7138](https://github.com/ydb-platform/ydb/pull/7138) ([kruall](https://github.com/kruall)).
* Fix distconf IC session subscription state machine. [#7143](https://github.com/ydb-platform/ydb/pull/7143) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Correct temporary PDisk start sequence. [#7156](https://github.com/ydb-platform/ydb/pull/7156) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix PDisk distconf metadata storage. [#7175](https://github.com/ydb-platform/ydb/pull/7175) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fixed logs in local docker container. [#7185](https://github.com/ydb-platform/ydb/pull/7185) ([Nikita-Levuskin](https://github.com/Nikita-Levuskin)).
* Fix a bug where static group issues could not appear in healthcheck. [#7212](https://github.com/ydb-platform/ydb/pull/7212) ([vporyadke](https://github.com/vporyadke)).
* Mvp - disable offload merge. [#7228](https://github.com/ydb-platform/ydb/pull/7228) ([Alexey Efimov](https://github.com/adameat)).
* Fix ORDER BY missing column. [#7240](https://github.com/ydb-platform/ydb/pull/7240) ([Andrey Neporada](https://github.com/nepal)).
* Fir for https://st.yandex-team.ru/yq-3427. [#7259](https://github.com/ydb-platform/ydb/pull/7259) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* ... [#7268](https://github.com/ydb-platform/ydb/pull/7268) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix AS_TABLE with ORDER BY missing column. [#7274](https://github.com/ydb-platform/ydb/pull/7274) ([Andrey Neporada](https://github.com/nepal)).
* Fix some distconf protocol and metadata storage issues. [#7279](https://github.com/ydb-platform/ydb/pull/7279) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix block device size calculcation code. [#7341](https://github.com/ydb-platform/ydb/pull/7341) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Now inferring column datatypes from .csv file produces optional (nullable) types. [#7358](https://github.com/ydb-platform/ydb/pull/7358) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fixed bugs: 1. In the `TEvDeletePartitionDone` message handler of the PQ tablet, the `TEvPoison` message was not sent to the partition actor. 2. In the `TEvPoison` handler of the actor of the service partition, the `TEvPoison` message was not sent to the actor of the read quoter. [#7375](https://github.com/ydb-platform/ydb/pull/7375) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#7384](https://github.com/ydb-platform/ydb/pull/7384) ([yumkam](https://github.com/yumkam)).
* Issue [#7402](https://github.com/ydb-platform/ydb/issues/7402) added initialization of isajaxrequest for nebius. [#7401](https://github.com/ydb-platform/ydb/pull/7401) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#7409](https://github.com/ydb-platform/ydb/pull/7409) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#7421](https://github.com/ydb-platform/ydb/pull/7421) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix flaky Aggregation_ResultCountAll_Filter test. [#7423](https://github.com/ydb-platform/ydb/pull/7423) ([Artem Alekseev](https://github.com/fexolm)).
* ... [#7427](https://github.com/ydb-platform/ydb/pull/7427) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Fix passing of configuration to ticket parser. It expects cert path instead of cert data. [#7445](https://github.com/ydb-platform/ydb/pull/7445) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Fix for https://st.yandex-team.ru/yq-3428. [#7450](https://github.com/ydb-platform/ydb/pull/7450) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* ... [#7452](https://github.com/ydb-platform/ydb/pull/7452) ([Vitaly Stoyan](https://github.com/vitstn)).
* Treat inactive pdisks as alive in healthcheck. [#7466](https://github.com/ydb-platform/ydb/pull/7466) ([vporyadke](https://github.com/vporyadke)).
* Incremental optimizer for Wide&Block channels. [#7479](https://github.com/ydb-platform/ydb/pull/7479) ([Andrey Neporada](https://github.com/nepal)).
* Error in transitions between transaction states. [#7482](https://github.com/ydb-platform/ydb/pull/7482) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix DQ input union/merge values with zero input channels. [#7515](https://github.com/ydb-platform/ydb/pull/7515) ([Andrey Neporada](https://github.com/nepal)).
* Correctly check wb requests requirement, improve swagger description. [#7521](https://github.com/ydb-platform/ydb/pull/7521) ([Alexey Efimov](https://github.com/adameat)).
* The `KV` tablet can respond to the `ReadRange` request with `OVERRUN`. In this case, the `PQ` tablet makes a repeat request. Requests the range from the last received key. [#7549](https://github.com/ydb-platform/ydb/pull/7549) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Revert local grpc peer value. [#7555](https://github.com/ydb-platform/ydb/pull/7555) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Normalized path when loading metadata for type inferring files. [#7561](https://github.com/ydb-platform/ydb/pull/7561) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Get queryIt.second' in kqp_compile_service.cpp:44 error if: 1) make request with user sid (it will be saved in queryId) 2) change table scheme 3) make the same request (it will be with recompilation, queryId with sid will be removed from cache and make new queryId without sid) 4) make the same request (it will be with sid and it doesn't find it in cache, then in cache will be 2 query Id with and without sid) 5) change table scheme 6) make the same request (it will be with recompilation, queryId with sid will be removed from cache and make new queryId without sid, then it will be compiled and try to put it in cache, but this queryId without sid is already in cache). [#7562](https://github.com/ydb-platform/ydb/pull/7562) ([VPolka](https://github.com/VPolka)).
* Fix for https://st.yandex-team.ru/yq-3529. [#7569](https://github.com/ydb-platform/ydb/pull/7569) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* ... [#7592](https://github.com/ydb-platform/ydb/pull/7592) ([yumkam](https://github.com/yumkam)).
* YDB FQ: add missing types of connections to cloud audit. [#7607](https://github.com/ydb-platform/ydb/pull/7607) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ... [#7643](https://github.com/ydb-platform/ydb/pull/7643) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#7651](https://github.com/ydb-platform/ydb/pull/7651) ([Sergey Belyakov](https://github.com/serbel324)).
* Fixed a bug where a transaction with a read from a topic does not send a TEvReadSetAck. [#7676](https://github.com/ydb-platform/ydb/pull/7676) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* The value of the constant in the code was different from the value in the proto-file. [#7695](https://github.com/ydb-platform/ydb/pull/7695) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fixed an issue where a SELECT query could produce unexpected duplicate rows. [#7697](https://github.com/ydb-platform/ydb/pull/7697) ([Aleksei Borzenkov](https://github.com/snaury)).
* ... [#7727](https://github.com/ydb-platform/ydb/pull/7727) ([yumkam](https://github.com/yumkam)).
* ... [#7798](https://github.com/ydb-platform/ydb/pull/7798) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix segfault that appeared after https://github.com/ydb-platform/ydb/commit/6576464d6b8dca046c27847c1ff60fc6748f329d (https://github.com/ydb-platform/ydb/pull/5982). [#7808](https://github.com/ydb-platform/ydb/pull/7808) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#7809](https://github.com/ydb-platform/ydb/pull/7809) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#7815](https://github.com/ydb-platform/ydb/pull/7815) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Fixed unit test KqpLimits::ComputeActorMemoryAllocationFailureQueryService with resource pools. [#7873](https://github.com/ydb-platform/ydb/pull/7873) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Improve s3 url escape. [#7881](https://github.com/ydb-platform/ydb/pull/7881) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix error attempt to read after eof. [#7889](https://github.com/ydb-platform/ydb/pull/7889) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix [#7790](https://github.com/ydb-platform/ydb/issues/7790). [#7897](https://github.com/ydb-platform/ydb/pull/7897) ([Nikita Vasilev](https://github.com/nikvas0)).
* ... [#7925](https://github.com/ydb-platform/ydb/pull/7925) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fixed Acceleration in mirror-3-dc and UT environment. [#7931](https://github.com/ydb-platform/ydb/pull/7931) ([Sergey Belyakov](https://github.com/serbel324)).
* Do not use -Oz on windows. [#7960](https://github.com/ydb-platform/ydb/pull/7960) ([Andrey Neporada](https://github.com/nepal)).
* Fixed '\\' escaping. [#7984](https://github.com/ydb-platform/ydb/pull/7984) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix FilterPushdownEnableMultiusage on dependent predicates. [#8033](https://github.com/ydb-platform/ydb/pull/8033) ([Andrey Neporada](https://github.com/nepal)).
* Fixed error sent large get operation. [#8035](https://github.com/ydb-platform/ydb/pull/8035) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Needed for compatibility. [#8065](https://github.com/ydb-platform/ydb/pull/8065) ([VPolka](https://github.com/VPolka)).
* Fixed internal error for insert without params. [#8074](https://github.com/ydb-platform/ydb/pull/8074) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#8109](https://github.com/ydb-platform/ydb/pull/8109) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8136](https://github.com/ydb-platform/ydb/pull/8136) ([azevaykin](https://github.com/azevaykin)).
* Changes from PR [#8116](https://github.com/ydb-platform/ydb/issues/8116). [#8142](https://github.com/ydb-platform/ydb/pull/8142) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix RebuildCalcOverWindowGroup failing with PercentRank/CumeDist/Ntile. [#8148](https://github.com/ydb-platform/ydb/pull/8148) ([Mark Ziganshin](https://github.com/loochek)).
* Treat initial vdisk status as ok in healthcheck. [#8150](https://github.com/ydb-platform/ydb/pull/8150) ([vporyadke](https://github.com/vporyadke)).
* ... [#8153](https://github.com/ydb-platform/ydb/pull/8153) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8157](https://github.com/ydb-platform/ydb/pull/8157) ([Innokentii Mokin](https://github.com/Enjection)).
* Query float test asan. [#8161](https://github.com/ydb-platform/ydb/pull/8161) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#8175](https://github.com/ydb-platform/ydb/pull/8175) ([Vitaly Stoyan](https://github.com/vitstn)).
* Allow append to a table with same column groups. [#8176](https://github.com/ydb-platform/ydb/pull/8176) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fixes that an unset feature flags in dynamic config overrides a feature flags in static config for CMS. [#8238](https://github.com/ydb-platform/ydb/pull/8238) ([Ilia Shakhov](https://github.com/pixcc)).
* Fixed database checking. [#8251](https://github.com/ydb-platform/ydb/pull/8251) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#8277](https://github.com/ydb-platform/ydb/pull/8277) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#8285](https://github.com/ydb-platform/ydb/pull/8285) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Fix for false-postives in storage healthcheck. [#8291](https://github.com/ydb-platform/ydb/pull/8291) ([vporyadke](https://github.com/vporyadke)).
* Fixed sessions leak in metadata service. [#8312](https://github.com/ydb-platform/ydb/pull/8312) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* To reflect cors headers fix. [#8315](https://github.com/ydb-platform/ydb/pull/8315) ([Alexey Efimov](https://github.com/adameat)).
* ... [#8333](https://github.com/ydb-platform/ydb/pull/8333) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix segfault in autocomplete handler when redirecting to a database closes [#8345](https://github.com/ydb-platform/ydb/issues/8345). [#8367](https://github.com/ydb-platform/ydb/pull/8367) ([Alexey Efimov](https://github.com/adameat)).
* Fixed cleanup table retries. [#8369](https://github.com/ydb-platform/ydb/pull/8369) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#8408](https://github.com/ydb-platform/ydb/pull/8408) ([Oleg Doronin](https://github.com/dorooleg)).
* Fix aggregation of table stats for OLAP tables. [#8417](https://github.com/ydb-platform/ydb/pull/8417) ([Semyon](https://github.com/swalrus1)).
* ... [#8422](https://github.com/ydb-platform/ydb/pull/8422) ([yumkam](https://github.com/yumkam)).
* Fix segfault in tenantinfo handler closes [#8448](https://github.com/ydb-platform/ydb/issues/8448). [#8449](https://github.com/ydb-platform/ydb/pull/8449) ([Alexey Efimov](https://github.com/adameat)).
* Fix segfault for heap iterator test. [#8473](https://github.com/ydb-platform/ydb/pull/8473) ([mregrock](https://github.com/mregrock)).
* Add optional to feature flags to reflect absence of values. [#8510](https://github.com/ydb-platform/ydb/pull/8510) ([Alexey Efimov](https://github.com/adameat)).
* The entry for `WriteId` was not saved if there was an empty list of partitions in `TTxWriteInfo`. As a result, after restoring the tablet, `Y_VERIFY` was triggered. [#8517](https://github.com/ydb-platform/ydb/pull/8517) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Clickhouse is now always able to parse timestamp data parsed by arrow library. [#8547](https://github.com/ydb-platform/ydb/pull/8547) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fill final stats only once at the end of execution. [#8553](https://github.com/ydb-platform/ydb/pull/8553) ([Ivan](https://github.com/abyss7)).
* ... [#8592](https://github.com/ydb-platform/ydb/pull/8592) ([Aleksei Borzenkov](https://github.com/snaury)).
* ... [#8598](https://github.com/ydb-platform/ydb/pull/8598) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* YDB FQ: fix use of Greenplum as an external datasource. [#8604](https://github.com/ydb-platform/ydb/pull/8604) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ... [#8622](https://github.com/ydb-platform/ydb/pull/8622) ([yumkam](https://github.com/yumkam)).
* YDB FQ: add Greenplum to federated `JOIN` test. [#8649](https://github.com/ydb-platform/ydb/pull/8649) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Fixes for [YQ-3484](https://st.yandex-team.ru/YQ-3484), [YQ-3532](https://st.yandex-team.ru/YQ-3532), [YQ-2912](https://st.yandex-team.ru/YQ-2912). [#8676](https://github.com/ydb-platform/ydb/pull/8676) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Another fix for feature flags. [#8690](https://github.com/ydb-platform/ydb/pull/8690) ([Alexey Efimov](https://github.com/adameat)).
* Currently PDisk write a lot of excessive information about chunks into log with INFO priority, so this PR reduces level to DEBUG and condenses chunks list. [#8699](https://github.com/ydb-platform/ydb/pull/8699) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#8712](https://github.com/ydb-platform/ydb/pull/8712) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix false-positive assertion in RecoverLostData mode. [#8736](https://github.com/ydb-platform/ydb/pull/8736) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Closes https://github.com/ydb-platform/ydb-embedded-ui/issues/1023. [#8738](https://github.com/ydb-platform/ydb/pull/8738) ([Alexey Efimov](https://github.com/adameat)).
* ... [#8745](https://github.com/ydb-platform/ydb/pull/8745) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Do not ask hive for tablet info unless it's a database node list do not merge whiteboard info in viewer service by default. [#8790](https://github.com/ydb-platform/ydb/pull/8790) ([Alexey Efimov](https://github.com/adameat)).
* Disable metadata objects on serverless. [#8806](https://github.com/ydb-platform/ydb/pull/8806) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* After restarting, the PQ tablet can re-send the message `TEvTxCalcPredicate` to the partition. Currently, the actor of the partition does not check the `PlanStep` messages. This is a mistake. Since if he has already completed this transaction before, the predicate will be calculated incorrectly. As a result, the transaction may be partially completed. [#8809](https://github.com/ydb-platform/ydb/pull/8809) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#8827](https://github.com/ydb-platform/ydb/pull/8827) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix erroneous finish on TDqInputMergeBlockStreamValue. [#8834](https://github.com/ydb-platform/ydb/pull/8834) ([Andrey Neporada](https://github.com/nepal)).
* Fix resolved timestamp emitted too early for some displaced upserts. [#8847](https://github.com/ydb-platform/ydb/pull/8847) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix reporting of initial VDisk status to SysView. [#8853](https://github.com/ydb-platform/ydb/pull/8853) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#8894](https://github.com/ydb-platform/ydb/pull/8894) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix wrong YQL_ENSURE in PushdownComplexFiltersOverAggregate. [#8899](https://github.com/ydb-platform/ydb/pull/8899) ([Andrey Neporada](https://github.com/nepal)).
* Do not try to call IsComplete() on Arguments. [#8901](https://github.com/ydb-platform/ydb/pull/8901) ([Andrey Neporada](https://github.com/nepal)).
* ... [#8903](https://github.com/ydb-platform/ydb/pull/8903) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix cluster tablets grouping. [#8904](https://github.com/ydb-platform/ydb/pull/8904) ([Alexey Efimov](https://github.com/adameat)).
* Fix empty table name error. [#8907](https://github.com/ydb-platform/ydb/pull/8907) ([Vadim Averin](https://github.com/avevad)).
* During the commit of a transaction with an entry in the topic, the blob offset is incorrectly calculated. Fixed the condition, added tests for all possible combinations of blocks when writing to the topic. [#8916](https://github.com/ydb-platform/ydb/pull/8916) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Return 0 when field is zero closes [#8953](https://github.com/ydb-platform/ydb/issues/8953). [#8955](https://github.com/ydb-platform/ydb/pull/8955) ([Alexey Efimov](https://github.com/adameat)).
* Fix for [yq-3286](https://st.yandex-team.ru/yq-3286). [#8965](https://github.com/ydb-platform/ydb/pull/8965) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix for [yq-3287](https://st.yandex-team.ru/yq-3287). [#8970](https://github.com/ydb-platform/ydb/pull/8970) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix restore data option in YDB CLI. [#9009](https://github.com/ydb-platform/ydb/pull/9009) ([Ilia Shakhov](https://github.com/pixcc)).
* Temporarily removed assert in a peephole optimisation. Now SELECTs without `HOP_START()` and `HOP_END()` can be used. [#9027](https://github.com/ydb-platform/ydb/pull/9027) ([Alexey Pozdniakov](https://github.com/APozdniakov)).
* ... [#9038](https://github.com/ydb-platform/ydb/pull/9038) ([kruall](https://github.com/kruall)).
* ... [#9069](https://github.com/ydb-platform/ydb/pull/9069) ([kruall](https://github.com/kruall)).
* ... [#9072](https://github.com/ydb-platform/ydb/pull/9072) ([yumkam](https://github.com/yumkam)).
* ... [#9083](https://github.com/ydb-platform/ydb/pull/9083) ([Vitaly Stoyan](https://github.com/vitstn)).
* YDB CLI build fails due to this bug. [#9089](https://github.com/ydb-platform/ydb/pull/9089) ([Bulat](https://github.com/Gazizonoki)).
* YDB FQ: handle exception in YQL Generic Provider when IAM service is not available. [#9092](https://github.com/ydb-platform/ydb/pull/9092) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Fixed `resolved` message emitter (Change Data Capture). [#9104](https://github.com/ydb-platform/ydb/pull/9104) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#9116](https://github.com/ydb-platform/ydb/pull/9116) ([Bulat](https://github.com/Gazizonoki)).
* ... [#9118](https://github.com/ydb-platform/ydb/pull/9118) ([Oleg Doronin](https://github.com/dorooleg)).
* NodeBroker now sends deltas when listing recently added nodes. [#9122](https://github.com/ydb-platform/ydb/pull/9122) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix some bugs in jsonpath. [#9146](https://github.com/ydb-platform/ydb/pull/9146) ([Vadim Averin](https://github.com/avevad)).
* Fix disabled use virtual addressing option for import from S3. [#9162](https://github.com/ydb-platform/ydb/pull/9162) ([Ilia Shakhov](https://github.com/pixcc)).
* Limit inflight coordination service session requests. [#9168](https://github.com/ydb-platform/ydb/pull/9168) ([Aleksei Borzenkov](https://github.com/snaury)).
* YDB FQ: mitigate DNS server misbehaving error in Docker-based YDB Connector test. [#9172](https://github.com/ydb-platform/ydb/pull/9172) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Another yet antlr build fix for windows. [#9173](https://github.com/ydb-platform/ydb/pull/9173) ([Bulat](https://github.com/Gazizonoki)).
* ... [#9177](https://github.com/ydb-platform/ydb/pull/9177) ([yumkam](https://github.com/yumkam)).
* Make sure we have properly aligned arrow buffers after deserialization. [#9179](https://github.com/ydb-platform/ydb/pull/9179) ([Andrey Neporada](https://github.com/nepal)).
* CTAS fixed for script executions. [#9228](https://github.com/ydb-platform/ydb/pull/9228) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#9229](https://github.com/ydb-platform/ydb/pull/9229) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#9231](https://github.com/ydb-platform/ydb/pull/9231) ([VPolka](https://github.com/VPolka)).
* There is an extra check in the code. [#9281](https://github.com/ydb-platform/ydb/pull/9281) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix CopyToChunked for empty batch. [#9288](https://github.com/ydb-platform/ydb/pull/9288) ([Nikita Vasilev](https://github.com/nikvas0)).
* Corrected the iterator validation for the VDiskState.find(). [#9309](https://github.com/ydb-platform/ydb/pull/9309) ([mregrock](https://github.com/mregrock)).
* ... [#9316](https://github.com/ydb-platform/ydb/pull/9316) ([Vitaly Stoyan](https://github.com/vitstn)).
* Commit with removal of tests - https://github.com/ydb-platform/ydb/pull/6439. [#9326](https://github.com/ydb-platform/ydb/pull/9326) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Highlight YQL comments in YDB CLI interactive mode. [#9359](https://github.com/ydb-platform/ydb/pull/9359) ([Victor Smirnov](https://github.com/vityaman)).
* Fixed a bug where an invariant could be violated in SchemeShard after the CDC initial scan. [#9360](https://github.com/ydb-platform/ydb/pull/9360) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#9384](https://github.com/ydb-platform/ydb/pull/9384) ([kruall](https://github.com/kruall)).
* The value of `PartitionsInited` changed for all partitions. As a result, after the first entry in the transaction, the `DescripeTopic` operation hung with the `IncludeStats` flag. [#9392](https://github.com/ydb-platform/ydb/pull/9392) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* When creating a topic or a consumer, if the user does not specify the `--supported-codecs` option, then the `Codecs__` field remains empty. [#9419](https://github.com/ydb-platform/ydb/pull/9419) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Scheme operations (e.g. AlterTable) are now forbidden on backup tables. [#9431](https://github.com/ydb-platform/ydb/pull/9431) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#9456](https://github.com/ydb-platform/ydb/pull/9456) ([Roman Udovichenko](https://github.com/rvu1024)).
* Cleanup and fix antlr make files. Fixes win build. [#9459](https://github.com/ydb-platform/ydb/pull/9459) ([Andrey Neporada](https://github.com/nepal)).
* There are many places where the field "remote_address" is empty. Fix this for these cases. [#9460](https://github.com/ydb-platform/ydb/pull/9460) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Deleted an unnecessary function call in the `TSendMessageBatchReplyCallback` code. [#9476](https://github.com/ydb-platform/ydb/pull/9476) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#9499](https://github.com/ydb-platform/ydb/pull/9499) ([Oleg Doronin](https://github.com/dorooleg)).
* Fixed screts not found error handling. [#9501](https://github.com/ydb-platform/ydb/pull/9501) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fixed a bug that sometimes caused the CDC initial scan to freeze. [#9507](https://github.com/ydb-platform/ydb/pull/9507) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix incorrect constraints clear in ClearSortness. [#9532](https://github.com/ydb-platform/ydb/pull/9532) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fix segfault, closes [#9549](https://github.com/ydb-platform/ydb/issues/9549). [#9551](https://github.com/ydb-platform/ydb/pull/9551) ([Alexey Efimov](https://github.com/adameat)).
* Fix maximum pdisks per node calculation. [#9563](https://github.com/ydb-platform/ydb/pull/9563) ([Alexey Efimov](https://github.com/adameat)).
* Fix sorting of inner elements in viewer/nodes handler. [#9565](https://github.com/ydb-platform/ydb/pull/9565) ([Alexey Efimov](https://github.com/adameat)).
* Fixed error duplicate session. [#9583](https://github.com/ydb-platform/ydb/pull/9583) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* The consumer's generation number is not stored in the transaction. Because of this, the consumer's reading position may be reset. [#9590](https://github.com/ydb-platform/ydb/pull/9590) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Recompilation with query from request can affect compile cache. [#9593](https://github.com/ydb-platform/ydb/pull/9593) ([VPolka](https://github.com/VPolka)).
* Service parties do not need to process the config update. The PQ tablet should only send a message to the main partitions. [#9599](https://github.com/ydb-platform/ydb/pull/9599) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix handling of uncorrelated column name in ORDER BY. [#9602](https://github.com/ydb-platform/ydb/pull/9602) ([Andrey Neporada](https://github.com/nepal)).
* Ydb/core/kqp/ut/olap/kqpolapsysview.statssysviewbytesdictstatactualization. [#9605](https://github.com/ydb-platform/ydb/pull/9605) ([Andrey Neporada](https://github.com/nepal)).
* ... [#9625](https://github.com/ydb-platform/ydb/pull/9625) ([azevaykin](https://github.com/azevaykin)).
* YQ kqprun fix win build. [#9652](https://github.com/ydb-platform/ydb/pull/9652) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Several fixes for groups and nodes handlers: 1. Fixed the filter for node_id + pdisk_id (previously, it operated on an OR principle). 2. Adjusted so that node_id + pdisk_id, node_id, pdisk_id, group_id, and storage_pool_name (for future use) are all considered pre-filters and affect the Total. 3. Fixed AllocationUnits—there was a race condition, and sometimes we didn't wait for the Hive's response. 4. Corrected the combination of node_id + group_id in /viewer/nodes (although, in my opinion, this is strange). [#9681](https://github.com/ydb-platform/ydb/pull/9681) ([Alexey Efimov](https://github.com/adameat)).
* Prepare to disable blob header by default in VDisk. [#9683](https://github.com/ydb-platform/ydb/pull/9683) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fixed a bug when reading from an asynchronous replica may cause a crash. [#9723](https://github.com/ydb-platform/ydb/pull/9723) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix uptime filter. [#9752](https://github.com/ydb-platform/ydb/pull/9752) ([Alexey Efimov](https://github.com/adameat)).
* ... [#9769](https://github.com/ydb-platform/ydb/pull/9769) ([Innokentii Mokin](https://github.com/Enjection)).
* ... [#9809](https://github.com/ydb-platform/ydb/pull/9809) ([Aleksei Borzenkov](https://github.com/snaury)).
* ... [#9818](https://github.com/ydb-platform/ydb/pull/9818) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#9819](https://github.com/ydb-platform/ydb/pull/9819) ([Bulat](https://github.com/Gazizonoki)).
* ... [#9847](https://github.com/ydb-platform/ydb/pull/9847) ([yumkam](https://github.com/yumkam)).
* ... [#9848](https://github.com/ydb-platform/ydb/pull/9848) ([Aleksei Borzenkov](https://github.com/snaury)).
* Intersect node filters for tabletinfo handler closes [#9845](https://github.com/ydb-platform/ydb/issues/9845). [#9850](https://github.com/ydb-platform/ydb/pull/9850) ([Alexey Efimov](https://github.com/adameat)).
* Closes [#9851](https://github.com/ydb-platform/ydb/issues/9851). [#9867](https://github.com/ydb-platform/ydb/pull/9867) ([Alexey Efimov](https://github.com/adameat)).
* ... [#9869](https://github.com/ydb-platform/ydb/pull/9869) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix for [yq-3706](https://st.yandex-team.ru/yq-3706). [#9873](https://github.com/ydb-platform/ydb/pull/9873) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix segfault when called from older version. [#9880](https://github.com/ydb-platform/ydb/pull/9880) ([Alexey Efimov](https://github.com/adameat)).
* ... [#9917](https://github.com/ydb-platform/ydb/pull/9917) ([Innokentii Mokin](https://github.com/Enjection)).
* Exclude dropped indexes from limits. [#9932](https://github.com/ydb-platform/ydb/pull/9932) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#9945](https://github.com/ydb-platform/ydb/pull/9945) ([Oleg Doronin](https://github.com/dorooleg)).
* Disable row_dispatcher tests during export CMake. [#9949](https://github.com/ydb-platform/ydb/pull/9949) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* Temporarily fix data race in PDisk. [#9988](https://github.com/ydb-platform/ydb/pull/9988) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Deadlock can occur only if BufferPoolSize is 4, so maxEnqueuedCompletionActions is 2. This is almost impossible configuration of PDisk, so it's not important in real life. [#9991](https://github.com/ydb-platform/ydb/pull/9991) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#9996](https://github.com/ydb-platform/ydb/pull/9996) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#10009](https://github.com/ydb-platform/ydb/pull/10009) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#10035](https://github.com/ydb-platform/ydb/pull/10035) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix alter-extsubdomain behaviour that could prevent some database alters from executing when `enable_alter_database_create_hive_first` feature flag is enabled. [#10074](https://github.com/ydb-platform/ydb/pull/10074) ([ijon](https://github.com/ijon)).
* ... [#10084](https://github.com/ydb-platform/ydb/pull/10084) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#10095](https://github.com/ydb-platform/ydb/pull/10095) ([Vadim Averin](https://github.com/avevad)).
* ... [#10114](https://github.com/ydb-platform/ydb/pull/10114) ([Vitaly Stoyan](https://github.com/vitstn)).
* Do not add ticket to refresh queue when perform immediate refresh. Fix delay time for refresh queue ... [#10188](https://github.com/ydb-platform/ydb/pull/10188) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Date, timestamp or time interval types are currently not supported with `json_list` format. [#10208](https://github.com/ydb-platform/ydb/pull/10208) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix tablets switch in cluster handler. [#10212](https://github.com/ydb-platform/ydb/pull/10212) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10219](https://github.com/ydb-platform/ydb/pull/10219) ([Vadim Averin](https://github.com/avevad)).
* Force precompute on returning effect input. [#10231](https://github.com/ydb-platform/ydb/pull/10231) ([Mikhail Surin](https://github.com/ssmike)).
* ... [#10241](https://github.com/ydb-platform/ydb/pull/10241) ([azevaykin](https://github.com/azevaykin)).
* ... [#10260](https://github.com/ydb-platform/ydb/pull/10260) ([mregrock](https://github.com/mregrock)).
* ... [#10261](https://github.com/ydb-platform/ydb/pull/10261) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix filter handling in nodes and groups, closes https://github.com/ydb-platform/ydb-embedded-ui/issues/909. [#10277](https://github.com/ydb-platform/ydb/pull/10277) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10278](https://github.com/ydb-platform/ydb/pull/10278) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Fix generating proto files in CMake. [#10296](https://github.com/ydb-platform/ydb/pull/10296) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* Fixed nested type parsing. [#10300](https://github.com/ydb-platform/ydb/pull/10300) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Remove cerr debug output. [#10321](https://github.com/ydb-platform/ydb/pull/10321) ([Alexey Efimov](https://github.com/adameat)).
* Fix `There were headers present in the request which were not signed` error returned from MinIO during multipart uploading in S3 exports. [#10333](https://github.com/ydb-platform/ydb/pull/10333) ([Ilia Shakhov](https://github.com/pixcc)).
* Fix wrong columns order in sinks. [#10338](https://github.com/ydb-platform/ydb/pull/10338) ([Nikita Vasilev](https://github.com/nikvas0)).
* ... [#10348](https://github.com/ydb-platform/ydb/pull/10348) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fixed verify failed on empty fields. [#10351](https://github.com/ydb-platform/ydb/pull/10351) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix VDisk replication token handling, add some extra checks and log points. [#10371](https://github.com/ydb-platform/ydb/pull/10371) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix sql flags for module resolver in query replay. [#10405](https://github.com/ydb-platform/ydb/pull/10405) ([Andrey Neporada](https://github.com/nepal)).
* Do not try to collect extra sort columns if ORDER BY is ignored. [#10417](https://github.com/ydb-platform/ydb/pull/10417) ([Andrey Neporada](https://github.com/nepal)).
* ... [#10441](https://github.com/ydb-platform/ydb/pull/10441) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#10442](https://github.com/ydb-platform/ydb/pull/10442) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* You cannot simultaneously commit offsets in a transaction and out of a transaction. [#10460](https://github.com/ydb-platform/ydb/pull/10460) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix sink empty batch. [#10463](https://github.com/ydb-platform/ydb/pull/10463) ([Nikita Vasilev](https://github.com/nikvas0)).
* Do not retry `CLIENT_UNAUTHENTICATED` & `CLIENT_CALL_UNIMPLEMENTED`. [#10465](https://github.com/ydb-platform/ydb/pull/10465) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix stucking donor queries. [#10470](https://github.com/ydb-platform/ydb/pull/10470) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#10484](https://github.com/ydb-platform/ydb/pull/10484) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Do not convert google datetime to string in schema. [#10487](https://github.com/ydb-platform/ydb/pull/10487) ([Alexey Efimov](https://github.com/adameat)).
* Because of unhandled double-notification the `IntrusiveList` external size became wrong, which leads to crashes and asserts. [#10499](https://github.com/ydb-platform/ydb/pull/10499) ([Ivan](https://github.com/abyss7)).
* ... [#10522](https://github.com/ydb-platform/ydb/pull/10522) ([kruall](https://github.com/kruall)).
* EntropyPool().Read() can generate data partially, and it returns read bytes, so it should be read inside while loop. [#10534](https://github.com/ydb-platform/ydb/pull/10534) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Stabilize table order in test. [#10539](https://github.com/ydb-platform/ydb/pull/10539) ([Andrey Neporada](https://github.com/nepal)).
* Fix replication bug. [#10560](https://github.com/ydb-platform/ydb/pull/10560) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#10593](https://github.com/ydb-platform/ydb/pull/10593) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Correctly pass, merge and check body parameters in local-rpc calls closes [#10588](https://github.com/ydb-platform/ydb/issues/10588). [#10601](https://github.com/ydb-platform/ydb/pull/10601) ([Alexey Efimov](https://github.com/adameat)).
* Fix slots per disk not returned without a filter. [#10607](https://github.com/ydb-platform/ydb/pull/10607) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10612](https://github.com/ydb-platform/ydb/pull/10612) ([Oleg Doronin](https://github.com/dorooleg)).
* The default value for the `--codec` option of the `ydb topic write` command. [#10651](https://github.com/ydb-platform/ydb/pull/10651) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix volatile transactions getting stuck after a restart. [#10679](https://github.com/ydb-platform/ydb/pull/10679) ([Aleksei Borzenkov](https://github.com/snaury)).
* ... [#10696](https://github.com/ydb-platform/ydb/pull/10696) ([azevaykin](https://github.com/azevaykin)).
* This unreverts https://github.com/ydb-platform/ydb/pull/9979 after https://github.com/ydb-platform/ydb/pull/10575. And fixes missed case when finalize is turn off, that was caught with yql tests. [#10707](https://github.com/ydb-platform/ydb/pull/10707) ([Vladluk](https://github.com/vladl2802)).
* ... [#10712](https://github.com/ydb-platform/ydb/pull/10712) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix memory consumption restriction in stream RPC calls: execute scan query, execute query and yql script. [#10758](https://github.com/ydb-platform/ydb/pull/10758) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#10795](https://github.com/ydb-platform/ydb/pull/10795) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#10815](https://github.com/ydb-platform/ydb/pull/10815) ([azevaykin](https://github.com/azevaykin)).
* Correct counting of resources in cluster and tenantinfo handlers. [#10819](https://github.com/ydb-platform/ydb/pull/10819) ([Alexey Efimov](https://github.com/adameat)).
* Fixed a bug where restoring from a backup using `--import-data` could fail if the partitioning of the table was changed. [#10864](https://github.com/ydb-platform/ydb/pull/10864) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix exporting CMake for darwin. [#10865](https://github.com/ydb-platform/ydb/pull/10865) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* ... [#10873](https://github.com/ydb-platform/ydb/pull/10873) ([azevaykin](https://github.com/azevaykin)).
* Fix container label in vdisk metrics for grafana dashboard. [#10881](https://github.com/ydb-platform/ydb/pull/10881) ([Aleksei Kobzev](https://github.com/kobzonega)).
* It's needed to correctly check capabilities through cluster backend before issuing commands on a database. [#10893](https://github.com/ydb-platform/ydb/pull/10893) ([Alexey Efimov](https://github.com/adameat)).
* ... [#10912](https://github.com/ydb-platform/ydb/pull/10912) ([azevaykin](https://github.com/azevaykin)).
* ... [#10914](https://github.com/ydb-platform/ydb/pull/10914) ([Vitaly Stoyan](https://github.com/vitstn)).
* The test expects to read N messages from the topic. In the `asan` read configuration, the test cannot read N messages in one request. Added the `Read_Exactly_N_Messages_From_Topic` method. [#10937](https://github.com/ydb-platform/ydb/pull/10937) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#10944](https://github.com/ydb-platform/ydb/pull/10944) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fixed use after free. [#10978](https://github.com/ydb-platform/ydb/pull/10978) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* In rare cases we can receive error and response together. closes [#10979](https://github.com/ydb-platform/ydb/issues/10979). [#10985](https://github.com/ydb-platform/ydb/pull/10985) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11017](https://github.com/ydb-platform/ydb/pull/11017) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix possible race with NodeDisconnected and incoming messages. [#11024](https://github.com/ydb-platform/ydb/pull/11024) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix block device size calculation. [#11028](https://github.com/ydb-platform/ydb/pull/11028) ([Alexander Rutkovsky](https://github.com/alexvru)).
* YT block input fix for dynamic tables. [#11040](https://github.com/ydb-platform/ydb/pull/11040) ([Mark Ziganshin](https://github.com/loochek)).
* Fix crash when consumer reads simultaneously with its deleting. [#11043](https://github.com/ydb-platform/ydb/pull/11043) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#11054](https://github.com/ydb-platform/ydb/pull/11054) ([Vitaly Stoyan](https://github.com/vitstn)).
* ... [#11055](https://github.com/ydb-platform/ydb/pull/11055) ([Anton Martsenyuk](https://github.com/antoniox)).
* Fixed excessive read latency during and after some shard splits. [#11059](https://github.com/ydb-platform/ydb/pull/11059) ([Aleksei Borzenkov](https://github.com/snaury)).
* ... [#11071](https://github.com/ydb-platform/ydb/pull/11071) ([yumkam](https://github.com/yumkam)).
* ... [#11075](https://github.com/ydb-platform/ydb/pull/11075) ([Vitaly Stoyan](https://github.com/vitstn)).
* Added row id validation. [#11080](https://github.com/ydb-platform/ydb/pull/11080) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix double PassAway call in Healthcheck actor. [#11096](https://github.com/ydb-platform/ydb/pull/11096) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Fix PDisk drive size estimation code. [#11098](https://github.com/ydb-platform/ydb/pull/11098) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix tenant info tablets. [#11111](https://github.com/ydb-platform/ydb/pull/11111) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11113](https://github.com/ydb-platform/ydb/pull/11113) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Now when request fails in ydb fq proxy doesnt send it back with the same execution ttl. [#11145](https://github.com/ydb-platform/ydb/pull/11145) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fixed import into contrib build errors. [#11162](https://github.com/ydb-platform/ydb/pull/11162) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix PhysicalOptimizer-BypassMerge with key ranges. [#11203](https://github.com/ydb-platform/ydb/pull/11203) ([Andrey Neporada](https://github.com/nepal)).
* YDB nodes have different time counting. May occured situations when ticket cannot verify and get error "token verification failed: token expired" ... [#11212](https://github.com/ydb-platform/ydb/pull/11212) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Support ANSI SQL syntax highlighting. [#11233](https://github.com/ydb-platform/ydb/pull/11233) ([Victor Smirnov](https://github.com/vityaman)).
* Control memory consumption in run script actor. Unify memory consumption in execute query RPC and run script actor. [#11241](https://github.com/ydb-platform/ydb/pull/11241) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Fix shard ranges sort. [#11257](https://github.com/ydb-platform/ydb/pull/11257) ([Nikita Vasilev](https://github.com/nikvas0)).
* Fix crash in storage/groups - access of already released memory closes [#11263](https://github.com/ydb-platform/ydb/issues/11263). [#11268](https://github.com/ydb-platform/ydb/pull/11268) ([Alexey Efimov](https://github.com/adameat)).
* Fix for [yq-3747](https://st.yandex-team.ru/yq-3747). [#11271](https://github.com/ydb-platform/ydb/pull/11271) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix bootstrapper being unable to boot tablets in certain cases. [#11284](https://github.com/ydb-platform/ydb/pull/11284) ([Aleksei Borzenkov](https://github.com/snaury)).
* Adding the ability to register dynamic nodes by certificate. We wont to know how node was registered in node broker. Flag AuthorizeByCertificate is used for this goal. [#11315](https://github.com/ydb-platform/ydb/pull/11315) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Ensure nodes manually set as up do not revert to down. [#11349](https://github.com/ydb-platform/ydb/pull/11349) ([vporyadke](https://github.com/vporyadke)).
* ... [#11384](https://github.com/ydb-platform/ydb/pull/11384) ([Alexey Efimov](https://github.com/adameat)).
* There was wrong name of YDB CLI option in doc. Fix it. [#11391](https://github.com/ydb-platform/ydb/pull/11391) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* The label name for the `RequestsBigLatency` metric is incorrect. [#11410](https://github.com/ydb-platform/ydb/pull/11410) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Appears in REDUCE with multiple inputs if all of them are empty. [#11417](https://github.com/ydb-platform/ydb/pull/11417) ([Roman Udovichenko](https://github.com/rvu1024)).
* Objects with thread storage duration are guaranteed to be destroyed **only** for the thread which calls exit. Therefore there is no guarantee that destruction will happen for objects associated with other threads. This may cause the [blockstore-server](https://github.com/ydb-platform/nbs/tree/main/cloud/blockstore/apps/server) to crash as described below: ``` VERIFY failed (2024-11-06T16:40:28.177019Z):. [#11422](https://github.com/ydb-platform/ydb/pull/11422) ([Mikhail Montsev](https://github.com/SvartMetal)).
* Enforce equal groups in YtCopy and leading operation. [#11435](https://github.com/ydb-platform/ydb/pull/11435) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fix audit log not recording unsuccessful ldap logins. [#11438](https://github.com/ydb-platform/ydb/pull/11438) ([ijon](https://github.com/ijon)).
* I guess it was added accidentally and so it need to be removed. [#11441](https://github.com/ydb-platform/ydb/pull/11441) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* EvWrite: add mvcc snapshot. [#11474](https://github.com/ydb-platform/ydb/pull/11474) ([Nikita Vasilev](https://github.com/nikvas0)).
* A datashard could catch VERIFY during restart with scheme transaction inflight. [#11483](https://github.com/ydb-platform/ydb/pull/11483) ([azevaykin](https://github.com/azevaykin)).
* Added column types validation. [#11487](https://github.com/ydb-platform/ydb/pull/11487) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Performing rw-transactions concurrently with schema operations can lead to disruption of persistent locks and loss of a schema snapshot used for serialization of CDC records. [#11493](https://github.com/ydb-platform/ydb/pull/11493) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#11501](https://github.com/ydb-platform/ydb/pull/11501) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11507](https://github.com/ydb-platform/ydb/pull/11507) ([yumkam](https://github.com/yumkam)).
* Performing rw-transactions concurrently with schema operations can lead to disruption of persistent locks and loss of a schema snapshot used for serialization of CDC records. [#11517](https://github.com/ydb-platform/ydb/pull/11517) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ... [#11530](https://github.com/ydb-platform/ydb/pull/11530) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#11548](https://github.com/ydb-platform/ydb/pull/11548) ([yumkam](https://github.com/yumkam)).
* Don't recreate snapshots in transaction. [#11553](https://github.com/ydb-platform/ydb/pull/11553) ([Nikita Vasilev](https://github.com/nikvas0)).
* Fix reads from many shards. [#11569](https://github.com/ydb-platform/ydb/pull/11569) ([Nikita Vasilev](https://github.com/nikvas0)).
* Error appears during column groups calculation, when YtMerge! operation is used only in Left! (as result of empty join optimization for example). [#11575](https://github.com/ydb-platform/ydb/pull/11575) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fixed race with actor context. [#11576](https://github.com/ydb-platform/ydb/pull/11576) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Error appears at YtCopy execution preparation phase, just after SubstTables() call. [#11602](https://github.com/ydb-platform/ydb/pull/11602) ([Roman Udovichenko](https://github.com/rvu1024)).
* YT block input fix for empty input. [#11605](https://github.com/ydb-platform/ydb/pull/11605) ([Mark Ziganshin](https://github.com/loochek)).
* Use async transform for ctas. [#11656](https://github.com/ydb-platform/ydb/pull/11656) ([Nikita Vasilev](https://github.com/nikvas0)).
* ... [#11665](https://github.com/ydb-platform/ydb/pull/11665) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Update yqlrun UI script after YQL move. [#11690](https://github.com/ydb-platform/ydb/pull/11690) ([Andrey Neporada](https://github.com/nepal)).
* Fix excessive memory usage during index-only non-restoring TEvRange query execution. [#11692](https://github.com/ydb-platform/ydb/pull/11692) ([Alexander Rutkovsky](https://github.com/alexvru)).
* GetStorageChannelStatus incremented inline inflight counter but decremented common inflight counter. Now it uses only common inflight counter. [#11702](https://github.com/ydb-platform/ydb/pull/11702) ([kruall](https://github.com/kruall)).
* Preserve suid bit for docker that uses buildkit version < 0.13.0 (https://github.com/moby/buildkit/issues/3920). [#11714](https://github.com/ydb-platform/ydb/pull/11714) ([Aleksei Kobzev](https://github.com/kobzonega)).
* YT block input fix for empty input (second attempt). [#11730](https://github.com/ydb-platform/ydb/pull/11730) ([Mark Ziganshin](https://github.com/loochek)).
* Added brackets during pushdown. [#11742](https://github.com/ydb-platform/ydb/pull/11742) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#11784](https://github.com/ydb-platform/ydb/pull/11784) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11810](https://github.com/ydb-platform/ydb/pull/11810) ([yumkam](https://github.com/yumkam)).
* Fixed data race in json filters. [#11827](https://github.com/ydb-platform/ydb/pull/11827) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix blob recovery actor bug. [#11857](https://github.com/ydb-platform/ydb/pull/11857) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ... [#11865](https://github.com/ydb-platform/ydb/pull/11865) ([yumkam](https://github.com/yumkam)).
* ... [#11869](https://github.com/ydb-platform/ydb/pull/11869) ([Innokentii Mokin](https://github.com/Enjection)).
* ... [#11886](https://github.com/ydb-platform/ydb/pull/11886) ([azevaykin](https://github.com/azevaykin)).
* ... [#11900](https://github.com/ydb-platform/ydb/pull/11900) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix [#11193](https://github.com/ydb-platform/ydb/issues/11193). [#11906](https://github.com/ydb-platform/ydb/pull/11906) ([flown4qqqq](https://github.com/flown4qqqq)).
* A race between actors. The actor of the KP session is transferred to the `FinalCleanupState`. In this composition, he does not respond to the `TEvQueryRequest` message from the `TPartitionWriter` actor. [#11920](https://github.com/ydb-platform/ydb/pull/11920) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Add param --explain-ast for ydb sql query. [#11928](https://github.com/ydb-platform/ydb/pull/11928) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* ... [#11947](https://github.com/ydb-platform/ydb/pull/11947) ([Roman Udovichenko](https://github.com/rvu1024)).
* Relaxed memory order that was before allows the effects of constructor of TSamplingThrottlingImpl in UpdateImpl be observed after reading of ImplUpdate in another thread that calls HandleTracing. [#11949](https://github.com/ydb-platform/ydb/pull/11949) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* ... [#11975](https://github.com/ydb-platform/ydb/pull/11975) ([Alexey Efimov](https://github.com/adameat)).
* ... [#11978](https://github.com/ydb-platform/ydb/pull/11978) ([Alexey Efimov](https://github.com/adameat)).
* Fix bulk operations potentially breaking frozen locks later causing non-serializable commits. [#12008](https://github.com/ydb-platform/ydb/pull/12008) ([Aleksei Borzenkov](https://github.com/snaury)).
* Missing bits from Arcadia (YQL embedded and YT provider). [#12023](https://github.com/ydb-platform/ydb/pull/12023) ([Andrey Neporada](https://github.com/nepal)).
* ... [#12041](https://github.com/ydb-platform/ydb/pull/12041) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix Ranges Compare. [#12043](https://github.com/ydb-platform/ydb/pull/12043) ([Nikita Vasilev](https://github.com/nikvas0)).
* ... [#12068](https://github.com/ydb-platform/ydb/pull/12068) ([yumkam](https://github.com/yumkam)).
* Fixed rope creation. [#12073](https://github.com/ydb-platform/ydb/pull/12073) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#12084](https://github.com/ydb-platform/ydb/pull/12084) ([kruall](https://github.com/kruall)).
* Fix issue that could lead to locked tablets not booting after unlock. [#12109](https://github.com/ydb-platform/ydb/pull/12109) ([vporyadke](https://github.com/vporyadke)).
* Choose automatically only ready indices. [#12146](https://github.com/ydb-platform/ydb/pull/12146) ([Mikhail Surin](https://github.com/ssmike)).
* Fix follower reads sometimes crashing during split. [#12151](https://github.com/ydb-platform/ydb/pull/12151) ([Aleksei Borzenkov](https://github.com/snaury)).
* [YQL-19342][CBO] Use proper error codes. [#12159](https://github.com/ydb-platform/ydb/pull/12159) ([Andrey Neporada](https://github.com/nepal)).
* Fixed a bug where `ydb tools restore` was failing with `Too much data` if `--upload-batch-bytes` option value was set exactly to it's maximum possible value (16MiB). [#12216](https://github.com/ydb-platform/ydb/pull/12216) ([Ilia Shakhov](https://github.com/pixcc)).
* When a transaction is committed, the value of the AvgWriteBytes metric changes. This, in turn, can lead to a split of the partition. [#12220](https://github.com/ydb-platform/ydb/pull/12220) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Add missing tsan.supp file (copy from ydb/library/actors/core). [#12230](https://github.com/ydb-platform/ydb/pull/12230) ([Andrey Neporada](https://github.com/nepal)).
* A typo in audit log. [#12239](https://github.com/ydb-platform/ydb/pull/12239) ([azevaykin](https://github.com/azevaykin)).
* ... [#12265](https://github.com/ydb-platform/ydb/pull/12265) ([Innokentii Mokin](https://github.com/Enjection)).
* ... [#12266](https://github.com/ydb-platform/ydb/pull/12266) ([Innokentii Mokin](https://github.com/Enjection)).
* ... [#12267](https://github.com/ydb-platform/ydb/pull/12267) ([Innokentii Mokin](https://github.com/Enjection)).
* Fixed commit for possible RW tx without writes (like 'update ... set .. where ...' touched no rows) - Fixed Volatile conditions. [#12279](https://github.com/ydb-platform/ydb/pull/12279) ([Nikita Vasilev](https://github.com/nikvas0)).
* When a user tries to connect without the necessary permissions, this error is returned:. [#12287](https://github.com/ydb-platform/ydb/pull/12287) ([azevaykin](https://github.com/azevaykin)).
* Fix PDisk didn't check TEvChunkWrite's offset and wrote data to with an unexpected offset. Add UT for that case. [#12298](https://github.com/ydb-platform/ydb/pull/12298) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Dont consider indices with all pk fields in key. [#12315](https://github.com/ydb-platform/ydb/pull/12315) ([Mikhail Surin](https://github.com/ssmike)).
* CBO at Level 2 was activated when some tables in the queries were not Data Shard tables, and this included AS_Table constructs and parameters. [#12322](https://github.com/ydb-platform/ydb/pull/12322) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Sometime PDisk looses replies, so add more debug assertions. [#12331](https://github.com/ydb-platform/ydb/pull/12331) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* The partition periodically transmits a set of `PQ/*` indicators to the PQ tablet. This is also done by the service partition for writing to the transaction. If the duration of the transaction is less than the period of transfer of indicators, then part of the data was lost. Now, the service partition transmits the accumulated indicators to the PQ tablet before deletion. [#12337](https://github.com/ydb-platform/ydb/pull/12337) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* In the `linux-x86_64-release-asan` configuration, the `ReadFromTopic` function does not have time to return the expected number of messages. Replaced with calls `Read_Exactly_N_Messages_From_Topic`. [#12364](https://github.com/ydb-platform/ydb/pull/12364) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* ... [#12391](https://github.com/ydb-platform/ydb/pull/12391) ([Alexey Efimov](https://github.com/adameat)).
* MovedPatch uses some vectors that were allocated only during VPatch. Now they are also allocated during MovedPatch if they were not initially allocated. [#12418](https://github.com/ydb-platform/ydb/pull/12418) ([kruall](https://github.com/kruall)).
* During the previous refactoring, the template argument was omitted in the function call to GetAvgPartForLastSeconds. However, the method contained a bug when WithTail=false, causing incorrect calculations. Fixed this issue and added tests for TValueHistory. [#12422](https://github.com/ydb-platform/ydb/pull/12422) ([kruall](https://github.com/kruall)).
* ... [#12446](https://github.com/ydb-platform/ydb/pull/12446) ([Alexey Efimov](https://github.com/adameat)).
* ... [#12447](https://github.com/ydb-platform/ydb/pull/12447) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fixed uncaught exception error. [#12465](https://github.com/ydb-platform/ydb/pull/12465) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Changed `GetOperationResponse` parsing so that `/operation/get` start to return stats if paramater `stats_mode` is passed. [#12478](https://github.com/ydb-platform/ydb/pull/12478) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* ... [#12479](https://github.com/ydb-platform/ydb/pull/12479) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ... [#12516](https://github.com/ydb-platform/ydb/pull/12516) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix GetBlock for BlobDepot. [#12525](https://github.com/ydb-platform/ydb/pull/12525) ([mregrock](https://github.com/mregrock)).
* ... [#12568](https://github.com/ydb-platform/ydb/pull/12568) ([zverevgeny](https://github.com/zverevgeny)).
* Bugfix in PQRB (potential loss of metrics for new consumers). [#12613](https://github.com/ydb-platform/ydb/pull/12613) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* Fix not working balancing command in some cases. [#12668](https://github.com/ydb-platform/ydb/pull/12668) ([kruall](https://github.com/kruall)).
* Https://github.com/ydb-platform/ydb/issues/11923. [#12678](https://github.com/ydb-platform/ydb/pull/12678) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fixed `SCHEMESHARD_CDC_STREAM_SCAN_FINALIZER` actor leak. [#12679](https://github.com/ydb-platform/ydb/pull/12679) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Rollback some changes from [#12403](https://github.com/ydb-platform/ydb/issues/12403). [#12690](https://github.com/ydb-platform/ydb/pull/12690) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* Fix error message [#10853](https://github.com/ydb-platform/ydb/issues/10853). [#12701](https://github.com/ydb-platform/ydb/pull/12701) ([Mikhail Surin](https://github.com/ssmike)).
* Fixed fault for parsing errors without filter. [#12707](https://github.com/ydb-platform/ydb/pull/12707) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fixed memory leak in filters. [#12739](https://github.com/ydb-platform/ydb/pull/12739) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fixed missing historical data. [#12757](https://github.com/ydb-platform/ydb/pull/12757) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ... [#12777](https://github.com/ydb-platform/ydb/pull/12777) ([Alexey Efimov](https://github.com/adameat)).
* Fix disconnected proxies unexpectedly registering in coordination service. [#12782](https://github.com/ydb-platform/ydb/pull/12782) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix a bug where restart count was returned on the wrong window. [#12789](https://github.com/ydb-platform/ydb/pull/12789) ([vporyadke](https://github.com/vporyadke)).
* ... [#12805](https://github.com/ydb-platform/ydb/pull/12805) ([Alexey Efimov](https://github.com/adameat)).
* Canonize storage path in CS Tiers. [#12833](https://github.com/ydb-platform/ydb/pull/12833) ([Semyon](https://github.com/swalrus1)).
* The function returns an empty view that does not point to local memory on the stack, which makes it difficult to track the lifetime of string buffers. It is also requires less time to directly construct the view. [#12835](https://github.com/ydb-platform/ydb/pull/12835) ([ubyte](https://github.com/ubyte)).
* Fix parsing S3 settings on CS. [#12856](https://github.com/ydb-platform/ydb/pull/12856) ([Semyon](https://github.com/swalrus1)).
* In some proxy responses, CORS headers were missing. [#12877](https://github.com/ydb-platform/ydb/pull/12877) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Fixed the errors: 1. The program did not take into account that it can receive a `TEvReadSet` more times than the number of senders in `TEvProposeTransaction`. Deleted the check from `Y_ABORT_UNLESS'. 2. Replaced the `Y_ABORT_UNLESS` checks with the `ForceFalse` flag. Instead of an abnormal termination, the program returns `ABORTED`. [#12905](https://github.com/ydb-platform/ydb/pull/12905) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fix `ydb_configure` generation for section `host_configs` in static config. [#12920](https://github.com/ydb-platform/ydb/pull/12920) ([Aleksei Kobzev](https://github.com/kobzonega)).
* ... [#12927](https://github.com/ydb-platform/ydb/pull/12927) ([Innokentii Mokin](https://github.com/Enjection)).
* Avoid creating forever-running thread pools for each S3 client instance. [#12963](https://github.com/ydb-platform/ydb/pull/12963) ([Maksim Zinal](https://github.com/zinal)).
* Fixed empty error from CMS create tenant request (issue [#12973](https://github.com/ydb-platform/ydb/issues/12973)). [#12977](https://github.com/ydb-platform/ydb/pull/12977) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix for [YQ-3956](https://st.yandex-team.ru/YQ-3956). [#12985](https://github.com/ydb-platform/ydb/pull/12985) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix for [YQ-3919](https://st.yandex-team.ru/YQ-3919). [#12987](https://github.com/ydb-platform/ydb/pull/12987) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix BufferActor termination - Don't wait for last ack in FwdActor - More metrics - Fixed errors. [#12999](https://github.com/ydb-platform/ydb/pull/12999) ([Nikita Vasilev](https://github.com/nikvas0)).
* Rename muted sinks ut for topics. [#13000](https://github.com/ydb-platform/ydb/pull/13000) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* Fix parsing input path in ydbd cli commands (`ydbd schema` subcommands). [#13001](https://github.com/ydb-platform/ydb/pull/13001) ([ijon](https://github.com/ijon)).
* Fix ub with std::optional *nullopt for immediate commit with topic. [#13006](https://github.com/ydb-platform/ydb/pull/13006) ([Daniil Timizhev](https://github.com/dahbka-lis)).
* ... [#13019](https://github.com/ydb-platform/ydb/pull/13019) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13021](https://github.com/ydb-platform/ydb/pull/13021) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13024](https://github.com/ydb-platform/ydb/pull/13024) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13034](https://github.com/ydb-platform/ydb/pull/13034) ([Alexey Efimov](https://github.com/adameat)).
* Rename gcc_version to version. [#13053](https://github.com/ydb-platform/ydb/pull/13053) ([Dmitrii Dmitriev](https://github.com/dimdim1177)).
* The service partition can receive the `TEvGetWriteInfoRequest` message in the `StateInit` state. In this case, it postpones the message to the `PendingEvents` queue. When the service partition switches to the `StateIdle` state she sends herself all the accumulated messages. The service partition may receive a `TEvGetWriteInfoRequest` message with an empty sender address in the `StateIdle` state. As a result, the responses `TEvGetWriteInfoResponse` and `TEvGetWriteInfoError` are lost. [#13066](https://github.com/ydb-platform/ydb/pull/13066) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Fixes creating unrestorable S3 backups when splitting and merging the table. [#13067](https://github.com/ydb-platform/ydb/pull/13067) ([Ilia Shakhov](https://github.com/pixcc)).
* Fix deferred PDisk start logic with distconf. [#13082](https://github.com/ydb-platform/ydb/pull/13082) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix SelfManagement section absence check. [#13087](https://github.com/ydb-platform/ydb/pull/13087) ([mregrock](https://github.com/mregrock)).
* Fixed pq source sensors names. [#13088](https://github.com/ydb-platform/ydb/pull/13088) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix linking in nodewarden. [#13105](https://github.com/ydb-platform/ydb/pull/13105) ([mregrock](https://github.com/mregrock)).
* ... [#13118](https://github.com/ydb-platform/ydb/pull/13118) ([yumkam](https://github.com/yumkam)).
* After the transaction is completed, the program pushes forward the `ExecStep`. The transaction itself is not deleted until it receives a `TEvReadSetAck` from other tablets. After restarting, the tablet excludes transactions with `Step < ExecStep`. As a result, the transaction may hang in other tablets. [#13134](https://github.com/ydb-platform/ydb/pull/13134) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* [ydbd_slice] fixed Namespace error on ydbd_slice update. [#13171](https://github.com/ydb-platform/ydb/pull/13171) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Fix ColumnShardArbiter shard sets. [#13214](https://github.com/ydb-platform/ydb/pull/13214) ([Nikita Vasilev](https://github.com/nikvas0)).
* ... [#13229](https://github.com/ydb-platform/ydb/pull/13229) ([Alexey Efimov](https://github.com/adameat)).
* ... [#13243](https://github.com/ydb-platform/ydb/pull/13243) ([yumkam](https://github.com/yumkam)).
* The test breaks if you run all the tests in the `ydb/core/persqueue/ut` subdirectory. If you run it separately, it completes without an error. [#13271](https://github.com/ydb-platform/ydb/pull/13271) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Depending on the version of STL used, its configuration, and the distribution of sortable elements, the std::sort algorithm may compare some element with itself (for example, libcxx can do this). In that case, the sorting predicate is obliged to return the value `false`, and not lead to an abortion. [#13296](https://github.com/ydb-platform/ydb/pull/13296) ([ubyte](https://github.com/ubyte)).
* Fix UB caused by comparator not defining a valid strict-weak ordering. [#13303](https://github.com/ydb-platform/ydb/pull/13303) ([ubyte](https://github.com/ubyte)).
* Fix typo. [#13311](https://github.com/ydb-platform/ydb/pull/13311) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix network filter any. [#13360](https://github.com/ydb-platform/ydb/pull/13360) ([Alexey Efimov](https://github.com/adameat)).
* исправление для [YQ-3957](https://st.yandex-team.ru/YQ-3957). [#13391](https://github.com/ydb-platform/ydb/pull/13391) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* Fix possible node crash in HTML rendering code. [#13408](https://github.com/ydb-platform/ydb/pull/13408) ([AlexSm](https://github.com/alexv-smirnov)).
* Handle multiple streamlookup joins in query. [#13426](https://github.com/ydb-platform/ydb/pull/13426) ([yumkam](https://github.com/yumkam)).
* Avoid underflow on requests count. [#13433](https://github.com/ydb-platform/ydb/pull/13433) ([Alexey Efimov](https://github.com/adameat)).
* Fix uncommitted changes leak and clean them up on startup. [#13444](https://github.com/ydb-platform/ydb/pull/13444) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix buffer actor leak. [#13551](https://github.com/ydb-platform/ydb/pull/13551) ([Nikita Vasilev](https://github.com/nikvas0)).
* Scheme proto propagation could be slow in some races and new code can return old proto. In this case we should not throw exception. [#13555](https://github.com/ydb-platform/ydb/pull/13555) ([azevaykin](https://github.com/azevaykin)).
* Use smart pointers in unit tests for harmonizer. [#13560](https://github.com/ydb-platform/ydb/pull/13560) ([Sergey Belyakov](https://github.com/serbel324)).
* ... [#13572](https://github.com/ydb-platform/ydb/pull/13572) ([Alexey Efimov](https://github.com/adameat)).
* Fix cfg tool. [#13582](https://github.com/ydb-platform/ydb/pull/13582) ([mregrock](https://github.com/mregrock)).
* ... [#13628](https://github.com/ydb-platform/ydb/pull/13628) ([Alexey Efimov](https://github.com/adameat)).
* Fixed a bug where arm64 YDB CLI binary was downloading amd64 binary to replace itself during `ydb update`. To update already installed binaries to the latest arm64 version, YDB CLI should be re-installed ... [#13669](https://github.com/ydb-platform/ydb/pull/13669) ([Nikolay Perfilov](https://github.com/pnv1)).
* TYdbErrorException constructor uses moved value, that leads to segfault. [#13736](https://github.com/ydb-platform/ydb/pull/13736) ([Bulat](https://github.com/Gazizonoki)).
* Fix metadata handling in configs. [#13741](https://github.com/ydb-platform/ydb/pull/13741) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix baremetal none-1-node template. [#13742](https://github.com/ydb-platform/ydb/pull/13742) ([Konstantin Nikiforov](https://github.com/melazyk)).
* Original PR: https://github.com/ydb-platform/ydb/pull/13658. [#13761](https://github.com/ydb-platform/ydb/pull/13761) ([Bulat](https://github.com/Gazizonoki)).
* Allow to work without volatile - Don't create a lot of actors at one mailbox - Wait for all shards to commit - Changed error for undelivered message to buffer actor. [#13786](https://github.com/ydb-platform/ydb/pull/13786) ([Nikita Vasilev](https://github.com/nikvas0)).
* Fix getting max pk in a portion as eviction border on CS. [#13806](https://github.com/ydb-platform/ydb/pull/13806) ([Semyon](https://github.com/swalrus1)).
* Fix weight actualization delay in CS optimizer. [#13812](https://github.com/ydb-platform/ydb/pull/13812) ([Semyon](https://github.com/swalrus1)).
* Fix unexpected message. [#13813](https://github.com/ydb-platform/ydb/pull/13813) ([Nikita Vasilev](https://github.com/nikvas0)).
* When loading metadata from the YDB side, optional type was no longer added to the data type. [#13815](https://github.com/ydb-platform/ydb/pull/13815) ([azevaykin](https://github.com/azevaykin)).

#### ### Additional information

* Now decimal type is parametrized so we can remove default parameters in SDK. [#9969](https://github.com/ydb-platform/ydb/pull/9969) ([azevaykin](https://github.com/azevaykin)).
* Revert commit due to tpc-c performance degradation. [#10600](https://github.com/ydb-platform/ydb/pull/10600) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#11176](https://github.com/ydb-platform/ydb/pull/11176) ([azevaykin](https://github.com/azevaykin)).

#### Check SID existence in ACL operation

* ... [#12719](https://github.com/ydb-platform/ydb/pull/12719) ([kungurtsev](https://github.com/kunga)).

#### NO CL CATEGORY

* Test streaming grace join. [#3862](https://github.com/ydb-platform/ydb/pull/3862) ([Oleg Doronin](https://github.com/dorooleg)).
* ... [#5780](https://github.com/ydb-platform/ydb/pull/5780) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category <!-- remove all except one -->. [#5984](https://github.com/ydb-platform/ydb/pull/5984) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* ### Changelog category <!-- remove all except one -->. [#6032](https://github.com/ydb-platform/ydb/pull/6032) ([Aleksei Pleshakov](https://github.com/qrort)).
* ### Changelog category. [#6118](https://github.com/ydb-platform/ydb/pull/6118) ([niksaveliev](https://github.com/niksaveliev)).
* Refactor arrow kernels to include another argument (valueBuilder). It is required by Datetime UDF. [#6231](https://github.com/ydb-platform/ydb/pull/6231) ([Fiodar Miron](https://github.com/fedor-miron)).
* ### Changelog category. [#6255](https://github.com/ydb-platform/ydb/pull/6255) ([niksaveliev](https://github.com/niksaveliev)).
* Prohibit UDF on Flow in case of PartitionByKeys callable. ### Changelog category <!-- remove all except one -->. [#6322](https://github.com/ydb-platform/ydb/pull/6322) ([Aidar Samerkhanov](https://github.com/Darych)).
* ... [#6363](https://github.com/ydb-platform/ydb/pull/6363) ([Kirill Rysin](https://github.com/naspirato)).
* Ydb cli 2.9.0 and 2.10.0 changelog and download links ### Changelog category * Documentation (changelog entry is not required). [#6399](https://github.com/ydb-platform/ydb/pull/6399) ([Nikolay Perfilov](https://github.com/pnv1)).
* ### Changelog category <!-- remove all except one --> * Bugfix ### Additional information. [#6471](https://github.com/ydb-platform/ydb/pull/6471) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* ### Changelog category <!-- remove all except one -->. [#6472](https://github.com/ydb-platform/ydb/pull/6472) ([Fiodar Miron](https://github.com/fedor-miron)).
* ### Changelog category <!-- remove all except one --> * Improvement ### Additional information. [#6484](https://github.com/ydb-platform/ydb/pull/6484) ([Timur Sufiyanov](https://github.com/skywalker-jpg)).
* ... [#6493](https://github.com/ydb-platform/ydb/pull/6493) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category <!-- remove all except one -->. [#6528](https://github.com/ydb-platform/ydb/pull/6528) ([Aleksei Pleshakov](https://github.com/qrort)).
* ... [#6537](https://github.com/ydb-platform/ydb/pull/6537) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category <!-- remove all except one -->. [#6568](https://github.com/ydb-platform/ydb/pull/6568) ([VPolka](https://github.com/VPolka)).
* ... [#6629](https://github.com/ydb-platform/ydb/pull/6629) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Https://a.yandex-team.ru/arcadia/commit/r1829042 ### changelog category <!-- remove all except one -->. [#6640](https://github.com/ydb-platform/ydb/pull/6640) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* ... [#6766](https://github.com/ydb-platform/ydb/pull/6766) ([Ivan Blinkov](https://github.com/blinkov)).
* Added method to enable memory yellow zone by force. This method will allow testing compute nodes with enabled spilling. [#6839](https://github.com/ydb-platform/ydb/pull/6839) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* ... [#6864](https://github.com/ydb-platform/ydb/pull/6864) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#6874](https://github.com/ydb-platform/ydb/pull/6874) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category. [#6900](https://github.com/ydb-platform/ydb/pull/6900) ([niksaveliev](https://github.com/niksaveliev)).
* ... [#7089](https://github.com/ydb-platform/ydb/pull/7089) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ... [#7160](https://github.com/ydb-platform/ydb/pull/7160) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ... [#7198](https://github.com/ydb-platform/ydb/pull/7198) ([azevaykin](https://github.com/azevaykin)).
* ... [#7226](https://github.com/ydb-platform/ydb/pull/7226) ([Ivan Blinkov](https://github.com/blinkov)).
* ### Changelog category <!-- remove all except one -->. [#7251](https://github.com/ydb-platform/ydb/pull/7251) ([Aleksandr Gaev](https://github.com/Krock21)).
* Example https://storage.yandexcloud.net/ydb-perf-logs/ya-test.html?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=YCAJEYmW-5kCaLz6auKv1AMiN%2F20240731%2Fru-central1%2Fs3%2Faws4_request&X-Amz-Date=20240731T101104Z&X-Amz-Expires=2592000&X-Amz-Signature=A400D7BC14D54044014D08E9497D1151CBA80588A4426ECD8058851C15D201AC&X-Amz-SignedHeaders=host. [#7294](https://github.com/ydb-platform/ydb/pull/7294) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#7308](https://github.com/ydb-platform/ydb/pull/7308) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category <!-- remove all except one -->. [#7422](https://github.com/ydb-platform/ydb/pull/7422) ([Aleksandr Gaev](https://github.com/Krock21)).
* ... [#7493](https://github.com/ydb-platform/ydb/pull/7493) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ... [#7520](https://github.com/ydb-platform/ydb/pull/7520) ([Ivan Blinkov](https://github.com/blinkov)).
* ... [#7547](https://github.com/ydb-platform/ydb/pull/7547) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category <!-- remove all except one -->. [#7585](https://github.com/ydb-platform/ydb/pull/7585) ([Marina Pereskokova](https://github.com/Krisha11)).
* ### Changelog category <!-- remove all except one -->. [#7595](https://github.com/ydb-platform/ydb/pull/7595) ([Aleksei Pleshakov](https://github.com/qrort)).
* ### Changelog category <!-- remove all except one -->. [#7662](https://github.com/ydb-platform/ydb/pull/7662) ([Marina Pereskokova](https://github.com/Krisha11)).
* Request wasn't assigned yet but we already use it. [#7722](https://github.com/ydb-platform/ydb/pull/7722) ([kruall](https://github.com/kruall)).
* ### Changelog category <!-- remove all except one -->. [#7723](https://github.com/ydb-platform/ydb/pull/7723) ([Aleksei Pleshakov](https://github.com/qrort)).
* ... [#7729](https://github.com/ydb-platform/ydb/pull/7729) ([kungurtsev](https://github.com/kunga)).
* ... [#7735](https://github.com/ydb-platform/ydb/pull/7735) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ... [#7745](https://github.com/ydb-platform/ydb/pull/7745) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Basic example for Query Service cpp sdk. [#7810](https://github.com/ydb-platform/ydb/pull/7810) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* New Mutes https://datalens.yandex/4un3zdm0zcnyr |owner|full_name|success rate|summary|task| |:-|:-|:-|:-|:-| |USERNAME:@ijon|ydb/core/tx/schemeshard/ut_move_reboots/TSchemeShardMoveRebootsTest.WithData|0|Pass:0 Fail:12 Mute:0 Skip:0|[task](https://github.com/orgs/ydb-platform/projects/45/views/1?pane=issue&itemId=74928349)| |USERNAME:@ijon|ydb/core/tx/schemeshard/ut_move_reboots/TSchemeShardMoveRebootsTest.WithDataAndPersistentPartitionStats|0|Pass:0 Fail:12 Mute:0 Skip:0|[task](https://github.com/orgs/ydb-platform/projects/45/views/1?pane=issue&itemId=74930010)| |USERNAME:@ijon|ydb/core/tx/schemeshard/ut_pq_reboots/TPqGroupTestReboots.AlterWithReboots-PQConfigTransactionsAtSchemeShard-false|0|Pass:0 Fail:12 Mute:0 Skip:0|[task](https://github.com/orgs/ydb-platform/projects/45/views/1?pane=issue&itemId=74930146)| |USERNAME:@the-ancient-1|ydb/core/blobstorage/ut_blobstorage/ut_scrub/BlobScrubbing.block42|0|Pass:0 Fail:12 Mute:0 Skip:0|[task](https://github.com/orgs/ydb-platform/projects/45/views/1?pane=issue&itemId=74930240)| |USERNAME:@the-ancient-1|ydb/core/blobstorage/ut_blobstorage/ut_scrub/BlobScrubbing.mirror3dc|0|Pass:0 Fail:12 Mute:0 Skip:0|[task](https://github.com/orgs/ydb-platform/projects/45/views/1?pane=issue&itemId=74930278)| |USERNAME:@the-ancient-1|ydb/core/blobstorage/ut_blobstorage/ut_scrub/BlobScrubbing.mirror3of4|0|Pass:0 Fail:12 Mute:0 Skip:0|[task](https://github.com/orgs/ydb-platform/projects/45/views/1?pane=issue&itemId=74930324)|. [#7845](https://github.com/ydb-platform/ydb/pull/7845) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#7912](https://github.com/ydb-platform/ydb/pull/7912) ([SloNN](https://github.com/SloNN)).
* ... [#8003](https://github.com/ydb-platform/ydb/pull/8003) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category <!-- remove all except one -->. [#8016](https://github.com/ydb-platform/ydb/pull/8016) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* ### Changelog category <!-- remove all except one -->. [#8061](https://github.com/ydb-platform/ydb/pull/8061) ([Aleksei Pleshakov](https://github.com/qrort)).
* ... [#8078](https://github.com/ydb-platform/ydb/pull/8078) ([kruall](https://github.com/kruall)).
* ### Changelog category. [#8095](https://github.com/ydb-platform/ydb/pull/8095) ([niksaveliev](https://github.com/niksaveliev)).
* Add commit from arcadia to handle response with bad request from protected resource. [#8105](https://github.com/ydb-platform/ydb/pull/8105) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ... [#8181](https://github.com/ydb-platform/ydb/pull/8181) ([Oleg Doronin](https://github.com/dorooleg)).
* Allow CTAS without perstatement: Removed checks & added errors. [#8241](https://github.com/ydb-platform/ydb/pull/8241) ([Nikita Vasilev](https://github.com/nikvas0)).
* ### Changelog category. [#8485](https://github.com/ydb-platform/ydb/pull/8485) ([niksaveliev](https://github.com/niksaveliev)).
* Fix analytics workflow ```if: ${{ (github.event.schedule || '') == '' || (github.run_number % 2) == 1 }}``` dont works propertly, so i deside to delete this conditions. [#8524](https://github.com/ydb-platform/ydb/pull/8524) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category <!-- remove all except one -->. [#8530](https://github.com/ydb-platform/ydb/pull/8530) ([Roman Udovichenko](https://github.com/rvu1024)).
* ... [#8536](https://github.com/ydb-platform/ydb/pull/8536) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* The problem is stderr in prev retries are broken and linked with newer reruns. ### Changelog category <!-- remove all except one -->. [#8656](https://github.com/ydb-platform/ydb/pull/8656) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* ### Changelog category <!-- remove all except one -->. [#8709](https://github.com/ydb-platform/ydb/pull/8709) ([Roman Udovichenko](https://github.com/rvu1024)).
* ... [#8724](https://github.com/ydb-platform/ydb/pull/8724) ([Andrey Molotkov](https://github.com/molotkov-and)).
* ### Changelog category. [#8753](https://github.com/ydb-platform/ydb/pull/8753) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Report yellow and orange disk space issues only as yellow group issues. [#8767](https://github.com/ydb-platform/ydb/pull/8767) ([vporyadke](https://github.com/vporyadke)).
* Mute ydb/core/kqp/ut/olap/KqpOlap.ManyColumnShards. [#8782](https://github.com/ydb-platform/ydb/pull/8782) ([Kirill Rysin](https://github.com/naspirato)).
* Mute ydb/public/sdk/cpp/client/ydb_topic/ut/TxUsage.WriteToTopic_Invalid_Session. [#8810](https://github.com/ydb-platform/ydb/pull/8810) ([Kirill Rysin](https://github.com/naspirato)).
* Two bugs were found - shift in occupancy borders calculation and error in Occupancy calculation for colors (HardLimit was treated as occupancy, but it is free space). [#8829](https://github.com/ydb-platform/ydb/pull/8829) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Mute ydb/library/actors/interconnect/ut_huge_cluster/HugeCluster.AllToAll. [#8850](https://github.com/ydb-platform/ydb/pull/8850) ([Kirill Rysin](https://github.com/naspirato)).
* Test report run command : changed default build type to relwithdebinfo ### Changelog category <!-- remove all except one -->. [#8879](https://github.com/ydb-platform/ydb/pull/8879) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#8880](https://github.com/ydb-platform/ydb/pull/8880) ([kruall](https://github.com/kruall)).
* ### Changelog category <!-- remove all except one -->. [#8896](https://github.com/ydb-platform/ydb/pull/8896) ([Roman Udovichenko](https://github.com/rvu1024)).
* ### Changelog category. [#8944](https://github.com/ydb-platform/ydb/pull/8944) ([niksaveliev](https://github.com/niksaveliev)).
* ... [#8984](https://github.com/ydb-platform/ydb/pull/8984) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#8999](https://github.com/ydb-platform/ydb/pull/8999) ([kruall](https://github.com/kruall)).
* Mute ydb/library/yql/tests/sql/hybrid_file/part1/test.py.test[in-in_noansi_join--Debug]. [#9016](https://github.com/ydb-platform/ydb/pull/9016) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#9021](https://github.com/ydb-platform/ydb/pull/9021) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Mute ydb/tests/postgres_integrations/go-libpq/docker_wrapper_test.py.test_pg_generated[TestXactMultiStmt]. [#9047](https://github.com/ydb-platform/ydb/pull/9047) ([Kirill Rysin](https://github.com/naspirato)).
* Fix mute strings. [#9060](https://github.com/ydb-platform/ydb/pull/9060) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category. [#9136](https://github.com/ydb-platform/ydb/pull/9136) ([niksaveliev](https://github.com/niksaveliev)).
* Owner: [TEAM:@ydb-platform/Topics](https://github.com/orgs/ydb-platform/teams/Topics). [#9150](https://github.com/ydb-platform/ydb/pull/9150) ([Kirill Rysin](https://github.com/naspirato)).
* /ydb/core/tx/columnshard @ivanmorozov333 @ydb-platform/system-infra already owned by [/cs](https://github.com/ydb-platform/ydb/pull/9153/files#diff-11859bd2d959ce7774eaddefab9b598b38086d1c047a440f3c20a5d9a74c1d9bL19). [#9153](https://github.com/ydb-platform/ydb/pull/9153) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#9232](https://github.com/ydb-platform/ydb/pull/9232) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix for [YQ-3042](https://st.yandex-team.ru/YQ-3042) and [YQ-3362 ](https://st.yandex-team.ru/YQ-3362) ### Changelog category <!-- remove all except one -->. [#9371](https://github.com/ydb-platform/ydb/pull/9371) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* ### Changelog category. [#9383](https://github.com/ydb-platform/ydb/pull/9383) ([niksaveliev](https://github.com/niksaveliev)).
* YDB FQ: increase retry duration up to 10 minutes in connector tests. [#9433](https://github.com/ydb-platform/ydb/pull/9433) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Owner: [](https://github.com/orgs/ydb-platform/teams/). [#9438](https://github.com/ydb-platform/ydb/pull/9438) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#9454](https://github.com/ydb-platform/ydb/pull/9454) ([kruall](https://github.com/kruall)).
* Supported --build_type=release-asan for flaky_tests_history.py - optimised query job_name in (...) -> (job_name ="" or ... job_name ="") - window for get "all tests" decreased to 3 days to except deleted and moved tests in analytics - fixed issue with ignoring histrory of current day in flaky_tests_history.py ( it tooks history < today day, not <= today). [#9469](https://github.com/ydb-platform/ydb/pull/9469) ([Kirill Rysin](https://github.com/naspirato)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.9-rc.4. [#9534](https://github.com/ydb-platform/ydb/pull/9534) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ### Changelog category. [#9559](https://github.com/ydb-platform/ydb/pull/9559) ([niksaveliev](https://github.com/niksaveliev)).
* ... [#9586](https://github.com/ydb-platform/ydb/pull/9586) ([azevaykin](https://github.com/azevaykin)).
* ... [#9606](https://github.com/ydb-platform/ydb/pull/9606) ([azevaykin](https://github.com/azevaykin)).
* ... [#9626](https://github.com/ydb-platform/ydb/pull/9626) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ### Changelog category. [#9635](https://github.com/ydb-platform/ydb/pull/9635) ([niksaveliev](https://github.com/niksaveliev)).
* ### Changelog category. [#9713](https://github.com/ydb-platform/ydb/pull/9713) ([niksaveliev](https://github.com/niksaveliev)).
* In the PR comment for the relwithdebinfo, there will now be information about muted and unmuted tests in this PR. It starts only if the muted_ya.txt file was modified in the PR in step [Check for changes in muted_ya](https://github.com/ydb-platform/ydb/pull/9468/files#diff-8e41dac1844247f16cc005544180c6c5e95e58cef2c60afe65a62a2058dc85daR536). [#9714](https://github.com/ydb-platform/ydb/pull/9714) ([Kirill Rysin](https://github.com/naspirato)).
* Do not report group as dead based on pdisk status (when vdisk statuses are ok). [#9744](https://github.com/ydb-platform/ydb/pull/9744) ([vporyadke](https://github.com/vporyadke)).
* ... [#9764](https://github.com/ydb-platform/ydb/pull/9764) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ### Changelog category. [#9771](https://github.com/ydb-platform/ydb/pull/9771) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Owner: [TEAM:@ydb-platform/postgres-compatibility](https://github.com/orgs/ydb-platform/teams/postgres-compatibility). [#9789](https://github.com/ydb-platform/ydb/pull/9789) ([Kirill Rysin](https://github.com/naspirato)).
* Add chmod u+x to get_diff_lines_of_file.py. [#9792](https://github.com/ydb-platform/ydb/pull/9792) ([Kirill Rysin](https://github.com/naspirato)).
* Added chmod u+x .github/scripts/tests/get_muted_tests.py ### changelog category <!-- remove all except one -->. [#9802](https://github.com/ydb-platform/ydb/pull/9802) ([Kirill Rysin](https://github.com/naspirato)).
* Added links to changelog 24-1 to the https://ydb.tech/docs/ru/downloads/. [#10002](https://github.com/ydb-platform/ydb/pull/10002) ([katidisergei](https://github.com/katidisergei)).
* Mute:<!--mute_list_start--> ydb/core/kqp/ut/olap/KqpOlapAggregations.Aggregation_SumL_GroupL_OrderL ydb/core/kqp/ut/olap/KqpOlapIndexes.IndexesActualization ydb/core/kqp/ut/olap/KqpOlapIndexes.IndexesInBS ydb/core/kqp/ut/olap/KqpOlapIndexes.IndexesInLocalMetadata<!--mute_list_end-->. [#10003](https://github.com/ydb-platform/ydb/pull/10003) ([Kirill Rysin](https://github.com/naspirato)).
* Mute:<!--mute_list_start--> ydb/library/yql/providers/generic/connector/tests/join/test.py.test_join[join_ch_ch-dqrun]<!--mute_list_end-->. [#10010](https://github.com/ydb-platform/ydb/pull/10010) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#10021](https://github.com/ydb-platform/ydb/pull/10021) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ### Changelog category. [#10029](https://github.com/ydb-platform/ydb/pull/10029) ([niksaveliev](https://github.com/niksaveliev)).
* Fix a bug that could lead to nodes being down when reusing node ids. [#10051](https://github.com/ydb-platform/ydb/pull/10051) ([vporyadke](https://github.com/vporyadke)).
* ... [#10077](https://github.com/ydb-platform/ydb/pull/10077) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Mute ydb/core/kqp/ut/query/KqpLimits.ComputeActorMemoryAllocationFailureQueryService Ticket: [#10109](https://github.com/ydb-platform/ydb/issues/10109). [#10110](https://github.com/ydb-platform/ydb/pull/10110) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Computing days in row in state for test analytics - it gives us posibility to find as example - "Muted Stable >N days" - "Flaky 1 day". [#10163](https://github.com/ydb-platform/ydb/pull/10163) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#10193](https://github.com/ydb-platform/ydb/pull/10193) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ... [#10201](https://github.com/ydb-platform/ydb/pull/10201) ([Ivan Blinkov](https://github.com/blinkov)).
* YDB FQ: actualize predicated pushdown docs. [#10242](https://github.com/ydb-platform/ydb/pull/10242) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ### Changelog category <!-- remove all except one -->. [#10259](https://github.com/ydb-platform/ydb/pull/10259) ([Roman Udovichenko](https://github.com/rvu1024)).
* ### Changelog category. [#10272](https://github.com/ydb-platform/ydb/pull/10272) ([niksaveliev](https://github.com/niksaveliev)).
* ### Changelog category <!-- remove all except one -->. [#10279](https://github.com/ydb-platform/ydb/pull/10279) ([Roman Udovichenko](https://github.com/rvu1024)).
* ### Changelog category <!-- remove all except one -->. [#10342](https://github.com/ydb-platform/ydb/pull/10342) ([Roman Udovichenko](https://github.com/rvu1024)).
* ... [#10345](https://github.com/ydb-platform/ydb/pull/10345) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ... [#10366](https://github.com/ydb-platform/ydb/pull/10366) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* Incorrect mute string `ydb/core/mind/hive/ut/thivetest.drainwithhiverestart` correct `ydb/core/mind/hive/ut thivetest.drainwithhiverestart`. [#10515](https://github.com/ydb-platform/ydb/pull/10515) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#10550](https://github.com/ydb-platform/ydb/pull/10550) ([kruall](https://github.com/kruall)).
* ... [#10561](https://github.com/ydb-platform/ydb/pull/10561) ([azevaykin](https://github.com/azevaykin)).
* ... [#10565](https://github.com/ydb-platform/ydb/pull/10565) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ### Changelog category <!-- remove all except one -->. [#10598](https://github.com/ydb-platform/ydb/pull/10598) ([Roman Udovichenko](https://github.com/rvu1024)).
* ... [#10613](https://github.com/ydb-platform/ydb/pull/10613) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.11-rc.5. [#10654](https://github.com/ydb-platform/ydb/pull/10654) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* ### Changelog category. [#10678](https://github.com/ydb-platform/ydb/pull/10678) ([niksaveliev](https://github.com/niksaveliev)).
* Mute:<!--mute_list_start--> ydb/core/blobstorage/ut_blobstorage/ut_osiris/Osiris.block42 ydb/core/blobstorage/ut_blobstorage/ut_osiris/Osiris.mirror3dc ydb/core/blobstorage/ut_blobstorage/ut_osiris/Osiris.mirror3of4<!--mute_list_end-->. [#10687](https://github.com/ydb-platform/ydb/pull/10687) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category. [#10701](https://github.com/ydb-platform/ydb/pull/10701) ([niksaveliev](https://github.com/niksaveliev)).
* ... [#10706](https://github.com/ydb-platform/ydb/pull/10706) ([azevaykin](https://github.com/azevaykin)).
* Unmuted tests : stable 605 and deleted 11. [#10760](https://github.com/ydb-platform/ydb/pull/10760) ([Kirill Rysin](https://github.com/naspirato)).
* Improvement. [#10768](https://github.com/ydb-platform/ydb/pull/10768) ([Ivan](https://github.com/abyss7)).
* ... [#10779](https://github.com/ydb-platform/ydb/pull/10779) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Not for changelog (changelog entry is not required). [#10798](https://github.com/ydb-platform/ydb/pull/10798) ([Roman Udovichenko](https://github.com/rvu1024)).
* **Unmuted tests : stable 9 and deleted 0** ``` ydb/core/kqp/ut/olap KqpOlapAggregations.Aggregation_SumL_GroupL_OrderL # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 23 ydb/core/kqp/ut/olap KqpOlapIndexes.IndexesActualization # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 15 ydb/core/kqp/ut/olap KqpOlapIndexes.IndexesInBS # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 15 ydb/core/kqp/ut/olap KqpOlapIndexes.IndexesInLocalMetadata # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 16 ydb/core/kqp/ut/olap KqpOlapSysView.StatsSysViewBytesDictStatActualization # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 31 ydb/core/kqp/ut/pg KqpPg.CreateIndex # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 32 ydb/core/kqp/ut/query KqpLimits.QueryReplySize # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 32 ydb/core/kqp/ut/query KqpQuery.QueryTimeout # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 32 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_read_raw_format_with_row_dispatcher # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 14 ```. [#10830](https://github.com/ydb-platform/ydb/pull/10830) ([Kirill Rysin](https://github.com/naspirato)).
* Unmuted tests : stable 3 and deleted 2 ``` ydb/public/sdk/cpp/client/ydb_topic/ut TxUsage.WriteToTopic_Invalid_Session # owner TEAM:@ydb-platform/appteam success_rate 0%, state no_runs days in state 28 ydb/services/keyvalue/ut KeyValueGRPCService.SimpleWriteListRange # owner Unknown success_rate 100%, state Muted Stable days in state 14 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_read_raw_format_without_row_dispatcher # owner TEAM:@ydb-platform/fq success_rate 0%, state no_runs days in state 14 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_scheme_error # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 14 ydb/tests/postgres_integrations/go-libpq docker_wrapper_test.py.test_pg_generated[TestEncodeAndParseTs] # owner TEAM:@ydb-platform/postgres-compatibility success_rate 100%, state Muted Stable days in state 14 ```. [#10915](https://github.com/ydb-platform/ydb/pull/10915) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#10930](https://github.com/ydb-platform/ydb/pull/10930) ([azevaykin](https://github.com/azevaykin)).
* Created issue 'Mute ydb/tests/fq/yds/test_row_dispatcher.py.TestPqRowDispatcher.test_read_raw_format_with_row_dispatcher' for TEAM:@ydb-platform/fq, url [#10956](https://github.com/ydb-platform/ydb/issues/10956). [#10957](https://github.com/ydb-platform/ydb/pull/10957) ([Kirill Rysin](https://github.com/naspirato)).
* Default was changed in [#10964](https://github.com/ydb-platform/ydb/issues/10964) by mistake. [#10968](https://github.com/ydb-platform/ydb/pull/10968) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* **Unmuted tests : stable 3 and deleted 0** ``` ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_filter_missing_fields # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 15 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_simple_optional # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 14 ydb/tests/functional/audit test_auditlog.py.test_dml_requests_logged_when_sid_is_unexpected # owner TEAM:@ydb-platform/system-infra success_rate 100%, state Muted Stable days in state 15 ```. [#10970](https://github.com/ydb-platform/ydb/pull/10970) ([Kirill Rysin](https://github.com/naspirato)).
* Temporary fix for [#10892](https://github.com/ydb-platform/ydb/issues/10892). [#10974](https://github.com/ydb-platform/ydb/pull/10974) ([azevaykin](https://github.com/azevaykin)).
* Https://github.com/ydb-platform/ydb/issues/11020 return /healthcheck handler for backward compatibility. [#11019](https://github.com/ydb-platform/ydb/pull/11019) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* Changing order of steps to avoid enterrupting all workflow on errors in not mandatory and less used data views. [#11097](https://github.com/ydb-platform/ydb/pull/11097) ([Kirill Rysin](https://github.com/naspirato)).
* **Unmuted tests : stable 9 and deleted 0**. [#11099](https://github.com/ydb-platform/ydb/pull/11099) ([Kirill Rysin](https://github.com/naspirato)).
* **Flaky tests : 7**. [#11101](https://github.com/ydb-platform/ydb/pull/11101) ([Kirill Rysin](https://github.com/naspirato)).
* **setup** 1) ```pip install PyGithub``` 2) request git token ``` # Github api (personal access token (classic)) token shoud have permitions to # repo # - repo:status # - repo_deployment # - public_repo # admin:org # project ``` 3) save it to env `export GITHUB_TOKEN=<token> 4) save to env `export CI_YDB_SERVICE_ACCOUNT_KEY_FILE_CREDENTIALS=<iam_cloud_file>. [#11124](https://github.com/ydb-platform/ydb/pull/11124) ([Kirill Rysin](https://github.com/naspirato)).
* Timeout is too short for asan. [#11143](https://github.com/ydb-platform/ydb/pull/11143) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Stop using `kikimr_cluster_factory` - remove `load_yaml` because it useless - remove `param_constants.kikimr_stderr_to_console` because it is unused. [#11211](https://github.com/ydb-platform/ydb/pull/11211) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Not for changelog (changelog entry is not required). [#11214](https://github.com/ydb-platform/ydb/pull/11214) ([Roman Udovichenko](https://github.com/rvu1024)).
* Remove some yatest dependencies - remove load_udfs arg (use udfs_path!) - remove some unused - rename output_path -> working_dir. [#11220](https://github.com/ydb-platform/ydb/pull/11220) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Move various test clients to separate target. [#11222](https://github.com/ydb-platform/ydb/pull/11222) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* ### Changelog category. [#11244](https://github.com/ydb-platform/ydb/pull/11244) ([niksaveliev](https://github.com/niksaveliev)).
* ... [#11340](https://github.com/ydb-platform/ydb/pull/11340) ([Ivan Blinkov](https://github.com/blinkov)).
* ### Changelog category. [#11407](https://github.com/ydb-platform/ydb/pull/11407) ([niksaveliev](https://github.com/niksaveliev)).
* ... [#11426](https://github.com/ydb-platform/ydb/pull/11426) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* ... [#11434](https://github.com/ydb-platform/ydb/pull/11434) ([Oleg Doronin](https://github.com/dorooleg)).
* It was muted some time ago. [#11533](https://github.com/ydb-platform/ydb/pull/11533) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* **Unmuted tests : stable 17 and deleted 0** ydb/core/blobstorage/pdisk/ut TPDiskTest.TestMultipleLogSpliceNonceJump # owner TEAM:@ydb-platform/storage success_rate 100%, state Muted Stable days in state 21 ydb/core/kqp/ut/olap KqpOlapStatistics.StatsUsageWithTTL # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 21 ydb/core/kqp/ut/sysview KqpSystemView.PartitionStatsFollower # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 18 ydb/library/yql/providers/generic/connector/tests/datasource/ms_sql_server test.py.test_select_positive[count_rows-dqrun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 22 ydb/library/yql/providers/generic/connector/tests/datasource/mysql test.py.test_select_positive[constant-dqrun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/library/yql/providers/generic/connector/tests/datasource/mysql test.py.test_select_positive[count_rows-dqrun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/library/yql/providers/generic/connector/tests/datasource/mysql test.py.test_select_positive[count_rows-kqprun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/library/yql/providers/generic/connector/tests/datasource/mysql test.py.test_select_positive[pushdown0-dqrun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/library/yql/providers/generic/connector/tests/datasource/mysql test.py.test_select_positive[pushdown0-kqprun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/library/yql/providers/generic/connector/tests/datasource/ydb test.py.test_select_positive[pushdown-kqprun] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/tests/fq/yds test_kill_pq_bill.py.TestKillPqBill.test_do_not_bill_pq[v1-mvp_external_ydb_endpoint0] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 25 ydb/tests/fq/yds test_pq_read_write.py.TestPqReadWrite.test_pq_read_write[v1-with_checkpoints-mvp_external_ydb_endpoint0] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 26 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_read_raw_format_with_row_dispatcher # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 21 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_scheme_error # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 20 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_stop_start # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 21 ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test_stop_start_with_filter # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 20 ydb/tests/fq/yds test_yq_streaming.py.TestYqStreaming.test_match_recognize_sink[v1] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 19. [#11751](https://github.com/ydb-platform/ydb/pull/11751) ([Kirill Rysin](https://github.com/naspirato)).
* Created issue 'Mute ydb/core/blobstorage/ut_blobstorage/ut_huge/HugeBlobOnlineSizeChange.Compaction' for TEAM:@ydb-platform/storage, url [#11754](https://github.com/ydb-platform/ydb/issues/11754) Created issue 'Mute ydb/core/kqp/ut/olap/KqpOlapTiering.Eviction' for TEAM:@ydb-platform/qp, url [#11755](https://github.com/ydb-platform/ydb/issues/11755). [#11753](https://github.com/ydb-platform/ydb/pull/11753) ([Kirill Rysin](https://github.com/naspirato)).
* DSTool can operate over both gRPC and HTTP protocols. Previously, DSTool would dump all endpoints into one pool and try to randomly find the appropriate endpoint for the required protocol. Now, all endpoints are divided into two types: for HTTP requests and for gRPC requests. You can specify endpoints separately for HTTP and gRPC requests. If an endpoint for the required protocol is not specified, a message will appear for the user about its absence before implicitly converting the available endpoints. [#11756](https://github.com/ydb-platform/ydb/pull/11756) ([kruall](https://github.com/kruall)).
* Unmuted tests : stable 2 and deleted 0. [#11856](https://github.com/ydb-platform/ydb/pull/11856) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#11882](https://github.com/ydb-platform/ydb/pull/11882) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ... [#11994](https://github.com/ydb-platform/ydb/pull/11994) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* **Unmuted tests : stable 2 and deleted 0**. [#11995](https://github.com/ydb-platform/ydb/pull/11995) ([Kirill Rysin](https://github.com/naspirato)).
* 1 step for [#11938](https://github.com/ydb-platform/ydb/issues/11938). [#12054](https://github.com/ydb-platform/ydb/pull/12054) ([Kirill Rysin](https://github.com/naspirato)).
* For [#11938](https://github.com/ydb-platform/ydb/issues/11938). [#12062](https://github.com/ydb-platform/ydb/pull/12062) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category <!-- remove all except one --> * Not for changelog (changelog entry is not required). [#12157](https://github.com/ydb-platform/ydb/pull/12157) ([Mikhail Surin](https://github.com/ssmike)).
* Add ability to keep rows order ### Changelog category <!-- remove all except one -->. [#12233](https://github.com/ydb-platform/ydb/pull/12233) ([Mikhail Surin](https://github.com/ssmike)).
* ### Changelog category <!-- remove all except one --> * Experimental feature. [#12272](https://github.com/ydb-platform/ydb/pull/12272) ([zverevgeny](https://github.com/zverevgeny)).
* Improvement. [#12276](https://github.com/ydb-platform/ydb/pull/12276) ([Ivan](https://github.com/abyss7)).
* Without flag -ddebuginfo_lines_only build is too large [#11938](https://github.com/ydb-platform/ydb/issues/11938). [#12281](https://github.com/ydb-platform/ydb/pull/12281) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#12334](https://github.com/ydb-platform/ydb/pull/12334) ([kungurtsev](https://github.com/kunga)).
* Added - custom timeout - custom threads count. [#12369](https://github.com/ydb-platform/ydb/pull/12369) ([Kirill Rysin](https://github.com/naspirato)).
* Set max timeout 480. [#12385](https://github.com/ydb-platform/ydb/pull/12385) ([Kirill Rysin](https://github.com/naspirato)).
* YDB FQ: fix list of datasources supported by fq-connector-go. [#12396](https://github.com/ydb-platform/ydb/pull/12396) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* **Unmuted tests : stable 1 and deleted 1**. [#12419](https://github.com/ydb-platform/ydb/pull/12419) ([Kirill Rysin](https://github.com/naspirato)).
* Issue created previously [#9094](https://github.com/ydb-platform/ydb/issues/9094) flaky tests : 2. [#12421](https://github.com/ydb-platform/ydb/pull/12421) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#12428](https://github.com/ydb-platform/ydb/pull/12428) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#12442](https://github.com/ydb-platform/ydb/pull/12442) ([Ivan Blinkov](https://github.com/blinkov)).
* **Unmuted tests : stable 4 and deleted 0**. [#12504](https://github.com/ydb-platform/ydb/pull/12504) ([Kirill Rysin](https://github.com/naspirato)).
* Commits from rightlib * commits from [#12527](https://github.com/ydb-platform/ydb/issues/12527). [#12554](https://github.com/ydb-platform/ydb/pull/12554) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Added a restore of changefeeds when calling the tools restore command in the ydb cli. [#12598](https://github.com/ydb-platform/ydb/pull/12598) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* **Unmuted stable 5**. [#12670](https://github.com/ydb-platform/ydb/pull/12670) ([Kirill Rysin](https://github.com/naspirato)).
* We are going to use newly introduced `IsSystem` flag for filestore shards in order to have separate accounting for them. Shards should be considered as system entities and should not be accounted as regular 'user-created' filestores. [#12693](https://github.com/ydb-platform/ydb/pull/12693) ([Mikhail Montsev](https://github.com/SvartMetal)).
* Tsan run failed by timeout - timeout increased - large tests turned off - thread count decreased 20->10. [#12742](https://github.com/ydb-platform/ydb/pull/12742) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category <!-- remove all except one -->. [#12760](https://github.com/ydb-platform/ydb/pull/12760) ([Mikhail Surin](https://github.com/ssmike)).
* **Before**: - same comand for all build presets - ```./ya make -ttt --build relwithdebinfo -k -F 'TBlobStorageProxyTest::TestBlock' ydb/core/blobstorage/dsproxy/ut_fat```. [#12798](https://github.com/ydb-platform/ydb/pull/12798) ([Kirill Rysin](https://github.com/naspirato)).
* Now actor can be notified about mailbox preemption. It will be useful for batching logic. ### Changelog category <!-- remove all except one -->. [#12814](https://github.com/ydb-platform/ydb/pull/12814) ([kruall](https://github.com/kruall)).
* ... [#12819](https://github.com/ydb-platform/ydb/pull/12819) ([Kirill Rysin](https://github.com/naspirato)).
* If you add label - **run-msan-tests** : all pr-checks now will run tests for builds **relwithdebinfo, asan and msan** - **run-tsan-tests** : all pr-checks now will run tests for builds **relwithdebinfo, asan and tsan** - **run-sanitize-tests** : all pr-checks now will run tests for builds **relwithdebinfo, asan, tsan and msan**. [#12830](https://github.com/ydb-platform/ydb/pull/12830) ([Kirill Rysin](https://github.com/naspirato)).
* In asan, msan and tsan test runs faced with issue. [#12838](https://github.com/ydb-platform/ydb/pull/12838) ([Kirill Rysin](https://github.com/naspirato)).
* Simple_queue workload as test. [#12895](https://github.com/ydb-platform/ydb/pull/12895) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* ... [#12904](https://github.com/ydb-platform/ydb/pull/12904) ([Kirill Rysin](https://github.com/naspirato)).
* **Muted stable : 3**. [#12941](https://github.com/ydb-platform/ydb/pull/12941) ([Kirill Rysin](https://github.com/naspirato)).
* Fix collecting deleted tests in muted_ya (tests without runs). [#12970](https://github.com/ydb-platform/ydb/pull/12970) ([Kirill Rysin](https://github.com/naspirato)).
* Resolve wildcards for better ux - fix name of muted test , incorrect ```ydb/library/yql/providers/generic/connector/tests/datasource/ydb test.py.test_select_positive[column_selection_col2_col1_http-dqrun]``` -> ```ydb/library/yql/providers/generic/connector/tests/datasource/ydb test.py.test_select_positive[column_selection_col2_col1-kqprun]```. [#12974](https://github.com/ydb-platform/ydb/pull/12974) ([Kirill Rysin](https://github.com/naspirato)).
* Now asan tests should try to run 3 times (default). [#12984](https://github.com/ydb-platform/ydb/pull/12984) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category <!-- remove all except one --> * Bugfix. [#13015](https://github.com/ydb-platform/ydb/pull/13015) ([Mikhail Surin](https://github.com/ssmike)).
* New wf for high frequenct actions (every 5 min). [#13200](https://github.com/ydb-platform/ydb/pull/13200) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#13212](https://github.com/ydb-platform/ydb/pull/13212) ([Nikolay Shestakov](https://github.com/nshestakov)).
* **Unmuted tests : stable 12** ``` ydb/core/blobstorage/dsproxy/ut TDSProxyPutTest.TestBlock42PutStatusErrorWith_1_2_VdiskErrors # owner TEAM:@ydb-platform/storage success_rate 100%, state Muted Stable days in state 15 ydb/core/mind/hive/ut THiveTest.TestHiveBalancerNodeRestarts # owner TEAM:@ydb-platform/system-infra success_rate 100%, state Muted Stable days in state 23 ydb/core/tablet_flat/ut TSharedPageCache.ClockPro # owner TEAM:@ydb-platform/datashard success_rate 100%, state Muted Stable days in state 14 ydb/core/tablet_flat/ut TSharedPageCache.Compaction_BTreeIndex # owner TEAM:@ydb-platform/datashard success_rate 100%, state Muted Stable days in state 20 ydb/core/tx/schemeshard/ut_split_merge TSchemeShardSplitBySizeTest.Merge1KShards # owner TEAM:@ydb-platform/system-infra success_rate 100%, state Muted Stable days in state 23 ydb/public/sdk/cpp/client/ydb_topic/ut TxUsage.Sinks_Oltp_WriteToTopic_1 # owner TEAM:@ydb-platform/appteam success_rate 100%, state Muted Stable days in state 15 ydb/public/sdk/cpp/client/ydb_topic/ut TxUsage.Sinks_Oltp_WriteToTopic_2 # owner TEAM:@ydb-platform/appteam success_rate 100%, state Muted Stable days in state 15 ydb/public/sdk/cpp/client/ydb_topic/ut TxUsage.Sinks_Oltp_WriteToTopic_3 # owner TEAM:@ydb-platform/appteam success_rate 100%, state Muted Stable days in state 15 ydb/public/sdk/cpp/client/ydb_topic/ut TxUsage.Sinks_Oltp_WriteToTopic_4 # owner TEAM:@ydb-platform/appteam success_rate 100%, state Muted Stable days in state 15 ydb/public/sdk/cpp/client/ydb_topic/ut TxUsage.Sinks_Oltp_WriteToTopics_3 # owner TEAM:@ydb-platform/appteam success_rate 100%, state Muted Stable days in state 15 ydb/tests/fq/mem_alloc test_alloc_default.py.TestAlloc.test_hard_limit[kikimr0] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 23 ydb/tests/fq/mem_alloc test_result_limits.py.TestResultLimits.test_quotas[kikimr0] # owner TEAM:@ydb-platform/fq success_rate 100%, state Muted Stable days in state 15 ```. [#13262](https://github.com/ydb-platform/ydb/pull/13262) ([Kirill Rysin](https://github.com/naspirato)).
* **Unmuted tests : stable 3 and deleted 0** ``` ydb/core/blobstorage/dsproxy/ut TBlobStorageProxySequenceTest.TestBlock42PutWithChangingSlowDisk # owner TEAM:@ydb-platform/storage success_rate 100%, state Muted Stable days in state 15 ydb/core/kqp/ut/olap KqpOlap.ManyColumnShardsWithRestarts # owner TEAM:@ydb-platform/qp success_rate 100%, state Muted Stable days in state 15 ydb/tests/functional/tenants test_dynamic_tenants.py.test_create_and_drop_tenants[enable_alter_database_create_hive_first--true] # owner TEAM:@ydb-platform/system-infra success_rate 100%, state Muted Stable days in state 16 ```. [#13336](https://github.com/ydb-platform/ydb/pull/13336) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category <!-- remove all except one -->. [#13398](https://github.com/ydb-platform/ydb/pull/13398) ([azevaykin](https://github.com/azevaykin)).
* ### Changelog category <!-- remove all except one -->. [#13428](https://github.com/ydb-platform/ydb/pull/13428) ([azevaykin](https://github.com/azevaykin)).
* ... [#13601](https://github.com/ydb-platform/ydb/pull/13601) ([Vadim Averin](https://github.com/avevad)).
* **UnMuted stable : 1** ``` ydb/core/tablet_flat/ut TSharedPageCache.S3FIFO # owner TEAM:@ydb-platform/datashard success_rate 100%, state Muted Stable days in state 14 ``` **Flaky tests : 8** ``` ydb/tests/functional/compatibility test_compatibility.py.TestCompatibility.test_simple # owner Unknown success_rate 0%, state Flaky, days in state 4, pass_count 0, fail count 4 ydb/tests/functional/compatibility test_followers.py.TestFollowersCompatibility.test_followers_compatability # owner Unknown success_rate 0%, state Flaky, days in state 4, pass_count 0, fail count 4 ydb/tests/sql/large test_insert_delete_duplicate_records.py.TestConcurrentInsertDeleteAndRead.test_upsert_delete_and_read_tpch_tx # owner USERNAME:@slonn success_rate 0%, state Flaky, days in state 4, pass_count 0, fail count 4 ydb/tests/sql/large test_tiering.py.TestYdbS3TTL.test_basic_tiering_operations # owner USERNAME:@slonn success_rate 0%, state Flaky, days in state 1, pass_count 0, fail count 3 ydb/tests/sql/large test_workload_manager.py.TestWorkloadManager.test_pool_classifier_without_init_timeout # owner USERNAME:@slonn success_rate 0%, state Flaky, days in state 1, pass_count 0, fail count 3 ydb/tests/sql/large test_workload_manager.py.TestWorkloadManager.test_resource_pool_queue_resource_weight[1-False] # owner USERNAME:@slonn success_rate 0%, state Flaky, days in state 1, pass_count 0, fail count 3 ydb/tests/sql/large test_workload_manager.py.TestWorkloadManager.test_resource_pool_queue_resource_weight[1-True] # owner USERNAME:@slonn success_rate 0%, state Flaky, days in state 1, pass_count 0, fail count 3 ydb/tests/sql/large test_workload_manager.py.TestWorkloadManager.test_resource_pool_queue_size_limit # owner USERNAME:@slonn success_rate 0%, state Flaky, days in state 1, pass_count 0, fail count 3 ``` Created issue 'Mute ydb/tests/sql/large 6 tests' for USERNAME:@slonn, url [#13617](https://github.com/ydb-platform/ydb/issues/13617) Created issue 'Mute ydb/tests/functional/compatibility 2 tests' for Unknown, url [#13618](https://github.com/ydb-platform/ydb/issues/13618). [#13614](https://github.com/ydb-platform/ydb/pull/13614) ([Kirill Rysin](https://github.com/naspirato)).
* Changes: - 80% success rate trashhold - fixed issue with empty owner - filtering of closed mute issues - unused import deleted. [#13624](https://github.com/ydb-platform/ydb/pull/13624) ([Kirill Rysin](https://github.com/naspirato)).
* Fixed nemesis start - added start_all_workload. [#13625](https://github.com/ydb-platform/ydb/pull/13625) ([Kirill Rysin](https://github.com/naspirato)).
* ### Changelog category <!-- remove all except one -->. [#13677](https://github.com/ydb-platform/ydb/pull/13677) ([Daniil Demin](https://github.com/jepett0)).
* Fixes based on comments in https://github.com/ydb-platform/ydb/pull/13452/files. [#13699](https://github.com/ydb-platform/ydb/pull/13699) ([Kirill Rysin](https://github.com/naspirato)).
* Added new folder for columnshards in testowner. [#13715](https://github.com/ydb-platform/ydb/pull/13715) ([Kirill Rysin](https://github.com/naspirato)).
* **Muted stable : 2**. [#13769](https://github.com/ydb-platform/ydb/pull/13769) ([Kirill Rysin](https://github.com/naspirato)).
* **Mute**. [#13796](https://github.com/ydb-platform/ydb/pull/13796) ([Kirill Rysin](https://github.com/naspirato)).
* Added workload log option. [#13804](https://github.com/ydb-platform/ydb/pull/13804) ([Kirill Rysin](https://github.com/naspirato)).
* ... [#13819](https://github.com/ydb-platform/ydb/pull/13819) ([Kirill Rysin](https://github.com/naspirato)).

#### NO CL ENTRY

* NO CL ENTRY:  'Configurable PDisk chunk color limits'. [#2409](https://github.com/ydb-platform/ydb/pull/2409) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Update NodeJS example with Query Service'. [#3322](https://github.com/ydb-platform/ydb/pull/3322) ([Alexey Zorkaltsev](https://github.com/Zork33)).
* NO CL ENTRY:  'Improve error messages for Knn module'. [#5282](https://github.com/ydb-platform/ydb/pull/5282) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Implement external blob precharge in read iterator'. [#5758](https://github.com/ydb-platform/ydb/pull/5758) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Refactor balancing + add batch requests'. [#5904](https://github.com/ydb-platform/ydb/pull/5904) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'logging(ydb): add data integrity logs to grpc and session actor'. [#6049](https://github.com/ydb-platform/ydb/pull/6049) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Propagate wide-block through channels'. [#6096](https://github.com/ydb-platform/ydb/pull/6096) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Fix memory leak issue with AWS API usage'. [#6160](https://github.com/ydb-platform/ydb/pull/6160) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Add flat vector index example to C++ SDK'. [#6262](https://github.com/ydb-platform/ydb/pull/6262) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Use the whole TTableDescription to describe an indexImplTable in TIndexDescription'. [#6280](https://github.com/ydb-platform/ydb/pull/6280) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Data integrity trails in DataShard'. [#6288](https://github.com/ydb-platform/ydb/pull/6288) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Support drop default and set default for key column'. [#6289](https://github.com/ydb-platform/ydb/pull/6289) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Use decimals in TPC-H'. [#6311](https://github.com/ydb-platform/ydb/pull/6311) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Prepare flat_scheme_op.proto for multiple indexImplTables. '. [#6313](https://github.com/ydb-platform/ydb/pull/6313) ([azevaykin](https://github.com/azevaykin)).
* NO CL ENTRY:  'fix signal value'. [#6314](https://github.com/ydb-platform/ydb/pull/6314) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix test of exotic XOR.'. [#6317](https://github.com/ydb-platform/ydb/pull/6317) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'serialize special keys in separated thread'. [#6324](https://github.com/ydb-platform/ydb/pull/6324) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Unmute fixed test'. [#6329](https://github.com/ydb-platform/ydb/pull/6329) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Fix pushdown JSON_EXISTS on runtime version 4.'. [#6332](https://github.com/ydb-platform/ydb/pull/6332) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'reduce logging'. [#6343](https://github.com/ydb-platform/ydb/pull/6343) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Load tests: wait ydb alive, save query text'. [#6352](https://github.com/ydb-platform/ydb/pull/6352) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  '[LDAP] Fetch nested groups for user'. [#6353](https://github.com/ydb-platform/ydb/pull/6353) ([Andrey Molotkov](https://github.com/molotkov-and)).
* NO CL ENTRY:  'BuildIndex small refactoring'. [#6354](https://github.com/ydb-platform/ydb/pull/6354) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'prevent overlimit for ui32 in genstep'. [#6365](https://github.com/ydb-platform/ydb/pull/6365) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix huge blobs volume for start mode withno barrier moving'. [#6366](https://github.com/ydb-platform/ydb/pull/6366) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix test in asan (nullptr possible in original data)'. [#6369](https://github.com/ydb-platform/ydb/pull/6369) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'corrections for gc tasks construction'. [#6376](https://github.com/ydb-platform/ydb/pull/6376) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'remove hard freeing from tablet'. [#6377](https://github.com/ydb-platform/ydb/pull/6377) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct insert table cleaning'. [#6379](https://github.com/ydb-platform/ydb/pull/6379) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'small transfer meta processing correction'. [#6386](https://github.com/ydb-platform/ydb/pull/6386) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix resharding tests implementation'. [#6388](https://github.com/ydb-platform/ydb/pull/6388) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'remove portions constructor hard freeing from tablet'. [#6389](https://github.com/ydb-platform/ydb/pull/6389) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YDB FQ: Enabling YDB test for missing table'. [#6395](https://github.com/ydb-platform/ydb/pull/6395) ([Grigorii Papashvili](https://github.com/lifthelm)).
* NO CL ENTRY:  'New SQS Json API: CreateQueue endpoint'. [#6404](https://github.com/ydb-platform/ydb/pull/6404) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'Fix tests for purecalc Arrow IO spec'. [#6408](https://github.com/ydb-platform/ydb/pull/6408) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Fix include file path for win version'. [#6417](https://github.com/ydb-platform/ydb/pull/6417) ([Andrey Molotkov](https://github.com/molotkov-and)).
* NO CL ENTRY:  'reduce logging volume'. [#6418](https://github.com/ydb-platform/ydb/pull/6418) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 240708-1553'. [#6421](https://github.com/ydb-platform/ydb/pull/6421) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Refactoring: DataShard handling indexes'. [#6425](https://github.com/ydb-platform/ydb/pull/6425) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Check ldap domain as suffix of user login'. [#6426](https://github.com/ydb-platform/ydb/pull/6426) ([Andrey Molotkov](https://github.com/molotkov-and)).
* NO CL ENTRY:  'Tpcds test, fix tpcds init'. [#6435](https://github.com/ydb-platform/ydb/pull/6435) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'conveyor logging and remove ownerId - internal processes only'. [#6442](https://github.com/ydb-platform/ydb/pull/6442) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix test_db_counters test'. [#6447](https://github.com/ydb-platform/ydb/pull/6447) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'fix disk writing limiter'. [#6452](https://github.com/ydb-platform/ydb/pull/6452) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'use nullable columns for tpcds'. [#6453](https://github.com/ydb-platform/ydb/pull/6453) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Use 1-thread pool executor for subsession event handlers'. [#6457](https://github.com/ydb-platform/ydb/pull/6457) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  '[KIKIMR-21472] Output the final AST in explain query'. [#6487](https://github.com/ydb-platform/ydb/pull/6487) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Describe work with ldaps scheme and add information about nested groups'. [#6489](https://github.com/ydb-platform/ydb/pull/6489) ([Andrey Molotkov](https://github.com/molotkov-and)).
* NO CL ENTRY:  'EnableSeparationComputeActorsFromRead=true'. [#6496](https://github.com/ydb-platform/ydb/pull/6496) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Extend DisabledOnSchemeShard FF for column tables on dedicated bases'. [#6498](https://github.com/ydb-platform/ydb/pull/6498) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Correct index construction'. [#6500](https://github.com/ydb-platform/ydb/pull/6500) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.9.2)'. [#6503](https://github.com/ydb-platform/ydb/pull/6503) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add end-to-end async replication test.'. [#6522](https://github.com/ydb-platform/ydb/pull/6522) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Move s3_recipe_helper in to common directory to reuse in other tests.'. [#6535](https://github.com/ydb-platform/ydb/pull/6535) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'increase tpcds timeout'. [#6543](https://github.com/ydb-platform/ydb/pull/6543) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Support duplicated column names'. [#6553](https://github.com/ydb-platform/ydb/pull/6553) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'In YT settings, make lookup join settings limits more generous'. [#6557](https://github.com/ydb-platform/ydb/pull/6557) ([Dmitry O](https://github.com/alephonea)).
* NO CL ENTRY:  'Wilson HTML Page + custom headers'. [#6571](https://github.com/ydb-platform/ydb/pull/6571) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'increase timeouts in loadtests, fix error processing'. [#6578](https://github.com/ydb-platform/ydb/pull/6578) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix parsing dt64 from csv in cli'. [#6580](https://github.com/ydb-platform/ydb/pull/6580) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Enable TableDatetime64 by default'. [#6601](https://github.com/ydb-platform/ydb/pull/6601) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'add status processing'. [#6609](https://github.com/ydb-platform/ydb/pull/6609) ([ildar-khisambeev](https://github.com/ildar-khisambeev)).
* NO CL ENTRY:  'Fix DqPhyJoinDict.'. [#6610](https://github.com/ydb-platform/ydb/pull/6610) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Rename knn UDF'. [#6612](https://github.com/ydb-platform/ydb/pull/6612) ([amikish](https://github.com/amikish)).
* NO CL ENTRY:  'Add backup/restore functional test using UUID type'. [#6619](https://github.com/ydb-platform/ydb/pull/6619) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Increase timeout to all loadtest'. [#6631](https://github.com/ydb-platform/ydb/pull/6631) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix splitting to prevent empty batches'. [#6632](https://github.com/ydb-platform/ydb/pull/6632) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix throw flag usage'. [#6633](https://github.com/ydb-platform/ydb/pull/6633) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YDB FQ: Adding Oracle datasource to proto'. [#6639](https://github.com/ydb-platform/ydb/pull/6639) ([Grigorii Papashvili](https://github.com/lifthelm)).
* NO CL ENTRY:  'fix(kqp): return one result row per key from stream join actor for left semi strategy'. [#6642](https://github.com/ydb-platform/ydb/pull/6642) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Pg 16.3'. [#6644](https://github.com/ydb-platform/ydb/pull/6644) ([Vitaly Stoyan](https://github.com/vitstn)).
* NO CL ENTRY:  '[CBO] Fix Selectivity'. [#6645](https://github.com/ydb-platform/ydb/pull/6645) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'fix error parsing'. [#6649](https://github.com/ydb-platform/ydb/pull/6649) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Compact tpc-* queries and don't use pragma.'. [#6650](https://github.com/ydb-platform/ydb/pull/6650) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'use sepecific timeout for generic queues'. [#6653](https://github.com/ydb-platform/ydb/pull/6653) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix resharding tests on race gc with sharing'. [#6654](https://github.com/ydb-platform/ydb/pull/6654) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Support types of sequences'. [#6669](https://github.com/ydb-platform/ydb/pull/6669) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Deterministic requests in clickhouse workload'. [#6678](https://github.com/ydb-platform/ydb/pull/6678) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'add stats test for internal column table from tables store'. [#6684](https://github.com/ydb-platform/ydb/pull/6684) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add reties to send results'. [#6686](https://github.com/ydb-platform/ydb/pull/6686) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Introduce CLI option to purebench to print compiled and optimized AST'. [#6693](https://github.com/ydb-platform/ydb/pull/6693) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Limit requested memory'. [#6698](https://github.com/ydb-platform/ydb/pull/6698) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix clicbench cannon requests and results'. [#6700](https://github.com/ydb-platform/ydb/pull/6700) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Improve cluster liveness check'. [#6709](https://github.com/ydb-platform/ydb/pull/6709) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'In-progress wait time reporting + time series stat fields'. [#6725](https://github.com/ydb-platform/ydb/pull/6725) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'add test for GC usage on insert/delete'. [#6726](https://github.com/ydb-platform/ydb/pull/6726) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fuse FlatMap and ShuffleByKeys.'. [#6727](https://github.com/ydb-platform/ydb/pull/6727) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'rename ExecuteOnProgress -> ProgressOnExecute'. [#6739](https://github.com/ydb-platform/ydb/pull/6739) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.10.3)'. [#6751](https://github.com/ydb-platform/ydb/pull/6751) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'improve scan read for aggregations (use commands in step before group…'. [#6756](https://github.com/ydb-platform/ydb/pull/6756) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'ydb_topic: Fallback to "indirect" write if the server doesn't support direct write'. [#6759](https://github.com/ydb-platform/ydb/pull/6759) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'fix index actualization'. [#6793](https://github.com/ydb-platform/ydb/pull/6793) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Check memory usage before benchmark'. [#6794](https://github.com/ydb-platform/ydb/pull/6794) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix flaky KqpOlapScheme.DropTable'. [#6795](https://github.com/ydb-platform/ydb/pull/6795) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Time series metrics + relative time in stat'. [#6805](https://github.com/ydb-platform/ydb/pull/6805) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'YDB-7262 Add default permille ICB configuration for vdisk garbage compaction threshold'. [#6819](https://github.com/ydb-platform/ydb/pull/6819) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Enable COUNT in view queries'. [#6820](https://github.com/ydb-platform/ydb/pull/6820) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'TwoJoinsWithQueryService test'. [#6825](https://github.com/ydb-platform/ydb/pull/6825) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Add test for tpcds1000, increacse timeout'. [#6835](https://github.com/ydb-platform/ydb/pull/6835) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Refactoring use general container'. [#6836](https://github.com/ydb-platform/ydb/pull/6836) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add SampleK'. [#6853](https://github.com/ydb-platform/ydb/pull/6853) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Fixes for multiple implementation tables in vector index'. [#6854](https://github.com/ydb-platform/ydb/pull/6854) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'fix columns order in returning list'. [#6861](https://github.com/ydb-platform/ydb/pull/6861) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'Library import 240719-0942'. [#6862](https://github.com/ydb-platform/ydb/pull/6862) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Check balance before load tests'. [#6871](https://github.com/ydb-platform/ydb/pull/6871) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Refactoring index in schemeshard'. [#6879](https://github.com/ydb-platform/ydb/pull/6879) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Try to avoid template base to avoid increasing the binary size'. [#6896](https://github.com/ydb-platform/ydb/pull/6896) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Skip default columns on indexation'. [#6899](https://github.com/ydb-platform/ydb/pull/6899) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Pragma ydb.OverridePlanner to tune runtime execution'. [#6904](https://github.com/ydb-platform/ydb/pull/6904) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'delete unused ISSTransactionOperator'. [#6908](https://github.com/ydb-platform/ydb/pull/6908) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'unify indexation (for committed data) and compaction'. [#6909](https://github.com/ydb-platform/ydb/pull/6909) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix Bytes stats - adjust according to number of columns used (S3)'. [#6910](https://github.com/ydb-platform/ydb/pull/6910) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'separate merger logic for make new one'. [#6931](https://github.com/ydb-platform/ydb/pull/6931) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.11.0)'. [#6936](https://github.com/ydb-platform/ydb/pull/6936) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'increase CS read timeout'. [#6963](https://github.com/ydb-platform/ydb/pull/6963) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Fix ToFlow optimizator with multiple usage'. [#6972](https://github.com/ydb-platform/ydb/pull/6972) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Ensure returning is in the same block'. [#6980](https://github.com/ydb-platform/ydb/pull/6980) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'SQL command ANALYZE'. [#6996](https://github.com/ydb-platform/ydb/pull/6996) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Fix merge artifact'. [#6997](https://github.com/ydb-platform/ydb/pull/6997) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Support block IO in purecalc'. [#7016](https://github.com/ydb-platform/ydb/pull/7016) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  '[] Added query action check.'. [#7017](https://github.com/ydb-platform/ydb/pull/7017) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Fix using uninitialized value error.'. [#7029](https://github.com/ydb-platform/ydb/pull/7029) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'ydb_topic write session: lower log level for retryable errors'. [#7038](https://github.com/ydb-platform/ydb/pull/7038) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'fix unused'. [#7046](https://github.com/ydb-platform/ydb/pull/7046) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Timeline - visualization of query state'. [#7053](https://github.com/ydb-platform/ydb/pull/7053) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'implement sparse data accessor'. [#7055](https://github.com/ydb-platform/ydb/pull/7055) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YQL: Fix casting error in optimizers'. [#7065](https://github.com/ydb-platform/ydb/pull/7065) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Support block IO in purebench'. [#7066](https://github.com/ydb-platform/ydb/pull/7066) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Precompute all replicated connections if one already is '. [#7067](https://github.com/ydb-platform/ydb/pull/7067) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'Mute ydb/core/tx/datashard/ut_incremental_backup IncrementalBackup.BackupRestore'. [#7069](https://github.com/ydb-platform/ydb/pull/7069) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'dont create delete flag column in indexation'. [#7082](https://github.com/ydb-platform/ydb/pull/7082) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Remove unused output fields from GraceJoinCore/MapJoinCore.'. [#7095](https://github.com/ydb-platform/ydb/pull/7095) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Always show table with tests'. [#7101](https://github.com/ydb-platform/ydb/pull/7101) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Disable modification operations in CS by default'. [#7129](https://github.com/ydb-platform/ydb/pull/7129) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Drop unused fields from GraceJoinCore inputs.'. [#7134](https://github.com/ydb-platform/ydb/pull/7134) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Fix flaky test'. [#7137](https://github.com/ydb-platform/ydb/pull/7137) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'add missing table stats for column shards'. [#7140](https://github.com/ydb-platform/ydb/pull/7140) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'additional test and addressing fixes'. [#7168](https://github.com/ydb-platform/ydb/pull/7168) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Update translation settings in purecalc'. [#7173](https://github.com/ydb-platform/ydb/pull/7173) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'fix compaction intervals construction'. [#7176](https://github.com/ydb-platform/ydb/pull/7176) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'asymmetric access for sorted key on find position'. [#7177](https://github.com/ydb-platform/ydb/pull/7177) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'tx operations start unification'. [#7178](https://github.com/ydb-platform/ydb/pull/7178) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add X-Trace-Verbosity header for tracing'. [#7183](https://github.com/ydb-platform/ydb/pull/7183) ([Anton Standrik](https://github.com/astandrik)).
* NO CL ENTRY:  'YQL: Add option to get yt annotaions from user attributes'. [#7209](https://github.com/ydb-platform/ydb/pull/7209) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'improve performace for stat requests (sysview)'. [#7211](https://github.com/ydb-platform/ydb/pull/7211) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'integrations and ide'. [#7222](https://github.com/ydb-platform/ydb/pull/7222) ([SloNN](https://github.com/SloNN)).
* NO CL ENTRY:  'speed up tables manager in schemeshard'. [#7229](https://github.com/ydb-platform/ydb/pull/7229) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'speed up merging with correct pointers operation'. [#7230](https://github.com/ydb-platform/ydb/pull/7230) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix segfault in case normalization different versions'. [#7239](https://github.com/ydb-platform/ydb/pull/7239) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'vector index should use reserved name for additional column in posting impl table'. [#7258](https://github.com/ydb-platform/ydb/pull/7258) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Separate build columns actor activity'. [#7260](https://github.com/ydb-platform/ydb/pull/7260) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'fix pk checker'. [#7266](https://github.com/ydb-platform/ydb/pull/7266) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'PushLeftStage fix'. [#7270](https://github.com/ydb-platform/ydb/pull/7270) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Library import 240730-1922'. [#7271](https://github.com/ydb-platform/ydb/pull/7271) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Move new flag to env from config for compatibility with musty arc recipy'. [#7272](https://github.com/ydb-platform/ydb/pull/7272) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'fix splits signal'. [#7273](https://github.com/ydb-platform/ydb/pull/7273) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'fix leak on release internal local tx operation'. [#7280](https://github.com/ydb-platform/ydb/pull/7280) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'signals for tablet initialization'. [#7281](https://github.com/ydb-platform/ydb/pull/7281) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct not null flags usage in tests'. [#7293](https://github.com/ydb-platform/ydb/pull/7293) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Implement LLVM for WideLastCombiner with spilling.'. [#7304](https://github.com/ydb-platform/ydb/pull/7304) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'switch on aggregations pushdown into CS'. [#7305](https://github.com/ydb-platform/ydb/pull/7305) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'add missing monitoring metrics for column shards'. [#7314](https://github.com/ydb-platform/ydb/pull/7314) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Fix accidentally broken test'. [#7321](https://github.com/ydb-platform/ydb/pull/7321) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Add value to config.proto for ICB DefaultHugeGarbagePerMille'. [#7327](https://github.com/ydb-platform/ydb/pull/7327) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'recanonize after [#7067](https://github.com/ydb-platform/ydb/issues/7067)'. [#7328](https://github.com/ydb-platform/ydb/pull/7328) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'fix empty column usage'. [#7334](https://github.com/ydb-platform/ydb/pull/7334) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'modify CODEOWNERS to reflect ui-backend team ownership'. [#7339](https://github.com/ydb-platform/ydb/pull/7339) ([Alexey Efimov](https://github.com/adameat)).
* NO CL ENTRY:  'fix columns normalization for absent'. [#7340](https://github.com/ydb-platform/ydb/pull/7340) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add missing include for mutex'. [#7343](https://github.com/ydb-platform/ydb/pull/7343) ([Dmitry Nechitaev](https://github.com/Nechda)).
* NO CL ENTRY:  'YQL: Restore recapture flag in evaluation'. [#7354](https://github.com/ydb-platform/ydb/pull/7354) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'change memory planner for CS scan'. [#7372](https://github.com/ydb-platform/ydb/pull/7372) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix value importing for pg text'. [#7385](https://github.com/ydb-platform/ydb/pull/7385) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'fix clickbench with CS'. [#7393](https://github.com/ydb-platform/ydb/pull/7393) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'add tx progress counters'. [#7407](https://github.com/ydb-platform/ydb/pull/7407) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Overlimit read memory'. [#7408](https://github.com/ydb-platform/ydb/pull/7408) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add sample k collect for first level of vector index table'. [#7412](https://github.com/ydb-platform/ydb/pull/7412) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Try catch send results'. [#7424](https://github.com/ydb-platform/ydb/pull/7424) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'make local internal CS persistent snapshot pinger'. [#7431](https://github.com/ydb-platform/ydb/pull/7431) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix usage single UDF object from many threads in DQ.'. [#7436](https://github.com/ydb-platform/ydb/pull/7436) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Topic control plane DDL support for query service'. [#7438](https://github.com/ydb-platform/ydb/pull/7438) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'move test TShardReader to a common place'. [#7441](https://github.com/ydb-platform/ydb/pull/7441) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Blob memory interval limit'. [#7444](https://github.com/ydb-platform/ydb/pull/7444) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'added attributes to session cookie'. [#7453](https://github.com/ydb-platform/ydb/pull/7453) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* NO CL ENTRY:  'Remove old Json UDF (used only in SQL v0).'. [#7492](https://github.com/ydb-platform/ydb/pull/7492) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Print proper column names for wide connections'. [#7524](https://github.com/ydb-platform/ydb/pull/7524) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Library import 240807-1311'. [#7538](https://github.com/ydb-platform/ydb/pull/7538) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix segfault in deserializer stream usage'. [#7542](https://github.com/ydb-platform/ydb/pull/7542) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add simple stability test for olap queries'. [#7543](https://github.com/ydb-platform/ydb/pull/7543) ([Artem Alekseev](https://github.com/fexolm)).
* NO CL ENTRY:  'YQL: Skip logical_id at operation hashing'. [#7551](https://github.com/ydb-platform/ydb/pull/7551) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Remove debug output'. [#7553](https://github.com/ydb-platform/ydb/pull/7553) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'Allow multiple join-broadcasts in single stage'. [#7556](https://github.com/ydb-platform/ydb/pull/7556) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'YQL: Release lock after fork'. [#7557](https://github.com/ydb-platform/ydb/pull/7557) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'DBeaver to safe procs'. [#7558](https://github.com/ydb-platform/ydb/pull/7558) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Do not use blockreader on weak schema tables'. [#7566](https://github.com/ydb-platform/ydb/pull/7566) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Enable auto-block mode by default'. [#7567](https://github.com/ydb-platform/ydb/pull/7567) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Revert "Fix cross join with list iterator. ([#4683](https://github.com/ydb-platform/ydb/issues/4683))"'. [#7570](https://github.com/ydb-platform/ydb/pull/7570) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Fix json float/double print format'. [#7572](https://github.com/ydb-platform/ydb/pull/7572) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Allow logging AST with free arguments.'. [#7573](https://github.com/ydb-platform/ydb/pull/7573) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Check status of TEvPutResult'. [#7579](https://github.com/ydb-platform/ydb/pull/7579) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Restore indexes from backup with the original partitioning'. [#7589](https://github.com/ydb-platform/ydb/pull/7589) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Delete empty portions normalizer'. [#7596](https://github.com/ydb-platform/ydb/pull/7596) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Revert "Remove old Json UDF (used only in SQL v0)."'. [#7612](https://github.com/ydb-platform/ydb/pull/7612) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  '[CDC] Do not lose presition during float/double to json serialization'. [#7625](https://github.com/ydb-platform/ydb/pull/7625) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Add a scenario test for altering tiering config'. [#7636](https://github.com/ydb-platform/ydb/pull/7636) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Refactor build index'. [#7658](https://github.com/ydb-platform/ydb/pull/7658) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Double free when accessing .AsBoxed() on Pod with 0 refcount'. [#7659](https://github.com/ydb-platform/ydb/pull/7659) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'different request variants need different memory profiles'. [#7664](https://github.com/ydb-platform/ydb/pull/7664) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'improve chunks splitter performance'. [#7665](https://github.com/ydb-platform/ydb/pull/7665) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Storage dashboards'. [#7668](https://github.com/ydb-platform/ydb/pull/7668) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'delete non-existing ut from muted'. [#7672](https://github.com/ydb-platform/ydb/pull/7672) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Show RuntimeFeatures on portion_stats sys-view'. [#7673](https://github.com/ydb-platform/ydb/pull/7673) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Call ByteSizeLong on each WriteRequest separately'. [#7678](https://github.com/ydb-platform/ydb/pull/7678) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'unmute incorrectly muted olap tests'. [#7680](https://github.com/ydb-platform/ydb/pull/7680) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Move unacknowledged messages back to OriginalMessagesToPassDown queue'. [#7681](https://github.com/ydb-platform/ydb/pull/7681) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Use a separate lock for Processor->Write calls'. [#7682](https://github.com/ydb-platform/ydb/pull/7682) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Ignore message acks from previous subsessions'. [#7683](https://github.com/ydb-platform/ydb/pull/7683) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'refactoring for ranges control'. [#7758](https://github.com/ydb-platform/ydb/pull/7758) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix replicated stage CTE refs between precomputes'. [#7788](https://github.com/ydb-platform/ydb/pull/7788) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Library import 240814-1820'. [#7801](https://github.com/ydb-platform/ydb/pull/7801) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'scan error processing on restore data'. [#7813](https://github.com/ydb-platform/ydb/pull/7813) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Optional columns feature flags'. [#7814](https://github.com/ydb-platform/ydb/pull/7814) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix snapshot tracing signals'. [#7821](https://github.com/ydb-platform/ydb/pull/7821) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix snapshot control in case sys view requests'. [#7824](https://github.com/ydb-platform/ydb/pull/7824) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 240815-1025'. [#7832](https://github.com/ydb-platform/ydb/pull/7832) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Revert separate lock for Processor->Write calls'. [#7837](https://github.com/ydb-platform/ydb/pull/7837) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Fix column order'. [#7839](https://github.com/ydb-platform/ydb/pull/7839) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Query replay with coredumps'. [#7862](https://github.com/ydb-platform/ydb/pull/7862) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'dont use cpu for not abortable chunks'. [#7865](https://github.com/ydb-platform/ydb/pull/7865) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix portion kind modification'. [#7868](https://github.com/ydb-platform/ydb/pull/7868) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'additional tx signals'. [#7876](https://github.com/ydb-platform/ydb/pull/7876) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'LOGBROKER-9215: fix use after move in http_proxy'. [#7883](https://github.com/ydb-platform/ydb/pull/7883) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'YQL: Fix prompt in error message'. [#7888](https://github.com/ydb-platform/ydb/pull/7888) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'ydb_topic: Unmute BasicUsage.ConflictingWrites test'. [#7891](https://github.com/ydb-platform/ydb/pull/7891) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Include SourceCpuTimeUs to CpuTimeUs'. [#7892](https://github.com/ydb-platform/ydb/pull/7892) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'replace as default write modification type'. [#7894](https://github.com/ydb-platform/ydb/pull/7894) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'speed up compilation for request processing'. [#7900](https://github.com/ydb-platform/ydb/pull/7900) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix chunks scanner'. [#7913](https://github.com/ydb-platform/ydb/pull/7913) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Enable EnableUuidAsPrimaryKey for default'. [#7914](https://github.com/ydb-platform/ydb/pull/7914) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Library import 240816-1413'. [#7926](https://github.com/ydb-platform/ydb/pull/7926) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'add client certificate authorization to cfg'. [#7932](https://github.com/ydb-platform/ydb/pull/7932) ([Sergey J](https://github.com/sourcecd)).
* NO CL ENTRY:  'speed up filters construction'. [#7934](https://github.com/ydb-platform/ydb/pull/7934) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix native file test'. [#7935](https://github.com/ydb-platform/ydb/pull/7935) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Allow use DECIMAL(22,9) in EXTERNAL TABLE'. [#7945](https://github.com/ydb-platform/ydb/pull/7945) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Introduce computation node for BlockMapJoinCore (LeftOnly and LeftSemi)'. [#7947](https://github.com/ydb-platform/ydb/pull/7947) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Check uuid in pk replication works'. [#7950](https://github.com/ydb-platform/ydb/pull/7950) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'timeout for long_tx operations'. [#7961](https://github.com/ydb-platform/ydb/pull/7961) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert some restriction on secondary index creation'. [#7963](https://github.com/ydb-platform/ydb/pull/7963) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'fix race on scan start with indexation cleaning blobs'. [#7968](https://github.com/ydb-platform/ydb/pull/7968) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Simplify tpc-ds q34, q73 a bit to help an optimizer'. [#7969](https://github.com/ydb-platform/ydb/pull/7969) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Add unit-test for data eviction in tiering'. [#7971](https://github.com/ydb-platform/ydb/pull/7971) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'PgWire auth with ApiKey'. [#7973](https://github.com/ydb-platform/ydb/pull/7973) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'count-min-sketch as index'. [#7978](https://github.com/ydb-platform/ydb/pull/7978) ([ildar-khisambeev](https://github.com/ildar-khisambeev)).
* NO CL ENTRY:  'Don't queue requests for workers if their capacity is empty.'. [#7979](https://github.com/ydb-platform/ydb/pull/7979) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'ExecuteData set transaction mode always'. [#7982](https://github.com/ydb-platform/ydb/pull/7982) ([Andrei Rykov](https://github.com/StekPerepolnen)).
* NO CL ENTRY:  'Finally fix use after move in http_proxy correctly'. [#7991](https://github.com/ydb-platform/ydb/pull/7991) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'Library import 240819-0942'. [#7994](https://github.com/ydb-platform/ydb/pull/7994) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add column shard Controller parameters to AppData'. [#8000](https://github.com/ydb-platform/ydb/pull/8000) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Don't wait in scheduler queue if all workers out.'. [#8002](https://github.com/ydb-platform/ydb/pull/8002) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Library import 240819-1422'. [#8013](https://github.com/ydb-platform/ydb/pull/8013) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'trunc windows build fix'. [#8014](https://github.com/ydb-platform/ydb/pull/8014) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* NO CL ENTRY:  'Don't skip null values on COUNT(*) in column shards'. [#8024](https://github.com/ydb-platform/ydb/pull/8024) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Introduce computation node for BlockMapJoinCore (Left and Inner)'. [#8030](https://github.com/ydb-platform/ydb/pull/8030) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Library import 240819-2038'. [#8032](https://github.com/ydb-platform/ydb/pull/8032) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Use 'mock_cloud' if empty string is passed as cloud id to TFolderServiceAdapterMock'. [#8037](https://github.com/ydb-platform/ydb/pull/8037) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'tx interactions manager'. [#8050](https://github.com/ydb-platform/ydb/pull/8050) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 240820-1626'. [#8060](https://github.com/ydb-platform/ydb/pull/8060) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Enable DROP VIEW from a folder, bugfix'. [#8066](https://github.com/ydb-platform/ydb/pull/8066) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Library import 240820-2236'. [#8068](https://github.com/ydb-platform/ydb/pull/8068) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'YQL: Fix crash in lineage'. [#8070](https://github.com/ydb-platform/ydb/pull/8070) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'UDF Datetime2 big dates Split/Make'. [#8084](https://github.com/ydb-platform/ydb/pull/8084) ([amikish](https://github.com/amikish)).
* NO CL ENTRY:  'YQL: Fuse reduces with presort settings'. [#8117](https://github.com/ydb-platform/ydb/pull/8117) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'multi heads allocations manager'. [#8126](https://github.com/ydb-platform/ydb/pull/8126) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct portions index usage for control memory scan intervals'. [#8135](https://github.com/ydb-platform/ydb/pull/8135) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'CMS editor async load fix'. [#8140](https://github.com/ydb-platform/ydb/pull/8140) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.16.0)'. [#8143](https://github.com/ydb-platform/ydb/pull/8143) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Forbid creating empty tiering rules in column shards'. [#8154](https://github.com/ydb-platform/ydb/pull/8154) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Fix LWTrace HTML page generation'. [#8158](https://github.com/ydb-platform/ydb/pull/8158) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Turn on GCCountersNormalizer'. [#8166](https://github.com/ydb-platform/ydb/pull/8166) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Dsproxy put lwtrack'. [#8168](https://github.com/ydb-platform/ydb/pull/8168) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Use GraceCode for Map by default'. [#8169](https://github.com/ydb-platform/ydb/pull/8169) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'dont create temporary sparsed array on merging'. [#8174](https://github.com/ydb-platform/ydb/pull/8174) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Set EnableUniqConstraint by default'. [#8180](https://github.com/ydb-platform/ydb/pull/8180) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'HLL in YT statistics'. [#8184](https://github.com/ydb-platform/ydb/pull/8184) ([Dmitry O](https://github.com/alephonea)).
* NO CL ENTRY:  'Revert "ci: upgrade actions/checkout@v4, actions/github-script@v7, add test_retry_count input for build_and_test_ya action"'. [#8185](https://github.com/ydb-platform/ydb/pull/8185) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix interval multiplication overflow'. [#8188](https://github.com/ydb-platform/ydb/pull/8188) ([amikish](https://github.com/amikish)).
* NO CL ENTRY:  'Add stat counters for PutsPerSecond.'. [#8201](https://github.com/ydb-platform/ydb/pull/8201) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'LOGBROKER 8891 fix parsing queue url'. [#8203](https://github.com/ydb-platform/ydb/pull/8203) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'Library import 240823-1155'. [#8207](https://github.com/ydb-platform/ydb/pull/8207) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Remove unnecessary message'. [#8219](https://github.com/ydb-platform/ydb/pull/8219) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Aggregated spilling stats in KQP pipeline'. [#8220](https://github.com/ydb-platform/ydb/pull/8220) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Check incomplete refs and dedup stats in case of failures'. [#8234](https://github.com/ydb-platform/ydb/pull/8234) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Fix path type for pg_class'. [#8243](https://github.com/ydb-platform/ydb/pull/8243) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Revert add status PROCESSING to statistics proto'. [#8253](https://github.com/ydb-platform/ydb/pull/8253) ([ildar-khisambeev](https://github.com/ildar-khisambeev)).
* NO CL ENTRY:  'Add concurrent tiering updates to OLAP scenario test'. [#8262](https://github.com/ydb-platform/ydb/pull/8262) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'fix(kqp): always take snapshot for queries with stream lookup'. [#8267](https://github.com/ydb-platform/ydb/pull/8267) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Fix TPogram fields order'. [#8268](https://github.com/ydb-platform/ydb/pull/8268) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Fix PoolTrees, TentativePoolTrees pragmas'. [#8272](https://github.com/ydb-platform/ydb/pull/8272) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Fix arrow yt column converter'. [#8279](https://github.com/ydb-platform/ydb/pull/8279) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Take query_id to analyze coredumps'. [#8286](https://github.com/ydb-platform/ydb/pull/8286) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Fix space status flags logging for multiput'. [#8304](https://github.com/ydb-platform/ydb/pull/8304) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'fix tests'. [#8323](https://github.com/ydb-platform/ydb/pull/8323) ([ildar-khisambeev](https://github.com/ildar-khisambeev)).
* NO CL ENTRY:  'LOGBROKER 8891 add 4 json sqs requests'. [#8328](https://github.com/ydb-platform/ydb/pull/8328) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'LOGBROKER 8891 list dead letter source queues'. [#8330](https://github.com/ydb-platform/ydb/pull/8330) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'Add memory limit to prevent converter to AST get OOM'. [#8351](https://github.com/ydb-platform/ydb/pull/8351) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  '[LDAP] Add flag to disable search nested groups'. [#8354](https://github.com/ydb-platform/ydb/pull/8354) ([Andrey Molotkov](https://github.com/molotkov-and)).
* NO CL ENTRY:  'Apply the last stats received from terminated CAs'. [#8356](https://github.com/ydb-platform/ydb/pull/8356) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'speed up merging for sparsed columns'. [#8365](https://github.com/ydb-platform/ydb/pull/8365) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Use cpu limits from resource pool scheme objects'. [#8370](https://github.com/ydb-platform/ydb/pull/8370) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'ydb_topic: schedule SendImpl from OnCompressedImpl instead of calling it directly'. [#8372](https://github.com/ydb-platform/ydb/pull/8372) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Add device type in dsproxy put lwprobe'. [#8381](https://github.com/ydb-platform/ydb/pull/8381) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Fix PDisk config is being overwritten'. [#8388](https://github.com/ydb-platform/ydb/pull/8388) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'fix host as default field for sysinfo'. [#8403](https://github.com/ydb-platform/ydb/pull/8403) ([Alexey Efimov](https://github.com/adameat)).
* NO CL ENTRY:  'signals about long_tx writing'. [#8407](https://github.com/ydb-platform/ydb/pull/8407) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix YQL knn udf docs'. [#8425](https://github.com/ydb-platform/ydb/pull/8425) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Prepare cpp-protobuf migration'. [#8443](https://github.com/ydb-platform/ydb/pull/8443) ([Dmitry Nechitaev](https://github.com/Nechda)).
* NO CL ENTRY:  'add plan.svg to benchmark report'. [#8464](https://github.com/ydb-platform/ydb/pull/8464) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'validations for prevent incorrect data in local db'. [#8477](https://github.com/ydb-platform/ydb/pull/8477) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'nbs-issue-176: added EncryptedDataKey field to NKikimrBlockStore::TEncryptionDesc'. [#8482](https://github.com/ydb-platform/ydb/pull/8482) ([Pavel Misko](https://github.com/sharpeye)).
* NO CL ENTRY:  'Check pattern IsCompiled before Compile'. [#8486](https://github.com/ydb-platform/ydb/pull/8486) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Bsqueue RequestTrackingStats lwprobe'. [#8494](https://github.com/ydb-platform/ydb/pull/8494) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Implement computation node for BlockMapJoinCore (Left and Inner) with multi dict'. [#8501](https://github.com/ydb-platform/ydb/pull/8501) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'delete query from compile cache if it is existed during insert'. [#8506](https://github.com/ydb-platform/ydb/pull/8506) ([VPolka](https://github.com/VPolka)).
* NO CL ENTRY:  'fix json map conversion in http proxy'. [#8508](https://github.com/ydb-platform/ydb/pull/8508) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'ydb_topic: Unmute test BasicUsage.WriteRead'. [#8509](https://github.com/ydb-platform/ydb/pull/8509) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'ydb_persqueue: Fix TWriteSession_TestBrokenPolicy test'. [#8514](https://github.com/ydb-platform/ydb/pull/8514) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'LOGBROKER 8891 fix not using optional fields in sqs json api properly'. [#8523](https://github.com/ydb-platform/ydb/pull/8523) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'Library import (manual because of merge conflicts)'. [#8529](https://github.com/ydb-platform/ydb/pull/8529) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'ydb_topic writer: remove obsolete fields'. [#8533](https://github.com/ydb-platform/ydb/pull/8533) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'log(kqp): downgrade data integrity log level'. [#8543](https://github.com/ydb-platform/ydb/pull/8543) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Library import 240830-1442'. [#8544](https://github.com/ydb-platform/ydb/pull/8544) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix HasValue misuse for computation node state'. [#8555](https://github.com/ydb-platform/ydb/pull/8555) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Revert "Don't run large_serializable in PR"'. [#8560](https://github.com/ydb-platform/ydb/pull/8560) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Use actual cores count'. [#8576](https://github.com/ydb-platform/ydb/pull/8576) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.17.2)'. [#8579](https://github.com/ydb-platform/ydb/pull/8579) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix column livecycle'. [#8580](https://github.com/ydb-platform/ydb/pull/8580) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Increment YDB CLI version to 2.12.0'. [#8581](https://github.com/ydb-platform/ydb/pull/8581) ([Nikolay Perfilov](https://github.com/pnv1)).
* NO CL ENTRY:  'fix race on enqueue tx_commit in case long synchronization'. [#8588](https://github.com/ydb-platform/ydb/pull/8588) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix partition count in column table description'. [#8589](https://github.com/ydb-platform/ydb/pull/8589) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'provide correct path id to lock info'. [#8591](https://github.com/ydb-platform/ydb/pull/8591) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Remove columns not present in current scheme on indexation and scan of committed'. [#8593](https://github.com/ydb-platform/ydb/pull/8593) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Make error for impossible TzDate casts more friendly (again)'. [#8595](https://github.com/ydb-platform/ydb/pull/8595) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  '[CBO] Join Order test improvement'. [#8602](https://github.com/ydb-platform/ydb/pull/8602) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'remove validation throught available reask in timeout'. [#8609](https://github.com/ydb-platform/ydb/pull/8609) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'we have to notify cs at first to add lock information'. [#8614](https://github.com/ydb-platform/ydb/pull/8614) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Rename new YMQ grpc method names to Ymq* to fix failing default-win-x…'. [#8615](https://github.com/ydb-platform/ydb/pull/8615) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'YT: add pagination for the GetJobStderr command'. [#8627](https://github.com/ydb-platform/ydb/pull/8627) ([Dmitry Ermolov](https://github.com/dim-an)).
* NO CL ENTRY:  'Spilling info + better summary visualization'. [#8639](https://github.com/ydb-platform/ydb/pull/8639) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'fix error parsing and params in allure report'. [#8641](https://github.com/ydb-platform/ydb/pull/8641) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix params looking'. [#8660](https://github.com/ydb-platform/ydb/pull/8660) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 240903-1104'. [#8666](https://github.com/ydb-platform/ydb/pull/8666) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Don't lose 'any' flag after CBO.'. [#8674](https://github.com/ydb-platform/ydb/pull/8674) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'switch on mkql factory for cs'. [#8682](https://github.com/ydb-platform/ydb/pull/8682) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'reduce logging rate for stats info'. [#8683](https://github.com/ydb-platform/ydb/pull/8683) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'use ss tablet id for schemeshard and sender for tx_proxy'. [#8684](https://github.com/ydb-platform/ydb/pull/8684) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix MakeBlocks usage in BlockMapJoinCore computation node'. [#8686](https://github.com/ydb-platform/ydb/pull/8686) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'immediate writing with no tx'. [#8697](https://github.com/ydb-platform/ydb/pull/8697) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert "Fix memory leak issue with AWS API usage ([#6160](https://github.com/ydb-platform/ydb/issues/6160))"'. [#8698](https://github.com/ydb-platform/ydb/pull/8698) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Add EnablePgSyntax flag'. [#8703](https://github.com/ydb-platform/ydb/pull/8703) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'fix memory leak in ymq proxy'. [#8706](https://github.com/ydb-platform/ydb/pull/8706) ([Sergey Veselov](https://github.com/siarheivesialou)).
* NO CL ENTRY:  'fix case indexation removed table'. [#8713](https://github.com/ydb-platform/ydb/pull/8713) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix broken txs'. [#8714](https://github.com/ydb-platform/ydb/pull/8714) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'add feature flag: enable olap tiering'. [#8719](https://github.com/ydb-platform/ydb/pull/8719) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Add feature flag: enable olap compression'. [#8726](https://github.com/ydb-platform/ydb/pull/8726) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'split factor increased to avoid tests interaction by timeout'. [#8728](https://github.com/ydb-platform/ydb/pull/8728) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'additional signals for commit timings control'. [#8729](https://github.com/ydb-platform/ydb/pull/8729) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add local kmeans actor scan'. [#8756](https://github.com/ydb-platform/ydb/pull/8756) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  '[docs] Fix method name to DeduplicationEnabled'. [#8759](https://github.com/ydb-platform/ydb/pull/8759) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Do not invalidate request with INTERNAL_ERROR in case of cancelation tx on the follower using depended reads'. [#8761](https://github.com/ydb-platform/ydb/pull/8761) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'fix import build'. [#8769](https://github.com/ydb-platform/ydb/pull/8769) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 240905-0836'. [#8771](https://github.com/ydb-platform/ydb/pull/8771) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Reply UNAVAILABLE in case EvStartKqpTasksRequest is undelivered because of disconnect'. [#8784](https://github.com/ydb-platform/ydb/pull/8784) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Revert "merge the additional yaml config to the main yaml config"'. [#8794](https://github.com/ydb-platform/ydb/pull/8794) ([Nikita-Levuskin](https://github.com/Nikita-Levuskin)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.18.0)'. [#8797](https://github.com/ydb-platform/ydb/pull/8797) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Rename EOutputFormat -> EDataFormat and AddFormats -> AddOutputFormats'. [#8803](https://github.com/ydb-platform/ydb/pull/8803) ([Nikolay Perfilov](https://github.com/pnv1)).
* NO CL ENTRY:  'EnablePgSyntax flag in fq/yt tests'. [#8807](https://github.com/ydb-platform/ydb/pull/8807) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'remove table only for empty insert table'. [#8822](https://github.com/ydb-platform/ydb/pull/8822) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Restore the commit fixing a memory leak in AWS SDK'. [#8823](https://github.com/ydb-platform/ydb/pull/8823) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Fix resolve cluster in pg parser'. [#8835](https://github.com/ydb-platform/ydb/pull/8835) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Add CRC64 to docs'. [#8842](https://github.com/ydb-platform/ydb/pull/8842) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'add missing enum value to win-specific code'. [#8854](https://github.com/ydb-platform/ydb/pull/8854) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Added ensure Node != nullptr.'. [#8855](https://github.com/ydb-platform/ydb/pull/8855) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Library import 240906-1233'. [#8867](https://github.com/ydb-platform/ydb/pull/8867) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  '[yt provider] Add ForceTransform optimizer'. [#8874](https://github.com/ydb-platform/ydb/pull/8874) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Fix log message in GenerateCookie'. [#8890](https://github.com/ydb-platform/ydb/pull/8890) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'speed up column ids checkers and finder'. [#8906](https://github.com/ydb-platform/ydb/pull/8906) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YQL: Fix lineage for flatten columns'. [#8908](https://github.com/ydb-platform/ydb/pull/8908) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Fix write ids usage'. [#8909](https://github.com/ydb-platform/ydb/pull/8909) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Deliver raw ByteSize from S3 listing, infer appox stats and split DataSources'. [#8910](https://github.com/ydb-platform/ydb/pull/8910) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'skip long tx writing to in control locks'. [#8924](https://github.com/ydb-platform/ydb/pull/8924) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct EvWrite locks processing'. [#8931](https://github.com/ydb-platform/ydb/pull/8931) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Improve buckets spilling in wide combine'. [#8939](https://github.com/ydb-platform/ydb/pull/8939) ([Vladluk](https://github.com/vladl2802)).
* NO CL ENTRY:  'YDBDOCS-819: serial types'. [#8956](https://github.com/ydb-platform/ydb/pull/8956) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Integrity trails helper'. [#8964](https://github.com/ydb-platform/ydb/pull/8964) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Conditionally compile the code that uses AWS to pass windows build'. [#8966](https://github.com/ydb-platform/ydb/pull/8966) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Microfix in DQ'. [#8968](https://github.com/ydb-platform/ydb/pull/8968) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Support schemaname in sequence name'. [#8988](https://github.com/ydb-platform/ydb/pull/8988) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Capture TablePathPrefix (and other parts of the parser context) in CREATE VIEW'. [#8991](https://github.com/ydb-platform/ydb/pull/8991) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'fix concurrent rw hash map'. [#9008](https://github.com/ydb-platform/ydb/pull/9008) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* NO CL ENTRY:  'Normalizer insert records'. [#9010](https://github.com/ydb-platform/ydb/pull/9010) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Update initial-deployment.md'. [#9019](https://github.com/ydb-platform/ydb/pull/9019) ([George Gaál](https://github.com/gecube)).
* NO CL ENTRY:  'Fix missing include?'. [#9023](https://github.com/ydb-platform/ydb/pull/9023) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'CODEOWNERS CS'. [#9025](https://github.com/ydb-platform/ydb/pull/9025) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Add TPC-DS generator'. [#9033](https://github.com/ydb-platform/ydb/pull/9033) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix json'. [#9034](https://github.com/ydb-platform/ydb/pull/9034) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Balancing: fix fresh blobs ingress merging'. [#9035](https://github.com/ydb-platform/ydb/pull/9035) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Implement excess key columns drop for BlockMapJoinCore computation node'. [#9036](https://github.com/ydb-platform/ydb/pull/9036) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'KQP part of duplicated columns'. [#9044](https://github.com/ydb-platform/ydb/pull/9044) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Multiplans'. [#9053](https://github.com/ydb-platform/ydb/pull/9053) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 240911-0600'. [#9054](https://github.com/ydb-platform/ydb/pull/9054) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'ydb_federated_topic: Move fds_mock to separate directory'. [#9070](https://github.com/ydb-platform/ydb/pull/9070) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Added test with disabled feature flag "EnableOlapCompression"'. [#9077](https://github.com/ydb-platform/ydb/pull/9077) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'speed up scan initialization'. [#9086](https://github.com/ydb-platform/ydb/pull/9086) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'speed up logging exp'. [#9087](https://github.com/ydb-platform/ydb/pull/9087) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Make ShardsResolver separate kqp library'. [#9098](https://github.com/ydb-platform/ydb/pull/9098) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'feat(data_integrity_trails): generate traceId in grpc'. [#9105](https://github.com/ydb-platform/ydb/pull/9105) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Long domain name test'. [#9106](https://github.com/ydb-platform/ydb/pull/9106) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Test "DisabledAlterCompression" moved in KqpOlapCompression'. [#9114](https://github.com/ydb-platform/ydb/pull/9114) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'htap locks'. [#9121](https://github.com/ydb-platform/ydb/pull/9121) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Mute ydb/tests/fq/generic/ 11 tests'. [#9133](https://github.com/ydb-platform/ydb/pull/9133) ([Kirill Rysin](https://github.com/naspirato)).
* NO CL ENTRY:  'fix(kqp): pass lockNodeId to stream lookup actor'. [#9154](https://github.com/ydb-platform/ydb/pull/9154) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'check if nodes restart while benchmark'. [#9166](https://github.com/ydb-platform/ydb/pull/9166) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'add explain plan to benchmarks'. [#9167](https://github.com/ydb-platform/ydb/pull/9167) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Add reinit step for build vector index'. [#9176](https://github.com/ydb-platform/ydb/pull/9176) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Add multikey support for BlockMapJoinCore computation node'. [#9191](https://github.com/ydb-platform/ydb/pull/9191) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Library import 240913-0843'. [#9195](https://github.com/ydb-platform/ydb/pull/9195) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Revert "YQ-3617: fix GROUP BY HOP + AS_TABLE"'. [#9196](https://github.com/ydb-platform/ydb/pull/9196) ([Alexey Pozdniakov](https://github.com/APozdniakov)).
* NO CL ENTRY:  'signals, optimizations, logging, inserted data expiration'. [#9200](https://github.com/ydb-platform/ydb/pull/9200) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Use better palette by default + ability to override colors with CSS vars'. [#9202](https://github.com/ydb-platform/ydb/pull/9202) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Export by new cmake generator'. [#9216](https://github.com/ydb-platform/ydb/pull/9216) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.19.0)'. [#9220](https://github.com/ydb-platform/ydb/pull/9220) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Publish timeline explicitly in separate field'. [#9223](https://github.com/ydb-platform/ydb/pull/9223) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Balancing: add new limits, timeouts and sensors, fix blob on main by ingress, but not realy'. [#9239](https://github.com/ydb-platform/ydb/pull/9239) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  '[CBO] Hints parser added'. [#9252](https://github.com/ydb-platform/ydb/pull/9252) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'References to precomputes and small fixes'. [#9258](https://github.com/ydb-platform/ydb/pull/9258) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Support ydb dump for tables with serial types'. [#9272](https://github.com/ydb-platform/ydb/pull/9272) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Mute all Connector integration tests'. [#9273](https://github.com/ydb-platform/ydb/pull/9273) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* NO CL ENTRY:  'Library import 240916-1031'. [#9292](https://github.com/ydb-platform/ydb/pull/9292) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add PDisk error reason to VDisk's PDisk error state'. [#9302](https://github.com/ydb-platform/ydb/pull/9302) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Fix vulnerabilities in yql_plan.cpp reported by coverity'. [#9306](https://github.com/ydb-platform/ydb/pull/9306) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Ignore auto partitioning fields if disabled'. [#9312](https://github.com/ydb-platform/ydb/pull/9312) ([niksaveliev](https://github.com/niksaveliev)).
* NO CL ENTRY:  'fix htap test for deletion'. [#9313](https://github.com/ydb-platform/ydb/pull/9313) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix tpcds build'. [#9314](https://github.com/ydb-platform/ydb/pull/9314) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Views: throw a human-readable error in case of a missing `WITH (security_invoker = true)`'. [#9320](https://github.com/ydb-platform/ydb/pull/9320) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'fix portions cleaning in case table removed'. [#9325](https://github.com/ydb-platform/ydb/pull/9325) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'CBO cost function for YT'. [#9333](https://github.com/ydb-platform/ydb/pull/9333) ([Dmitry O](https://github.com/alephonea)).
* NO CL ENTRY:  'fix float-mode param message'. [#9350](https://github.com/ydb-platform/ydb/pull/9350) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix typo in ydb_query_v1.proto'. [#9364](https://github.com/ydb-platform/ydb/pull/9364) ([amikish](https://github.com/amikish)).
* NO CL ENTRY:  'Add some more counters docs'. [#9380](https://github.com/ydb-platform/ydb/pull/9380) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Fix addressing sparsed'. [#9382](https://github.com/ydb-platform/ydb/pull/9382) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix start balancing actor after timeout + fix release replication token'. [#9389](https://github.com/ydb-platform/ydb/pull/9389) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Allow restarting broken disk in broken group'. [#9391](https://github.com/ydb-platform/ydb/pull/9391) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Add uuid support for idx_test'. [#9395](https://github.com/ydb-platform/ydb/pull/9395) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'YQL: Add seed optional argument to Digest::CityHash() call'. [#9409](https://github.com/ydb-platform/ydb/pull/9409) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Library import 240918-0758'. [#9418](https://github.com/ydb-platform/ydb/pull/9418) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Correct schemas adaptation'. [#9425](https://github.com/ydb-platform/ydb/pull/9425) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'feat(kqp): support stream lookup join for index table'. [#9429](https://github.com/ydb-platform/ydb/pull/9429) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Mute ydb/core/blobstorage/ut_vdisk/ 2 tests'. [#9441](https://github.com/ydb-platform/ydb/pull/9441) ([Kirill Rysin](https://github.com/naspirato)).
* NO CL ENTRY:  'Use WideStream instead of WideFlow in BlockMapJoinCore computation node'. [#9448](https://github.com/ydb-platform/ydb/pull/9448) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Docs2'. [#9458](https://github.com/ydb-platform/ydb/pull/9458) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  '[CBO] hints parser fixes'. [#9463](https://github.com/ydb-platform/ydb/pull/9463) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'add special case for customize nodes for tablet ids'. [#9466](https://github.com/ydb-platform/ydb/pull/9466) ([Sergey J](https://github.com/sourcecd)).
* NO CL ENTRY:  'Add EnableAntlr4Parser to query replay'. [#9471](https://github.com/ydb-platform/ydb/pull/9471) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Add docs for topic deduplication counters'. [#9472](https://github.com/ydb-platform/ydb/pull/9472) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'immediate write for bulk upsert'. [#9489](https://github.com/ydb-platform/ydb/pull/9489) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  '[refactoring] Get rid of extra template code for grpc server shutdown protection.'. [#9494](https://github.com/ydb-platform/ydb/pull/9494) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Fix tx counters bug'. [#9498](https://github.com/ydb-platform/ydb/pull/9498) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'fix cluster life check'. [#9504](https://github.com/ydb-platform/ydb/pull/9504) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Increase compilation time in query replay'. [#9506](https://github.com/ydb-platform/ydb/pull/9506) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Dark Theme support'. [#9511](https://github.com/ydb-platform/ydb/pull/9511) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Describe VIEW for YDB CLI'. [#9513](https://github.com/ydb-platform/ydb/pull/9513) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  '[KQP] Plan inf rec fix '. [#9519](https://github.com/ydb-platform/ydb/pull/9519) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Dynamic deadline for CS scan'. [#9520](https://github.com/ydb-platform/ydb/pull/9520) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Federation mode with tx counters test'. [#9523](https://github.com/ydb-platform/ydb/pull/9523) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Revert "Support PG types in CDC ([#9337](https://github.com/ydb-platform/ydb/issues/9337))"'. [#9526](https://github.com/ydb-platform/ydb/pull/9526) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Take the return type of BlockMapJoinCore computation node as an argument'. [#9529](https://github.com/ydb-platform/ydb/pull/9529) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Fix pgwire auth'. [#9531](https://github.com/ydb-platform/ydb/pull/9531) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Don't set `UseAsyncTxPinger = true` explicitly'. [#9535](https://github.com/ydb-platform/ydb/pull/9535) ([Dmitry Ermolov](https://github.com/dim-an)).
* NO CL ENTRY:  '[docs] fix storage-bucket for docs-upload-action'. [#9547](https://github.com/ydb-platform/ydb/pull/9547) ([Ivan Blinkov](https://github.com/blinkov)).
* NO CL ENTRY:  'reduce memory in schemas loading'. [#9548](https://github.com/ydb-platform/ydb/pull/9548) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix PDisks becoming INACTIVE in normal flow'. [#9557](https://github.com/ydb-platform/ydb/pull/9557) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'feat(kqp): enable stream join for data query'. [#9568](https://github.com/ydb-platform/ydb/pull/9568) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Fix double release repl token + SendOnlyHugeBlobs setting + move settings from consts to config'. [#9569](https://github.com/ydb-platform/ydb/pull/9569) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Test to check running additional grpc servers'. [#9570](https://github.com/ydb-platform/ydb/pull/9570) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'dstool cluster workload run: add custom sleep time + restart ydbd'. [#9574](https://github.com/ydb-platform/ydb/pull/9574) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'speed up register blob idx'. [#9581](https://github.com/ydb-platform/ydb/pull/9581) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Increment YDB CLI version to 2.13.0'. [#9582](https://github.com/ydb-platform/ydb/pull/9582) ([Nikolay Perfilov](https://github.com/pnv1)).
* NO CL ENTRY:  'fix mvcc tests. use write id as row feature for conflicts resolving'. [#9598](https://github.com/ydb-platform/ydb/pull/9598) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix generating too much data in memory for ydb workload import command'. [#9601](https://github.com/ydb-platform/ydb/pull/9601) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix off compression'. [#9612](https://github.com/ydb-platform/ydb/pull/9612) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'TPortionInfo::GetRecordsCount speed up'. [#9614](https://github.com/ydb-platform/ydb/pull/9614) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Better scheduler for S3 Sources'. [#9620](https://github.com/ydb-platform/ydb/pull/9620) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'dont move non-actualized buckets in rating scale'. [#9628](https://github.com/ydb-platform/ydb/pull/9628) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YDBDOCS-819: serial types (fix)'. [#9634](https://github.com/ydb-platform/ydb/pull/9634) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'YMQ: Force upper case for "MD5" and "AWS" in field names'. [#9642](https://github.com/ydb-platform/ydb/pull/9642) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Revert "Disable blob header by default in VDisk"'. [#9645](https://github.com/ydb-platform/ydb/pull/9645) ([Alexander Rutkovsky](https://github.com/alexvru)).
* NO CL ENTRY:  'remove useless locks broking checker'. [#9650](https://github.com/ydb-platform/ydb/pull/9650) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'unmute olap-kqp-mvcc tests'. [#9655](https://github.com/ydb-platform/ydb/pull/9655) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Column Family for ColumnTable'. [#9657](https://github.com/ydb-platform/ydb/pull/9657) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  '[CLI] Bugfix: remove item prefix correctly'. [#9663](https://github.com/ydb-platform/ydb/pull/9663) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'clean trash on versions switching'. [#9679](https://github.com/ydb-platform/ydb/pull/9679) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'http_proxy: retrieve FolderId from query parameters'. [#9695](https://github.com/ydb-platform/ydb/pull/9695) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  '[KQP] Many result sets added'. [#9696](https://github.com/ydb-platform/ydb/pull/9696) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'EvWrite codes unification with kqp'. [#9698](https://github.com/ydb-platform/ydb/pull/9698) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert "list have been supported for s3 reader"'. [#9699](https://github.com/ydb-platform/ydb/pull/9699) ([Andrey Neporada](https://github.com/nepal)).
* NO CL ENTRY:  '[KQP] CBO hints warnings added'. [#9701](https://github.com/ydb-platform/ydb/pull/9701) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Unique constraint docs (en, ru)'. [#9702](https://github.com/ydb-platform/ydb/pull/9702) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Fix move table with sequences'. [#9709](https://github.com/ydb-platform/ydb/pull/9709) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'correct snapshot for immediate writing'. [#9711](https://github.com/ydb-platform/ydb/pull/9711) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'clean useless case for evwrite'. [#9716](https://github.com/ydb-platform/ydb/pull/9716) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add reshuffle kmeans actor scan '. [#9725](https://github.com/ydb-platform/ydb/pull/9725) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'YMQ: fix GetQueueAttributesResult builder'. [#9751](https://github.com/ydb-platform/ydb/pull/9751) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  '[CBO] Ignore IsJoinApplicable with hints. Improve hints warning messages'. [#9770](https://github.com/ydb-platform/ydb/pull/9770) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Support MoveSequence in schemeshard'. [#9772](https://github.com/ydb-platform/ydb/pull/9772) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Revert "Configure BufferPool size depending on device type"'. [#9779](https://github.com/ydb-platform/ydb/pull/9779) ([Alexander Rutkovsky](https://github.com/alexvru)).
* NO CL ENTRY:  'Added test: Alter compression for ColumnTable in TableStore'. [#9781](https://github.com/ydb-platform/ydb/pull/9781) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.22.0)'. [#9782](https://github.com/ydb-platform/ydb/pull/9782) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Remove excess RegisterDqPqReadActorFactory call in mrrun'. [#9786](https://github.com/ydb-platform/ydb/pull/9786) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  '[CBO] Asan test memory leak fix'. [#9791](https://github.com/ydb-platform/ydb/pull/9791) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Add status check + timeouts before next launch'. [#9800](https://github.com/ydb-platform/ydb/pull/9800) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  '[refactoring] Get rid of "GetPeer()" grpc request implementation copy paste and unused functions'. [#9814](https://github.com/ydb-platform/ydb/pull/9814) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Library import 240926-1443'. [#9817](https://github.com/ydb-platform/ydb/pull/9817) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Huge defrag smooth linear threshold'. [#9825](https://github.com/ydb-platform/ydb/pull/9825) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'add table profiles cfg'. [#9834](https://github.com/ydb-platform/ydb/pull/9834) ([Sergey J](https://github.com/sourcecd)).
* NO CL ENTRY:  'fix dedup normalizer'. [#9849](https://github.com/ydb-platform/ydb/pull/9849) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'accessors actualization'. [#9857](https://github.com/ydb-platform/ydb/pull/9857) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Rename tmp index impl tables to build index impl tables'. [#9868](https://github.com/ydb-platform/ydb/pull/9868) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Cli fixes'. [#9871](https://github.com/ydb-platform/ydb/pull/9871) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  '[CBO] Hint syntax fix'. [#9875](https://github.com/ydb-platform/ydb/pull/9875) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'fix strip ydb cli'. [#9876](https://github.com/ydb-platform/ydb/pull/9876) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Register pathes for insert table'. [#9881](https://github.com/ydb-platform/ydb/pull/9881) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Added muted test "KqpOlapScheme::DropColumnAfterScan"'. [#9882](https://github.com/ydb-platform/ydb/pull/9882) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'Fix load test checks'. [#9885](https://github.com/ydb-platform/ydb/pull/9885) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Bestow forward-compatibility with libpq17'. [#9886](https://github.com/ydb-platform/ydb/pull/9886) ([Yuriy Chernyshov](https://github.com/georgthegreat)).
* NO CL ENTRY:  'Library import 240930-1059'. [#9891](https://github.com/ydb-platform/ydb/pull/9891) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add dqrun rlimit'. [#9897](https://github.com/ydb-platform/ydb/pull/9897) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Added muted test "KqpOlapScheme.DropColumnAfterInsert".'. [#9898](https://github.com/ydb-platform/ydb/pull/9898) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'http_proxy_config support'. [#9916](https://github.com/ydb-platform/ydb/pull/9916) ([AlexanderShprot](https://github.com/AlexanderShprot)).
* NO CL ENTRY:  'fix rounding'. [#9922](https://github.com/ydb-platform/ydb/pull/9922) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix some vector index leftovers: schemeshard'. [#9925](https://github.com/ydb-platform/ydb/pull/9925) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Diff-checks'. [#9926](https://github.com/ydb-platform/ydb/pull/9926) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Do not use block reader on overridden schemas, columns, tables with inferred schemas'. [#9931](https://github.com/ydb-platform/ydb/pull/9931) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  '[KQP] Fix plan olap filter selectivity estimation'. [#9936](https://github.com/ydb-platform/ydb/pull/9936) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Add common libs for yql plugin. Ydb git part.'. [#9938](https://github.com/ydb-platform/ydb/pull/9938) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'grpc client: send BUILD_INFO, PID, requestSettings.Header headers for bidirectional streams'. [#9940](https://github.com/ydb-platform/ydb/pull/9940) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Fix [#9889](https://github.com/ydb-platform/ydb/issues/9889) and add tests'. [#9941](https://github.com/ydb-platform/ydb/pull/9941) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'fix potential GetStatistics hanging during rolling update'. [#9942](https://github.com/ydb-platform/ydb/pull/9942) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* NO CL ENTRY:  'YQL: Limit thread number for local calculations'. [#9950](https://github.com/ydb-platform/ydb/pull/9950) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'CLI: add timeouts to benchmarks run'. [#9961](https://github.com/ydb-platform/ydb/pull/9961) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix typo cannonical->canonical'. [#9963](https://github.com/ydb-platform/ydb/pull/9963) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241002-1139'. [#9972](https://github.com/ydb-platform/ydb/pull/9972) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  '[CBO] Fix LeftOnly (LeftAntiJoin) algebraic matrix'. [#9974](https://github.com/ydb-platform/ydb/pull/9974) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'YQL: Register LocalCalcLimit setting'. [#9976](https://github.com/ydb-platform/ydb/pull/9976) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Infer parsing error message improvement'. [#9977](https://github.com/ydb-platform/ydb/pull/9977) ([Ivan Sukhov](https://github.com/evanevanevanevannnn)).
* NO CL ENTRY:  '[refactoring] Do not use "IFacilityProvider" iface for local rpc wrappers.'. [#9978](https://github.com/ydb-platform/ydb/pull/9978) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Blobs balancer: fix unhadled event in case of chunk read timeout'. [#9999](https://github.com/ydb-platform/ydb/pull/9999) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'fix cannonical and timeout using'. [#10013](https://github.com/ydb-platform/ydb/pull/10013) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Unified can't replay messages'. [#10017](https://github.com/ydb-platform/ydb/pull/10017) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'fix unregister group race'. [#10020](https://github.com/ydb-platform/ydb/pull/10020) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'add describe indices'. [#10032](https://github.com/ydb-platform/ydb/pull/10032) ([ildar-khisambeev](https://github.com/ildar-khisambeev)).
* NO CL ENTRY:  'Library import 241003-1145'. [#10037](https://github.com/ydb-platform/ydb/pull/10037) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'ydb_federated_topic: add SelfLocation to FederationState log'. [#10038](https://github.com/ydb-platform/ydb/pull/10038) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'YQL: Set LocalCalcLimit setting for tests'. [#10043](https://github.com/ydb-platform/ydb/pull/10043) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'fix monitoring url'. [#10044](https://github.com/ydb-platform/ydb/pull/10044) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Add missing test dirs'. [#10050](https://github.com/ydb-platform/ydb/pull/10050) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Library import 241003-1407'. [#10055](https://github.com/ydb-platform/ydb/pull/10055) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix release repl token after poisson pill'. [#10069](https://github.com/ydb-platform/ydb/pull/10069) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'set load test size to large'. [#10079](https://github.com/ydb-platform/ydb/pull/10079) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'YMQ: drop empty MD5* fields from JSON responses'. [#10081](https://github.com/ydb-platform/ydb/pull/10081) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'dont use insert table totally'. [#10088](https://github.com/ydb-platform/ydb/pull/10088) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  '[refactoring] Do not include "scheme_board/events.h" into "grpc_services/base/base.h"'. [#10089](https://github.com/ydb-platform/ydb/pull/10089) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Library import 241004-1110'. [#10090](https://github.com/ydb-platform/ydb/pull/10090) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix allocation cleaning race from separated thread after scope cleani…'. [#10096](https://github.com/ydb-platform/ydb/pull/10096) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YMQ: Fix ProtoToJsonPrinter'. [#10099](https://github.com/ydb-platform/ydb/pull/10099) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  '[dq] Add Top optimizer'. [#10104](https://github.com/ydb-platform/ydb/pull/10104) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Revert "Bestow forward-compatibility with libpq17"'. [#10105](https://github.com/ydb-platform/ydb/pull/10105) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* NO CL ENTRY:  'Library import 241004-1426'. [#10106](https://github.com/ydb-platform/ydb/pull/10106) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix HasValue misuse for LLVM codegen'. [#10111](https://github.com/ydb-platform/ydb/pull/10111) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Fix PDisk race in restart'. [#10113](https://github.com/ydb-platform/ydb/pull/10113) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Do not include "base/base.h" just for NYdbGrpc::IRequestContextBase'. [#10116](https://github.com/ydb-platform/ydb/pull/10116) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'do not include "base/base.h" in the kqp public headers'. [#10120](https://github.com/ydb-platform/ydb/pull/10120) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  '[CBO] Improve Transitive Closure + Cycle processing added'. [#10121](https://github.com/ydb-platform/ydb/pull/10121) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'NodeWarden header optimization'. [#10128](https://github.com/ydb-platform/ydb/pull/10128) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Show YDB Table names, columns in Timeline etc'. [#10134](https://github.com/ydb-platform/ydb/pull/10134) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  '[KQP] turn off CBO IsLookupJoinApplicable for not row column.'. [#10141](https://github.com/ydb-platform/ydb/pull/10141) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'YMQ: fix ReceiveMessage with attributes'. [#10142](https://github.com/ydb-platform/ydb/pull/10142) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  '[KQP] Binary symbols in range breaks plan json and make server crash '. [#10146](https://github.com/ydb-platform/ydb/pull/10146) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'try..catch on svg processing in benchmarks'. [#10149](https://github.com/ydb-platform/ydb/pull/10149) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.23.1)'. [#10158](https://github.com/ydb-platform/ydb/pull/10158) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Disable merges for indexImplTables partitions when build is in progress'. [#10166](https://github.com/ydb-platform/ydb/pull/10166) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Avoid removing empty message'. [#10167](https://github.com/ydb-platform/ydb/pull/10167) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Library import 241007-1548'. [#10186](https://github.com/ydb-platform/ydb/pull/10186) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  '[KQP] fix plan range scan bug with empty string in bounds'. [#10190](https://github.com/ydb-platform/ydb/pull/10190) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  '[KQP] Fix comparison attributes OLAP'. [#10192](https://github.com/ydb-platform/ydb/pull/10192) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Returning upsert test'. [#10195](https://github.com/ydb-platform/ydb/pull/10195) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'YMQ: Add more tests'. [#10203](https://github.com/ydb-platform/ydb/pull/10203) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Merge from Arcadia commit_hash:296137b0e9503a932eeb1bd5586772c9e4d6c1f8"Virtual CreateEncoder in TDynamicCounter…"'. [#10205](https://github.com/ydb-platform/ydb/pull/10205) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Speed up blobstorage build'. [#10220](https://github.com/ydb-platform/ydb/pull/10220) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  '[DQ] Reuse dq validation states'. [#10222](https://github.com/ydb-platform/ydb/pull/10222) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  '[KQP] Make TKqpColumnStatisticsRequester async'. [#10224](https://github.com/ydb-platform/ydb/pull/10224) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Fix tpcds queries numbers'. [#10225](https://github.com/ydb-platform/ydb/pull/10225) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241008-2121'. [#10234](https://github.com/ydb-platform/ydb/pull/10234) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'disable validation for useless columns'. [#10240](https://github.com/ydb-platform/ydb/pull/10240) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241009-1030'. [#10247](https://github.com/ydb-platform/ydb/pull/10247) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Remove tx/datashard -> kicli include dependence'. [#10258](https://github.com/ydb-platform/ydb/pull/10258) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Revert "Yq 3560 Add row dispatcher to dqrun ([#9697](https://github.com/ydb-platform/ydb/issues/9697))"'. [#10266](https://github.com/ydb-platform/ydb/pull/10266) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'fix groups allocation cleaning'. [#10274](https://github.com/ydb-platform/ydb/pull/10274) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'timeout for shard data writing'. [#10275](https://github.com/ydb-platform/ydb/pull/10275) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add query settings in benchmarks'. [#10295](https://github.com/ydb-platform/ydb/pull/10295) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Do not include deprecated/kicli/kicli.h and yaml_config/yaml_config.h lib everywhere'. [#10307](https://github.com/ydb-platform/ydb/pull/10307) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Fix default value'. [#10309](https://github.com/ydb-platform/ydb/pull/10309) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'endpoint slicing support'. [#10313](https://github.com/ydb-platform/ydb/pull/10313) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'check tables size before run bencmarks'. [#10317](https://github.com/ydb-platform/ydb/pull/10317) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Compaction speedup'. [#10323](https://github.com/ydb-platform/ydb/pull/10323) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Plan2svg converter viewer handler'. [#10334](https://github.com/ydb-platform/ydb/pull/10334) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Temporary not check size of lineitems table for big scales of tpch'. [#10336](https://github.com/ydb-platform/ydb/pull/10336) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Do not include grpc_helper.h in to the appdata.h'. [#10337](https://github.com/ydb-platform/ydb/pull/10337) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Fix cmake postcommit'. [#10349](https://github.com/ydb-platform/ydb/pull/10349) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.25.0)'. [#10350](https://github.com/ydb-platform/ydb/pull/10350) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Revert "Do not include grpc_helper.h in to the appdata.h"'. [#10352](https://github.com/ydb-platform/ydb/pull/10352) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix missed include'. [#10353](https://github.com/ydb-platform/ydb/pull/10353) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Do not include grpc_helper.h in to the appdata.h ([#10337](https://github.com/ydb-platform/ydb/issues/10337))'. [#10357](https://github.com/ydb-platform/ydb/pull/10357) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'YMQ: add more tests for Message methods'. [#10359](https://github.com/ydb-platform/ydb/pull/10359) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'API to convert Simplified plan to SVG'. [#10368](https://github.com/ydb-platform/ydb/pull/10368) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'fix splitter condition to avoid split micro-chunks'. [#10375](https://github.com/ydb-platform/ydb/pull/10375) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Handle and log all stat processing issues uniformly'. [#10376](https://github.com/ydb-platform/ydb/pull/10376) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'fix test_clickbench.py'. [#10378](https://github.com/ydb-platform/ydb/pull/10378) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  '[refactoring] Do not include actorsystem.h into actor.h'. [#10394](https://github.com/ydb-platform/ydb/pull/10394) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'dstool cluster balance add --storage-pool, --max-donors-per-pdisk and --sort-by={slots/space_ratio}'. [#10406](https://github.com/ydb-platform/ydb/pull/10406) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'refactoring tpch generator'. [#10414](https://github.com/ydb-platform/ydb/pull/10414) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Collect and send backtraces for tx max/failed allocations in error message'. [#10419](https://github.com/ydb-platform/ydb/pull/10419) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Fix tpch generator'. [#10423](https://github.com/ydb-platform/ydb/pull/10423) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Small speedup tpcds generator'. [#10424](https://github.com/ydb-platform/ydb/pull/10424) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Remove session from pool in case of BAD_SESSION...'. [#10437](https://github.com/ydb-platform/ydb/pull/10437) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  '[refactoring] Do not include grpc_request_proxy.h in each cpp'. [#10451](https://github.com/ydb-platform/ydb/pull/10451) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'YQL: Add DependsOn for ToFlow callable'. [#10457](https://github.com/ydb-platform/ydb/pull/10457) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Vector index coordination [1/N]'. [#10461](https://github.com/ydb-platform/ydb/pull/10461) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Vector index coordination [2/N]'. [#10462](https://github.com/ydb-platform/ydb/pull/10462) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Use simdjson for binary json construction for improved performance'. [#10464](https://github.com/ydb-platform/ydb/pull/10464) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'increase timeout on tpch1000 q09'. [#10492](https://github.com/ydb-platform/ydb/pull/10492) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Vector index coordination: enable local kmeans case'. [#10497](https://github.com/ydb-platform/ydb/pull/10497) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Vector index coordination [3/N]'. [#10498](https://github.com/ydb-platform/ydb/pull/10498) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Library import 241016-1210'. [#10502](https://github.com/ydb-platform/ydb/pull/10502) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'YQL: Improve logs in DQ worker'. [#10504](https://github.com/ydb-platform/ydb/pull/10504) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Enable subqueries inside views'. [#10517](https://github.com/ydb-platform/ydb/pull/10517) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  '[refactoring] Get rid of grpc global request limiter copy-paste code.'. [#10518](https://github.com/ydb-platform/ydb/pull/10518) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Get next val by path id in SequencerActor'. [#10519](https://github.com/ydb-platform/ydb/pull/10519) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  '[CBO] Transitive closure adding conditions to existed edges'. [#10528](https://github.com/ydb-platform/ydb/pull/10528) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Adjust vector index settings'. [#10542](https://github.com/ydb-platform/ydb/pull/10542) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Revert "Removed legacy KV API"'. [#10552](https://github.com/ydb-platform/ydb/pull/10552) ([mregrock](https://github.com/mregrock)).
* NO CL ENTRY:  '[refactoring] Do not include executor_thread.h into actor.h'. [#10562](https://github.com/ydb-platform/ydb/pull/10562) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Add tests for tpc {h | ds} data generator'. [#10564](https://github.com/ydb-platform/ydb/pull/10564) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Public api to return node id in the describe table call'. [#10571](https://github.com/ydb-platform/ydb/pull/10571) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  '[CBO] No join was chosen bug fix'. [#10576](https://github.com/ydb-platform/ydb/pull/10576) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Index build: do not lose the requested partitioning info of indexImplTables in case of SchemeShard reboots'. [#10579](https://github.com/ydb-platform/ydb/pull/10579) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Prefer indices aligned with order-by-limit'. [#10584](https://github.com/ydb-platform/ydb/pull/10584) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'fix import to arcadia'. [#10590](https://github.com/ydb-platform/ydb/pull/10590) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'persqueue: add user-agent counters'. [#10603](https://github.com/ydb-platform/ydb/pull/10603) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Fixed IN with tuple input in some cases'. [#10605](https://github.com/ydb-platform/ydb/pull/10605) ([Vitaly Stoyan](https://github.com/vitstn)).
* NO CL ENTRY:  '[CBO] TEST ASAN FIX'. [#10610](https://github.com/ydb-platform/ydb/pull/10610) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Return export of dynamic symbols'. [#10617](https://github.com/ydb-platform/ydb/pull/10617) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'add some queue for nodes operations'. [#10620](https://github.com/ydb-platform/ydb/pull/10620) ([Sergey J](https://github.com/sourcecd)).
* NO CL ENTRY:  'mute ydb/library/yql/providers/generic/connector/tests/datasource/clickhouse test.py.test_select_datetime[datetime_string_NATIVE-*]'. [#10622](https://github.com/ydb-platform/ydb/pull/10622) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  '[CBO] Remove shared_ptr<> from Statistics'. [#10625](https://github.com/ydb-platform/ydb/pull/10625) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'fix(doc): add info about objects types that allowed for export'. [#10627](https://github.com/ydb-platform/ydb/pull/10627) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Mute ydb/core/kqp/workload_service/ut ResourcePoolClassifiersDdl.TestCreateResourcePoolClassifierOnServerless'. [#10629](https://github.com/ydb-platform/ydb/pull/10629) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 241019-1758'. [#10642](https://github.com/ydb-platform/ydb/pull/10642) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 241021-1020'. [#10656](https://github.com/ydb-platform/ydb/pull/10656) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Canonical results for tpc-h'. [#10669](https://github.com/ydb-platform/ydb/pull/10669) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'AlterColumnTable'. [#10672](https://github.com/ydb-platform/ydb/pull/10672) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'Fix statistics path when use cli'. [#10683](https://github.com/ydb-platform/ydb/pull/10683) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Do not include python codegen into cmake codegen'. [#10697](https://github.com/ydb-platform/ydb/pull/10697) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Pregenerate ydb/core/base/generated for cmake build'. [#10699](https://github.com/ydb-platform/ydb/pull/10699) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'YQL: Skip Hybrid for false UseSystemColumns pragma'. [#10710](https://github.com/ydb-platform/ydb/pull/10710) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Bump clang version to 16 for cmake build'. [#10715](https://github.com/ydb-platform/ydb/pull/10715) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Remove print from dstool cluster balance'. [#10733](https://github.com/ydb-platform/ydb/pull/10733) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  '[KQP] Added join algo hint without CBO'. [#10740](https://github.com/ydb-platform/ydb/pull/10740) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Fix a bug in YQL node creation for indexImplTable table settings'. [#10741](https://github.com/ydb-platform/ydb/pull/10741) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Stabilize DR tests'. [#10750](https://github.com/ydb-platform/ydb/pull/10750) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'ydb_topic: Call non-dataEvent callbacks immediately'. [#10751](https://github.com/ydb-platform/ydb/pull/10751) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Bump tooling clang version to 16 for cmake build'. [#10756](https://github.com/ydb-platform/ydb/pull/10756) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix typo in clang.toolchain'. [#10769](https://github.com/ydb-platform/ydb/pull/10769) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix syntax for Column Family'. [#10781](https://github.com/ydb-platform/ydb/pull/10781) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'fix compilation of SerializeToBinaryJson on macos'. [#10783](https://github.com/ydb-platform/ydb/pull/10783) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Add decimal split boundaries backup / restore test'. [#10790](https://github.com/ydb-platform/ydb/pull/10790) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Fix iterations reporting'. [#10792](https://github.com/ydb-platform/ydb/pull/10792) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Specify only ydb/apps to be built by cmake postcommit check'. [#10808](https://github.com/ydb-platform/ydb/pull/10808) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'prefetch necessary tables before loading'. [#10809](https://github.com/ydb-platform/ydb/pull/10809) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix tx writing limit'. [#10810](https://github.com/ydb-platform/ydb/pull/10810) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct limit for indexation (count of chunks)'. [#10811](https://github.com/ydb-platform/ydb/pull/10811) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'chunks count for limit in compaction'. [#10812](https://github.com/ydb-platform/ydb/pull/10812) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix tx volume calculation for inserted chunks'. [#10813](https://github.com/ydb-platform/ydb/pull/10813) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix error processing on program apply'. [#10814](https://github.com/ydb-platform/ydb/pull/10814) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Temporary patch to dix difference between antlr4.9 and 4.13 behaviour in cmake build'. [#10816](https://github.com/ydb-platform/ydb/pull/10816) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Clean max scalar'. [#10826](https://github.com/ydb-platform/ydb/pull/10826) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Append TOKEN antlr patch to non-sanitizer build'. [#10829](https://github.com/ydb-platform/ydb/pull/10829) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Views: if exists / if not exists for DDL'. [#10831](https://github.com/ydb-platform/ydb/pull/10831) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Fix ccache credentials for cmake build'. [#10833](https://github.com/ydb-platform/ydb/pull/10833) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Return C compiler env var to cmake build job'. [#10834](https://github.com/ydb-platform/ydb/pull/10834) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.28.0)'. [#10836](https://github.com/ydb-platform/ydb/pull/10836) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix windows build'. [#10841](https://github.com/ydb-platform/ydb/pull/10841) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix username link for ccache'. [#10847](https://github.com/ydb-platform/ydb/pull/10847) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix darwin build'. [#10851](https://github.com/ydb-platform/ydb/pull/10851) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Add clickbench performance tests on PostgreSQL syntax over YDB'. [#10861](https://github.com/ydb-platform/ydb/pull/10861) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'correct and speed up compaction'. [#10867](https://github.com/ydb-platform/ydb/pull/10867) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'persqueue: fix user agent counters'. [#10874](https://github.com/ydb-platform/ydb/pull/10874) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'remove schema from table version'. [#10878](https://github.com/ydb-platform/ydb/pull/10878) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Vector index coordination: fix issues'. [#10889](https://github.com/ydb-platform/ydb/pull/10889) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Add simple UT for storage load test actor.'. [#10894](https://github.com/ydb-platform/ydb/pull/10894) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'add pg syntax to tpch and tpcds benchmarks'. [#10896](https://github.com/ydb-platform/ydb/pull/10896) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Enable Column tables by default'. [#10906](https://github.com/ydb-platform/ydb/pull/10906) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Use data, empty and size instead of Data, Empty and Size for TString'. [#10917](https://github.com/ydb-platform/ydb/pull/10917) ([Mikhnenko Sasha](https://github.com/4JustMe4)).
* NO CL ENTRY:  'Implementation of api which can return key_range -> nodeId mapping'. [#10935](https://github.com/ydb-platform/ydb/pull/10935) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Add a feature flag controlling separate disk space quotas accounting'. [#10936](https://github.com/ydb-platform/ydb/pull/10936) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Fix bugs in progress bar working with import benchmarks'. [#10939](https://github.com/ydb-platform/ydb/pull/10939) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix results uploading for Clickbench'. [#10943](https://github.com/ydb-platform/ydb/pull/10943) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix clickbench verification report sending'. [#10950](https://github.com/ydb-platform/ydb/pull/10950) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Diff schemas'. [#10958](https://github.com/ydb-platform/ydb/pull/10958) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Use scale in tpc* queries'. [#10963](https://github.com/ydb-platform/ydb/pull/10963) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Support Serial for non-key columns'. [#10965](https://github.com/ydb-platform/ydb/pull/10965) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Records usage cleaning'. [#10971](https://github.com/ydb-platform/ydb/pull/10971) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Preparation for clang-18 migration'. [#10983](https://github.com/ydb-platform/ydb/pull/10983) ([Dmitry Nechitaev](https://github.com/Nechda)).
* NO CL ENTRY:  'Test for scale factor in tpch queries'. [#10990](https://github.com/ydb-platform/ydb/pull/10990) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix abort on invalid null value parsing in BinaryJson'. [#10991](https://github.com/ydb-platform/ydb/pull/10991) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'bugfix for incorrect event scheduling when EnableStatistics is disabled'. [#10995](https://github.com/ydb-platform/ydb/pull/10995) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* NO CL ENTRY:  'Init counter for pqv0 read session'. [#10996](https://github.com/ydb-platform/ydb/pull/10996) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Multiple channels for external blobs'. [#10998](https://github.com/ydb-platform/ydb/pull/10998) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Pretty print diff in benchmarks'. [#11002](https://github.com/ydb-platform/ydb/pull/11002) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Canonical request for tpc-h pg syntax'. [#11018](https://github.com/ydb-platform/ydb/pull/11018) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241028-2033'. [#11021](https://github.com/ydb-platform/ydb/pull/11021) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Mute ydb/library/yql/providers/generic/connector/tests/datasource/ms_…'. [#11031](https://github.com/ydb-platform/ydb/pull/11031) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Mute ydb/tests/fq/yds test_row_dispatcher.py.TestPqRowDispatcher.test…'. [#11048](https://github.com/ydb-platform/ydb/pull/11048) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Pretty print results in benchmarks'. [#11050](https://github.com/ydb-platform/ydb/pull/11050) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Skipping unneeded DataShards during object storage listing'. [#11053](https://github.com/ydb-platform/ydb/pull/11053) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'data accessor has to own portion info'. [#11060](https://github.com/ydb-platform/ydb/pull/11060) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'canonical result for tpch s10-s1000'. [#11066](https://github.com/ydb-platform/ydb/pull/11066) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'canonize tpch 10000 results'. [#11069](https://github.com/ydb-platform/ydb/pull/11069) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Mark core/health_check as MEDIUM test (because asan timing out)'. [#11072](https://github.com/ydb-platform/ydb/pull/11072) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Optimize attribute fetch loop for source tables in YT'. [#11073](https://github.com/ydb-platform/ydb/pull/11073) ([Dmitry O](https://github.com/alephonea)).
* NO CL ENTRY:  'Use portion data accessor'. [#11074](https://github.com/ydb-platform/ydb/pull/11074) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix issue [#9461](https://github.com/ydb-platform/ydb/issues/9461) with altering CDC streams'. [#11077](https://github.com/ydb-platform/ydb/pull/11077) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Add Logs Command to allure report'. [#11082](https://github.com/ydb-platform/ydb/pull/11082) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'actualize local db for columnshards'. [#11115](https://github.com/ydb-platform/ydb/pull/11115) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix canonical results for tpch1000'. [#11121](https://github.com/ydb-platform/ydb/pull/11121) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'precalculate storage ids for index info'. [#11127](https://github.com/ydb-platform/ydb/pull/11127) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add span to ExecuteQueryRPC'. [#11135](https://github.com/ydb-platform/ydb/pull/11135) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'refactoring for ya.make with tpc* resources'. [#11136](https://github.com/ydb-platform/ydb/pull/11136) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Add more tests.'. [#11160](https://github.com/ydb-platform/ydb/pull/11160) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'column chunks v1 schema'. [#11161](https://github.com/ydb-platform/ydb/pull/11161) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241031-1710'. [#11165](https://github.com/ydb-platform/ydb/pull/11165) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix status on stop part session'. [#11170](https://github.com/ydb-platform/ydb/pull/11170) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'TPC-DS queries as in specification about qualification'. [#11172](https://github.com/ydb-platform/ydb/pull/11172) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Canonical results for TPC-DS scale 1'. [#11173](https://github.com/ydb-platform/ydb/pull/11173) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix vector index billing'. [#11174](https://github.com/ydb-platform/ydb/pull/11174) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Add tsv and csv with header to result set printer.'. [#11178](https://github.com/ydb-platform/ydb/pull/11178) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix v1 chunks processing'. [#11180](https://github.com/ydb-platform/ydb/pull/11180) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241102-0844'. [#11209](https://github.com/ydb-platform/ydb/pull/11209) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix typos in BUILD.md and update "Install dependencies" section'. [#11213](https://github.com/ydb-platform/ydb/pull/11213) ([Ilya Dzenzelyuk](https://github.com/dzen03)).
* NO CL ENTRY:  'Drop the suffix after the first left parenthesis from UserAgent'. [#11228](https://github.com/ydb-platform/ydb/pull/11228) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'ChaCha AVX512 runtime dispatch improvement'. [#11230](https://github.com/ydb-platform/ydb/pull/11230) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'delete empty files'. [#11237](https://github.com/ydb-platform/ydb/pull/11237) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Fix use after move'. [#11239](https://github.com/ydb-platform/ydb/pull/11239) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Don't count ToFlow children twice & print BlockCombineHashed as Aggregation'. [#11245](https://github.com/ydb-platform/ydb/pull/11245) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Async fetch portion data access info'. [#11246](https://github.com/ydb-platform/ydb/pull/11246) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'clarify ActualizationIndex ownership'. [#11247](https://github.com/ydb-platform/ydb/pull/11247) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Add table id to DataShard integrity trails'. [#11248](https://github.com/ydb-platform/ydb/pull/11248) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Don't use random scan cookie for build index'. [#11256](https://github.com/ydb-platform/ydb/pull/11256) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  '[KQP] fix column statistics requester non exist column bug'. [#11277](https://github.com/ydb-platform/ydb/pull/11277) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'ensure reads are sequential'. [#11280](https://github.com/ydb-platform/ydb/pull/11280) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'Use one shared data for the entire test.'. [#11281](https://github.com/ydb-platform/ydb/pull/11281) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  '[TKqpExecuter] if got poisoned - die silently'. [#11286](https://github.com/ydb-platform/ydb/pull/11286) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'fix error on start internal scanner'. [#11289](https://github.com/ydb-platform/ydb/pull/11289) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'do not use basic statistics if it is not fully gathered in schemeshard'. [#11291](https://github.com/ydb-platform/ydb/pull/11291) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* NO CL ENTRY:  'Fix diff in tpcds generaor'. [#11294](https://github.com/ydb-platform/ydb/pull/11294) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'YQL: Load binaries from YT binary cache'. [#11295](https://github.com/ydb-platform/ydb/pull/11295) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'fix normalizers for v1 migration chunks'. [#11308](https://github.com/ydb-platform/ydb/pull/11308) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Unmute stable tests'. [#11334](https://github.com/ydb-platform/ydb/pull/11334) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Mute flaky tests'. [#11350](https://github.com/ydb-platform/ydb/pull/11350) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Don't crash node in the case of duplicate tag.'. [#11370](https://github.com/ydb-platform/ydb/pull/11370) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'EnableTempTables true'. [#11381](https://github.com/ydb-platform/ydb/pull/11381) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Temporary switch off canonization for tpch 1k+'. [#11385](https://github.com/ydb-platform/ydb/pull/11385) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Split portion and chunks'. [#11386](https://github.com/ydb-platform/ydb/pull/11386) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'add tiering info to TTL in public api'. [#11390](https://github.com/ydb-platform/ydb/pull/11390) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Direct read restore session on tablet restarts'. [#11395](https://github.com/ydb-platform/ydb/pull/11395) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Library import 241108-0852'. [#11399](https://github.com/ydb-platform/ydb/pull/11399) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Canonical results for tpcds s1'. [#11402](https://github.com/ydb-platform/ydb/pull/11402) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Unmute ydb_persqueue_public chunks'. [#11408](https://github.com/ydb-platform/ydb/pull/11408) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Move balancer to batch pool'. [#11420](https://github.com/ydb-platform/ydb/pull/11420) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Fix arithmetic in tpcds queries and switch on checking answers for tpcds s1'. [#11425](https://github.com/ydb-platform/ydb/pull/11425) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Mergelibs + YQL moving'. [#11427](https://github.com/ydb-platform/ydb/pull/11427) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  '[yt provider] Bypass YtCopy before YtLength'. [#11436](https://github.com/ydb-platform/ydb/pull/11436) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Support alter sequence restart with'. [#11447](https://github.com/ydb-platform/ydb/pull/11447) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Revert "Enabled column statistics by default"'. [#11455](https://github.com/ydb-platform/ydb/pull/11455) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Exclude yt/provider/ut'. [#11473](https://github.com/ydb-platform/ydb/pull/11473) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'TPC-H 1000 iterations 3->2'. [#11477](https://github.com/ydb-platform/ydb/pull/11477) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Symbol `\` is not allowed in ESCAPE clause'. [#11486](https://github.com/ydb-platform/ydb/pull/11486) ([amikish](https://github.com/amikish)).
* NO CL ENTRY:  'Fix memory leak in case of launch periodic keep-alive task for query service session'. [#11489](https://github.com/ydb-platform/ydb/pull/11489) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'wait cluster alife before check tables size'. [#11496](https://github.com/ydb-platform/ydb/pull/11496) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix test and correct normalizer conditions'. [#11504](https://github.com/ydb-platform/ydb/pull/11504) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'dont scan unappropriate portions in tiering'. [#11509](https://github.com/ydb-platform/ydb/pull/11509) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert "Break persistent locks on scheme tx"'. [#11515](https://github.com/ydb-platform/ydb/pull/11515) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* NO CL ENTRY:  'check tablets state on cluster life check'. [#11518](https://github.com/ydb-platform/ydb/pull/11518) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Revert "EvWrite: add mvcc snapshot"'. [#11534](https://github.com/ydb-platform/ydb/pull/11534) ([Nikita Vasilev](https://github.com/nikvas0)).
* NO CL ENTRY:  'Check if tables has no tablets, send database param'. [#11538](https://github.com/ydb-platform/ydb/pull/11538) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Parallel local kmeans in schemeshard'. [#11539](https://github.com/ydb-platform/ydb/pull/11539) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Fix balancing checking'. [#11540](https://github.com/ydb-platform/ydb/pull/11540) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'do not check storage nodes'. [#11541](https://github.com/ydb-platform/ydb/pull/11541) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix list dir signature'. [#11550](https://github.com/ydb-platform/ydb/pull/11550) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'native memory control'. [#11559](https://github.com/ydb-platform/ydb/pull/11559) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'switch off  balance check in perf tests'. [#11560](https://github.com/ydb-platform/ydb/pull/11560) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Add YQL_BASE_TEST_DIR'. [#11563](https://github.com/ydb-platform/ydb/pull/11563) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'fix compaction memory prediction for special case'. [#11565](https://github.com/ydb-platform/ydb/pull/11565) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Mergelibs yurchuk manual'. [#11568](https://github.com/ydb-platform/ydb/pull/11568) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'fix node checking'. [#11578](https://github.com/ydb-platform/ydb/pull/11578) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'use external data sources as tiers in cs'. [#11581](https://github.com/ydb-platform/ydb/pull/11581) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'fix normalization processing'. [#11583](https://github.com/ydb-platform/ydb/pull/11583) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Update query_replay'. [#11586](https://github.com/ydb-platform/ydb/pull/11586) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'Fix formatting typos in SVG gen'. [#11588](https://github.com/ydb-platform/ydb/pull/11588) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  '[from rightlib] Automatic release build for test_tool, os_ya, ya_bin, os_test_tool'. [#11597](https://github.com/ydb-platform/ydb/pull/11597) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Return get_unique_path_for_current_test and some more (broken arcadia)'. [#11598](https://github.com/ydb-platform/ydb/pull/11598) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix some artifacts of yql move'. [#11609](https://github.com/ydb-platform/ydb/pull/11609) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'parse TTL syntax with tiering on KQP'. [#11613](https://github.com/ydb-platform/ydb/pull/11613) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Add stop condition for kmeans'. [#11617](https://github.com/ydb-platform/ydb/pull/11617) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Use query service in suite tests'. [#11618](https://github.com/ydb-platform/ydb/pull/11618) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'CI codeowners for yql'. [#11619](https://github.com/ydb-platform/ydb/pull/11619) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Drop moved dir'. [#11620](https://github.com/ydb-platform/ydb/pull/11620) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'fix test timeouts'. [#11623](https://github.com/ydb-platform/ydb/pull/11623) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* NO CL ENTRY:  'Revert "YT block input fix for empty input"'. [#11624](https://github.com/ydb-platform/ydb/pull/11624) ([Andrey Neporada](https://github.com/nepal)).
* NO CL ENTRY:  'Change priority for rule NonOptimalTableContent'. [#11625](https://github.com/ydb-platform/ydb/pull/11625) ([Dmitry O](https://github.com/alephonea)).
* NO CL ENTRY:  'Repair portions and async proto parser'. [#11636](https://github.com/ydb-platform/ydb/pull/11636) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'SQS: handle empty QueueUrl correctly'. [#11652](https://github.com/ydb-platform/ydb/pull/11652) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'switch on blancing checking'. [#11668](https://github.com/ydb-platform/ydb/pull/11668) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'prohibit creating secrets with duplicating names'. [#11680](https://github.com/ydb-platform/ydb/pull/11680) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Refactoring parsing of nodes info response from cluster'. [#11681](https://github.com/ydb-platform/ydb/pull/11681) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Leak bs normalizer'. [#11682](https://github.com/ydb-platform/ydb/pull/11682) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'move nullable control into data checker'. [#11685](https://github.com/ydb-platform/ydb/pull/11685) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Correct get schema validations'. [#11686](https://github.com/ydb-platform/ydb/pull/11686) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix filter usage for sequential assembling'. [#11687](https://github.com/ydb-platform/ydb/pull/11687) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'ChaCha AVX512 fix hotpath if'. [#11699](https://github.com/ydb-platform/ydb/pull/11699) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'include tiering configuration in ttl docs'. [#11704](https://github.com/ydb-platform/ydb/pull/11704) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'YQL-18029: Make BinaryCacheFolder pragma cluster-specific'. [#11707](https://github.com/ydb-platform/ydb/pull/11707) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'feat(kqp): add pragma for sequential reads'. [#11715](https://github.com/ydb-platform/ydb/pull/11715) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'fix exception processing'. [#11728](https://github.com/ydb-platform/ydb/pull/11728) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix chunks reorder on loading'. [#11736](https://github.com/ydb-platform/ydb/pull/11736) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add tests for init queries in benchmarks'. [#11739](https://github.com/ydb-platform/ydb/pull/11739) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Improve compute nodes database error message'. [#11750](https://github.com/ydb-platform/ydb/pull/11750) ([neimadTL](https://github.com/NeimadTL)).
* NO CL ENTRY:  'SQS: Fix TimeoutCookie_ leak'. [#11762](https://github.com/ydb-platform/ydb/pull/11762) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'fix reading logic in case memory control'. [#11768](https://github.com/ydb-platform/ydb/pull/11768) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix tpch pg queries, make they as yql ones'. [#11782](https://github.com/ydb-platform/ydb/pull/11782) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241120-1113'. [#11788](https://github.com/ydb-platform/ydb/pull/11788) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'accessors memory control for scan'. [#11792](https://github.com/ydb-platform/ydb/pull/11792) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Put log chunks from killed owners on quarantine, if owner is still reading log'. [#11795](https://github.com/ydb-platform/ydb/pull/11795) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Port changes from arcadia'. [#11796](https://github.com/ydb-platform/ydb/pull/11796) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Release in nightly  build fix'. [#11799](https://github.com/ydb-platform/ydb/pull/11799) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Sync EvaluteExpr execution'. [#11801](https://github.com/ydb-platform/ydb/pull/11801) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Fix dq/hybrid tests'. [#11808](https://github.com/ydb-platform/ydb/pull/11808) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'use yaml for table description instead yql'. [#11811](https://github.com/ydb-platform/ydb/pull/11811) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Accessors memory limit on background'. [#11816](https://github.com/ydb-platform/ydb/pull/11816) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'build: refresh Embedded UI (v6.36.1)'. [#11833](https://github.com/ydb-platform/ydb/pull/11833) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix filter usage for partial reading'. [#11835](https://github.com/ydb-platform/ydb/pull/11835) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix blobstorage crypto module build for aarch64'. [#11840](https://github.com/ydb-platform/ydb/pull/11840) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'increase timeout on tpch 1000'. [#11850](https://github.com/ydb-platform/ydb/pull/11850) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Correct Rows count in MultiType Input Channels'. [#11859](https://github.com/ydb-platform/ydb/pull/11859) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'add subcodes to tx-proxy reply code counters'. [#11862](https://github.com/ydb-platform/ydb/pull/11862) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'validate dangerouse construction'. [#11873](https://github.com/ydb-platform/ydb/pull/11873) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241122-0919'. [#11877](https://github.com/ydb-platform/ydb/pull/11877) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Enabled by default enable_antlr4_parser feature-flag for ydb tests and local-ydb docker image'. [#11880](https://github.com/ydb-platform/ydb/pull/11880) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* NO CL ENTRY:  'Revert "Support arbitrary chain set in huge blob keeper heap ([#11566](https://github.com/ydb-platform/ydb/issues/11566))"'. [#11891](https://github.com/ydb-platform/ydb/pull/11891) ([Alexander Rutkovsky](https://github.com/alexvru)).
* NO CL ENTRY:  'Correct Rows count in Block Output Channels'. [#11893](https://github.com/ydb-platform/ydb/pull/11893) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Simple reader'. [#11894](https://github.com/ydb-platform/ydb/pull/11894) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241123-2111'. [#11909](https://github.com/ydb-platform/ydb/pull/11909) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Check custom error in xfail tests. Remove canonization from dq/hybrid tests'. [#11910](https://github.com/ydb-platform/ydb/pull/11910) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Set position to state only if all data portions succesfully send'. [#11912](https://github.com/ydb-platform/ydb/pull/11912) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix and simplify logic with multiprocess TPC-* data generation'. [#11913](https://github.com/ydb-platform/ydb/pull/11913) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix empty variable usage'. [#11926](https://github.com/ydb-platform/ydb/pull/11926) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Accept True in stability test'. [#11932](https://github.com/ydb-platform/ydb/pull/11932) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'dry-run mode for CS normalizers'. [#11934](https://github.com/ydb-platform/ydb/pull/11934) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Fix paths in uig.sh helper'. [#11939](https://github.com/ydb-platform/ydb/pull/11939) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  '[CBO] user warning added if cbo didn't work'. [#11950](https://github.com/ydb-platform/ydb/pull/11950) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Switch on check canonical results for tpch 1k and 10k'. [#11951](https://github.com/ydb-platform/ydb/pull/11951) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'YQL: Add metrics for YT binary cache'. [#11953](https://github.com/ydb-platform/ydb/pull/11953) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Better filter expressions'. [#11956](https://github.com/ydb-platform/ydb/pull/11956) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'additional coredumps info'. [#11960](https://github.com/ydb-platform/ydb/pull/11960) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert "Support arbitrary chain set in huge blob keeper heap"'. [#11961](https://github.com/ydb-platform/ydb/pull/11961) ([Alexander Rutkovsky](https://github.com/alexvru)).
* NO CL ENTRY:  'fix request shard count sensor'. [#11962](https://github.com/ydb-platform/ydb/pull/11962) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Fix: vector index description wasn't persisted'. [#11969](https://github.com/ydb-platform/ydb/pull/11969) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Add a scenario test for alter/set compression'. [#11982](https://github.com/ydb-platform/ydb/pull/11982) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'fix simple reading with accessors fetching'. [#12000](https://github.com/ydb-platform/ydb/pull/12000) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add canonical result for tpcds s10 and s100'. [#12001](https://github.com/ydb-platform/ydb/pull/12001) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241126-1510'. [#12017](https://github.com/ydb-platform/ydb/pull/12017) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'refactor(kqp_table_resolver): add table path to scheme error message'. [#12027](https://github.com/ydb-platform/ydb/pull/12027) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'blob writing error processing for portion-write-mode'. [#12029](https://github.com/ydb-platform/ydb/pull/12029) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'zip canonical results for tpcds s1'. [#12032](https://github.com/ydb-platform/ydb/pull/12032) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  '[KQP] Use query service in join order tests instead of scan service'. [#12033](https://github.com/ydb-platform/ydb/pull/12033) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Fix hanging control'. [#12051](https://github.com/ydb-platform/ydb/pull/12051) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix tpcds s10 and s100 canonical results'. [#12063](https://github.com/ydb-platform/ydb/pull/12063) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix tpcds s100 q39 canonical result'. [#12069](https://github.com/ydb-platform/ydb/pull/12069) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix canonical data for tpcds s10 q39'. [#12087](https://github.com/ydb-platform/ydb/pull/12087) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241128-1021'. [#12088](https://github.com/ydb-platform/ydb/pull/12088) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'tests of ttl utility functions on SS'. [#12092](https://github.com/ydb-platform/ydb/pull/12092) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'configure tiering on CS via ttl'. [#12095](https://github.com/ydb-platform/ydb/pull/12095) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Library import 241128-1502'. [#12104](https://github.com/ydb-platform/ydb/pull/12104) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Apply arcadia changes'. [#12106](https://github.com/ydb-platform/ydb/pull/12106) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Fix build for windows'. [#12115](https://github.com/ydb-platform/ydb/pull/12115) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Improve read table test coverage: ut to read one row from table by StreamReadTable call'. [#12118](https://github.com/ydb-platform/ydb/pull/12118) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'fix drop column & reset ttl in one TX on CS'. [#12127](https://github.com/ydb-platform/ydb/pull/12127) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Fix tpch s1 q09 canonical data'. [#12133](https://github.com/ydb-platform/ydb/pull/12133) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Scenario test for issue: [#11186](https://github.com/ydb-platform/ydb/issues/11186)'. [#12138](https://github.com/ydb-platform/ydb/pull/12138) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* NO CL ENTRY:  'Fix test.py::test[produce-reduce_multi_in-empty]'. [#12141](https://github.com/ydb-platform/ydb/pull/12141) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Library import 241129-1330'. [#12145](https://github.com/ydb-platform/ydb/pull/12145) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'avoid changing shardstate reads list during iteration'. [#12150](https://github.com/ydb-platform/ydb/pull/12150) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'minor fixes of TTL in SDK'. [#12152](https://github.com/ydb-platform/ydb/pull/12152) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Func test for TPC-H'. [#12155](https://github.com/ydb-platform/ydb/pull/12155) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241130-1815'. [#12156](https://github.com/ydb-platform/ydb/pull/12156) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'lock categories to control different lock-purposes'. [#12163](https://github.com/ydb-platform/ydb/pull/12163) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Speed up SIMPLE scanner'. [#12164](https://github.com/ydb-platform/ydb/pull/12164) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Get rid of repo shallow clone'. [#12209](https://github.com/ydb-platform/ydb/pull/12209) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix TTL initialization from DB on CS'. [#12210](https://github.com/ydb-platform/ydb/pull/12210) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'Library import 241202-1453'. [#12215](https://github.com/ydb-platform/ydb/pull/12215) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Mute tests'. [#12228](https://github.com/ydb-platform/ydb/pull/12228) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 241203-0816'. [#12236](https://github.com/ydb-platform/ydb/pull/12236) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 241203-1217'. [#12248](https://github.com/ydb-platform/ydb/pull/12248) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix cleanup volume limits and speed up versions index copy'. [#12249](https://github.com/ydb-platform/ydb/pull/12249) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'writing enabled flag for ev write'. [#12250](https://github.com/ydb-platform/ydb/pull/12250) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert "Refactor harmonizer in actorsystem"'. [#12254](https://github.com/ydb-platform/ydb/pull/12254) ([kruall](https://github.com/kruall)).
* NO CL ENTRY:  'ReadOnly pdisk'. [#12256](https://github.com/ydb-platform/ydb/pull/12256) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Truncate query results output in benchmarks'. [#12263](https://github.com/ydb-platform/ydb/pull/12263) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Create db and use it in functional tpc tests'. [#12264](https://github.com/ydb-platform/ydb/pull/12264) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'compaction. lc levels configuration'. [#12273](https://github.com/ydb-platform/ydb/pull/12273) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct synchronization after tablet reboot'. [#12296](https://github.com/ydb-platform/ydb/pull/12296) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241204-1715'. [#12297](https://github.com/ydb-platform/ydb/pull/12297) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 241204-2036'. [#12299](https://github.com/ydb-platform/ydb/pull/12299) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Snapshot livetime control'. [#12301](https://github.com/ydb-platform/ydb/pull/12301) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix parsing multiple csv columns with escaped quotes in `ydb import file csv`'. [#12304](https://github.com/ydb-platform/ydb/pull/12304) ([Nikolay Perfilov](https://github.com/pnv1)).
* NO CL ENTRY:  'Library import 241205-0959'. [#12310](https://github.com/ydb-platform/ydb/pull/12310) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Autofix CMakeLists conflicts on Sync to cmakebuild'. [#12330](https://github.com/ydb-platform/ydb/pull/12330) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix script construction'. [#12332](https://github.com/ydb-platform/ydb/pull/12332) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Use yql in CREATE TABLE in simple_queue'. [#12336](https://github.com/ydb-platform/ydb/pull/12336) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Mute ydb/core/blobstorage/ut_vdisk2 VDiskTest.HugeBlobWrite'. [#12340](https://github.com/ydb-platform/ydb/pull/12340) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix TArrowBlock::From usage for temporary objects in DQ sources'. [#12341](https://github.com/ydb-platform/ydb/pull/12341) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'register memory allocated for metadata in tiering actualizer'. [#12348](https://github.com/ydb-platform/ydb/pull/12348) ([Semyon](https://github.com/swalrus1)).
* NO CL ENTRY:  'fix normalizer checker'. [#12350](https://github.com/ydb-platform/ydb/pull/12350) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix compaction levels constuction'. [#12351](https://github.com/ydb-platform/ydb/pull/12351) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix(kqp): allow null keys for stream join with secondary index'. [#12363](https://github.com/ydb-platform/ydb/pull/12363) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Cli parquet'. [#12372](https://github.com/ydb-platform/ydb/pull/12372) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'alter columns for many columns in time'. [#12378](https://github.com/ydb-platform/ydb/pull/12378) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Set tcmalloc soft limit when profiling memory allocations'. [#12379](https://github.com/ydb-platform/ydb/pull/12379) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'dont use default columns for merger'. [#12380](https://github.com/ydb-platform/ydb/pull/12380) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'split logging services through huge messages volume in summary logs'. [#12382](https://github.com/ydb-platform/ydb/pull/12382) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'dont use removed portions before remove from local_db - prevent race …'. [#12383](https://github.com/ydb-platform/ydb/pull/12383) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix compaction policy modification'. [#12384](https://github.com/ydb-platform/ydb/pull/12384) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Reader iterator unification'. [#12387](https://github.com/ydb-platform/ydb/pull/12387) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'scan policy sql control'. [#12400](https://github.com/ydb-platform/ydb/pull/12400) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'channels count fix for standalone table'. [#12410](https://github.com/ydb-platform/ydb/pull/12410) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* NO CL ENTRY:  'Check EnforceUserTokenRequirement together with RequireCredentialsInNewProtocol (and set the latter's default to false)'. [#12411](https://github.com/ydb-platform/ydb/pull/12411) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Support alter sequence in yql'. [#12413](https://github.com/ydb-platform/ydb/pull/12413) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'portions index simplification'. [#12414](https://github.com/ydb-platform/ydb/pull/12414) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'mute blinking hive test'. [#12417](https://github.com/ydb-platform/ydb/pull/12417) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'VIEW: local backup (ydb tools dump and restore)'. [#12438](https://github.com/ydb-platform/ydb/pull/12438) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Library import 241210-0813'. [#12445](https://github.com/ydb-platform/ydb/pull/12445) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Revert MinFillPercentage usage in Dq'. [#12458](https://github.com/ydb-platform/ydb/pull/12458) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'Prepare test to migration'. [#12473](https://github.com/ydb-platform/ydb/pull/12473) ([Dmitry Nechitaev](https://github.com/Nechda)).
* NO CL ENTRY:  'scan optimization for filter applying in case simple chunks'. [#12476](https://github.com/ydb-platform/ydb/pull/12476) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add column mode in simple_queue'. [#12480](https://github.com/ydb-platform/ydb/pull/12480) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 241210-1802'. [#12481](https://github.com/ydb-platform/ydb/pull/12481) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'YQL: Skip Hybrid at Dq timeout'. [#12487](https://github.com/ydb-platform/ydb/pull/12487) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'Move ydb/core/io_formats/arrow/csv_arrow ->ydb/library/formats/arrow/csv/converter'. [#12492](https://github.com/ydb-platform/ydb/pull/12492) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'build: refresh Embedded UI (v7.2.0)'. [#12500](https://github.com/ydb-platform/ydb/pull/12500) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Standalone tool for nemesis'. [#12502](https://github.com/ydb-platform/ydb/pull/12502) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'commit processing fixes'. [#12519](https://github.com/ydb-platform/ydb/pull/12519) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Per Operator Stats'. [#12522](https://github.com/ydb-platform/ydb/pull/12522) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'add dependence to ydb/library/formats/arrow/csv'. [#12528](https://github.com/ydb-platform/ydb/pull/12528) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'v2 portions usage only available'. [#12530](https://github.com/ydb-platform/ydb/pull/12530) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Use QueryService by default (`--executer generic`) in `ydb workload kv` and `ydb workload stock` commands'. [#12532](https://github.com/ydb-platform/ydb/pull/12532) ([Nikolay Perfilov](https://github.com/pnv1)).
* NO CL ENTRY:  'fix validation in case removed table indexation'. [#12541](https://github.com/ydb-platform/ydb/pull/12541) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix states usage for accessors request filling'. [#12553](https://github.com/ydb-platform/ydb/pull/12553) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix(kqp): disable stream join for joins with non-pk columns in predicate'. [#12573](https://github.com/ydb-platform/ydb/pull/12573) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'DQRun + OOM helper'. [#12583](https://github.com/ydb-platform/ydb/pull/12583) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Add extra credentials for YQL plugin.'. [#12584](https://github.com/ydb-platform/ydb/pull/12584) ([Tony-Romanov](https://github.com/Tony-Romanov)).
* NO CL ENTRY:  'Fix incorrect Uuid serialization for CDC.'. [#12587](https://github.com/ydb-platform/ydb/pull/12587) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Disable metering in tasks without custom inputs'. [#12594](https://github.com/ydb-platform/ydb/pull/12594) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'YMQ JSON API: send metering events'. [#12599](https://github.com/ydb-platform/ydb/pull/12599) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Library import 241213-1023'. [#12602](https://github.com/ydb-platform/ydb/pull/12602) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix address construction for abstract chunked array'. [#12614](https://github.com/ydb-platform/ydb/pull/12614) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix allocations validator'. [#12616](https://github.com/ydb-platform/ydb/pull/12616) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Mute test'. [#12617](https://github.com/ydb-platform/ydb/pull/12617) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* NO CL ENTRY:  'Reject requests after getting close session request.'. [#12618](https://github.com/ydb-platform/ydb/pull/12618) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'fix allocations manager limits control'. [#12622](https://github.com/ydb-platform/ydb/pull/12622) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'dont reallocate memory after merge through incorrect memory consumpti…'. [#12623](https://github.com/ydb-platform/ydb/pull/12623) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix Typo in go sdk documentation'. [#12627](https://github.com/ydb-platform/ydb/pull/12627) ([Бордюгов Максим](https://github.com/DedAzaMarks)).
* NO CL ENTRY:  'Library import 241216-0851'. [#12632](https://github.com/ydb-platform/ydb/pull/12632) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix incorrect default storage id for count min sketch index'. [#12643](https://github.com/ydb-platform/ydb/pull/12643) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'YMQ metering: add test'. [#12645](https://github.com/ydb-platform/ydb/pull/12645) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'fix tx ask hard processing'. [#12648](https://github.com/ydb-platform/ydb/pull/12648) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Move TEventPBBase::ToString() implementation out of *.h file'. [#12653](https://github.com/ydb-platform/ydb/pull/12653) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Add policy for check canonical results. Check some as warning'. [#12654](https://github.com/ydb-platform/ydb/pull/12654) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 241216-1701'. [#12655](https://github.com/ydb-platform/ydb/pull/12655) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'remove CloseSessionWithLoadTest from muted tests list'. [#12681](https://github.com/ydb-platform/ydb/pull/12681) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'fix memory hold after writing aborted'. [#12682](https://github.com/ydb-platform/ydb/pull/12682) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Make DQ and KQP use both WideStream and WideFlow for WideFromBlocks'. [#12691](https://github.com/ydb-platform/ydb/pull/12691) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Library import 241218-0753'. [#12697](https://github.com/ydb-platform/ydb/pull/12697) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'reuse YdbCluster.reset'. [#12698](https://github.com/ydb-platform/ydb/pull/12698) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'ask accessors for mark to remove portions too'. [#12699](https://github.com/ydb-platform/ydb/pull/12699) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Initialize YmqIsFifo'. [#12720](https://github.com/ydb-platform/ydb/pull/12720) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'feat(data_integrity_trails): add configurable log modes for query_text and pk'. [#12732](https://github.com/ydb-platform/ydb/pull/12732) ([Iuliia Sidorina ](https://github.com/ulya-sidorina)).
* NO CL ENTRY:  'Get logs from kube in load tests'. [#12734](https://github.com/ydb-platform/ydb/pull/12734) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'add validation for incorrect blob writing'. [#12758](https://github.com/ydb-platform/ydb/pull/12758) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241219-0815'. [#12761](https://github.com/ydb-platform/ydb/pull/12761) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add query_prefix to query params and switch off grace join in tpcds s10 q72'. [#12764](https://github.com/ydb-platform/ydb/pull/12764) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Remove obsolete from harness'. [#12774](https://github.com/ydb-platform/ydb/pull/12774) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'fix sys view chunks reply construction'. [#12787](https://github.com/ydb-platform/ydb/pull/12787) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'switchable slices filter'. [#12791](https://github.com/ydb-platform/ydb/pull/12791) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix clickbench.py'. [#12802](https://github.com/ydb-platform/ydb/pull/12802) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'DataStreams: Fix TestPutRecordsCornerCases'. [#12816](https://github.com/ydb-platform/ydb/pull/12816) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Add commands into stability/library'. [#12823](https://github.com/ydb-platform/ydb/pull/12823) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Export views'. [#12824](https://github.com/ydb-platform/ydb/pull/12824) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'VIEW: changelog entry for YDB CLI local backups support for views'. [#12836](https://github.com/ydb-platform/ydb/pull/12836) ([Daniil Demin](https://github.com/jepett0)).
* NO CL ENTRY:  'Unmuted fixed test'. [#12841](https://github.com/ydb-platform/ydb/pull/12841) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* NO CL ENTRY:  'Mon: Fix Start call if AppData is not set'. [#12844](https://github.com/ydb-platform/ydb/pull/12844) ([Maxim Kovalev](https://github.com/mxkovalev)).
* NO CL ENTRY:  'scanners unification plain/simple for reuse code'. [#12847](https://github.com/ydb-platform/ydb/pull/12847) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix olap_workload invoke'. [#12848](https://github.com/ydb-platform/ydb/pull/12848) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix olap_workload'. [#12849](https://github.com/ydb-platform/ydb/pull/12849) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'blobs fetcher unification'. [#12858](https://github.com/ydb-platform/ydb/pull/12858) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'accessors fetching control'. [#12859](https://github.com/ydb-platform/ydb/pull/12859) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Column Shards stats (Rows + Bytes)'. [#12861](https://github.com/ydb-platform/ydb/pull/12861) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Mute ydb/core/tablet_flat/ut TSharedPageCache.Compaction_BTreeIndex'. [#12863](https://github.com/ydb-platform/ydb/pull/12863) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'YMQ tags'. [#12872](https://github.com/ydb-platform/ydb/pull/12872) ([qyryq](https://github.com/qyryq)).
* NO CL ENTRY:  'Revert "Fix deadlines in DSProxy for Status, MultiPut, Patch requests, add UTs for deadlines ([#11780](https://github.com/ydb-platform/ydb/issues/11780))"'. [#12875](https://github.com/ydb-platform/ydb/pull/12875) ([Alexander Rutkovsky](https://github.com/alexvru)).
* NO CL ENTRY:  'Disable warning related to unknown-argument'. [#12878](https://github.com/ydb-platform/ydb/pull/12878) ([Dmitry Nechitaev](https://github.com/Nechda)).
* NO CL ENTRY:  'Move workloads to separate directory (tests/workloads)'. [#12883](https://github.com/ydb-platform/ydb/pull/12883) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix Abort on dry run benchmarks'. [#12886](https://github.com/ydb-platform/ydb/pull/12886) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'bloom filter for ngramms'. [#12893](https://github.com/ydb-platform/ydb/pull/12893) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Use google breakpad in ydbd'. [#12894](https://github.com/ydb-platform/ydb/pull/12894) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Don't verify PDisk if it's too small '. [#12898](https://github.com/ydb-platform/ydb/pull/12898) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'fix coredumps simple'. [#12914](https://github.com/ydb-platform/ydb/pull/12914) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Sample simple sql test'. [#12925](https://github.com/ydb-platform/ydb/pull/12925) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Move olap_workload to dedicated dir'. [#12926](https://github.com/ydb-platform/ydb/pull/12926) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Remove ydb/tests/perf (not used)'. [#12929](https://github.com/ydb-platform/ydb/pull/12929) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Remove ydb/tests/functional/open_source'. [#12930](https://github.com/ydb-platform/ydb/pull/12930) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Move dynamber to sql tests'. [#12932](https://github.com/ydb-platform/ydb/pull/12932) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'fix indexes usage'. [#12933](https://github.com/ydb-platform/ydb/pull/12933) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'do not get logs from succcess requests'. [#12934](https://github.com/ydb-platform/ydb/pull/12934) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix schema construction with cached objects'. [#12935](https://github.com/ydb-platform/ydb/pull/12935) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix accessors fetching queue processing'. [#12936](https://github.com/ydb-platform/ydb/pull/12936) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241224-1545'. [#12937](https://github.com/ydb-platform/ydb/pull/12937) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'remove forgotten files'. [#12939](https://github.com/ydb-platform/ydb/pull/12939) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  '[KQP] OLAP output statistics fix'. [#12948](https://github.com/ydb-platform/ydb/pull/12948) ([pilik](https://github.com/pashandor789)).
* NO CL ENTRY:  'Library import 241224-2313'. [#12958](https://github.com/ydb-platform/ydb/pull/12958) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'table have to be readable with snapshot livetime'. [#12964](https://github.com/ydb-platform/ydb/pull/12964) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Don't omit precomputes in presense of a returning statement'. [#12965](https://github.com/ydb-platform/ydb/pull/12965) ([Mikhail Surin](https://github.com/ssmike)).
* NO CL ENTRY:  'Revert "Use google breakpad in ydbd ([#12894](https://github.com/ydb-platform/ydb/issues/12894))"'. [#12980](https://github.com/ydb-platform/ydb/pull/12980) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'bloom ngramms speed up'. [#12982](https://github.com/ydb-platform/ydb/pull/12982) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'remove tx service off for nbs nfs'. [#12998](https://github.com/ydb-platform/ydb/pull/12998) ([Sergey J](https://github.com/sourcecd)).
* NO CL ENTRY:  'Mark some long asan tests as LARGE'. [#13003](https://github.com/ydb-platform/ydb/pull/13003) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 241225-1905'. [#13010](https://github.com/ydb-platform/ydb/pull/13010) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Large tests'. [#13013](https://github.com/ydb-platform/ydb/pull/13013) ([SloNN](https://github.com/SloNN)).
* NO CL ENTRY:  'Add cron for rightlib sync, also fix wf name'. [#13020](https://github.com/ydb-platform/ydb/pull/13020) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Mute KqpOlap.ManyColumnShardsWithRestarts'. [#13022](https://github.com/ydb-platform/ydb/pull/13022) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Faster tests teardown (add enable_drain_on_shutdown=False)'. [#13025](https://github.com/ydb-platform/ydb/pull/13025) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Parallel kikimr stop in tests'. [#13033](https://github.com/ydb-platform/ydb/pull/13033) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'fetcher accessors signals'. [#13038](https://github.com/ydb-platform/ydb/pull/13038) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Allow PG in DQ output/input consumers'. [#13043](https://github.com/ydb-platform/ydb/pull/13043) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'FullResultWriter with columnorder'. [#13045](https://github.com/ydb-platform/ydb/pull/13045) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'Add log for MemoryController soft limit'. [#13060](https://github.com/ydb-platform/ydb/pull/13060) ([Ivan](https://github.com/abyss7)).
* NO CL ENTRY:  'correct change tasks validation'. [#13064](https://github.com/ydb-platform/ydb/pull/13064) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'reuse code for portion meta'. [#13065](https://github.com/ydb-platform/ydb/pull/13065) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'speed up bloom construction'. [#13073](https://github.com/ydb-platform/ydb/pull/13073) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Remove outdated docker image licenses'. [#13080](https://github.com/ydb-platform/ydb/pull/13080) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix errors on removing files in sync_cmake'. [#13081](https://github.com/ydb-platform/ydb/pull/13081) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix race on writing in case slow execution (asan tests)'. [#13085](https://github.com/ydb-platform/ydb/pull/13085) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix incorrect processing event undelivering in scan fetcher'. [#13092](https://github.com/ydb-platform/ydb/pull/13092) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 241227-1333'. [#13093](https://github.com/ydb-platform/ydb/pull/13093) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 241228-0020'. [#13106](https://github.com/ydb-platform/ydb/pull/13106) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 241228-1728'. [#13124](https://github.com/ydb-platform/ydb/pull/13124) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 241229-0022'. [#13125](https://github.com/ydb-platform/ydb/pull/13125) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix macros usage'. [#13126](https://github.com/ydb-platform/ydb/pull/13126) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix blob range construction and index control'. [#13131](https://github.com/ydb-platform/ydb/pull/13131) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add check for zero read iterators count after cancelation.'. [#13135](https://github.com/ydb-platform/ydb/pull/13135) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Fix SIGSEGV in balancing actor '. [#13136](https://github.com/ydb-platform/ydb/pull/13136) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'Reduce throughput on overload special'. [#13148](https://github.com/ydb-platform/ydb/pull/13148) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Add option to restart PDisk without any checks'. [#13149](https://github.com/ydb-platform/ydb/pull/13149) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'additional signals'. [#13151](https://github.com/ydb-platform/ydb/pull/13151) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'unify portion change operations'. [#13157](https://github.com/ydb-platform/ydb/pull/13157) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix TSlay and THarakiri in ReadOnly mode'. [#13162](https://github.com/ydb-platform/ydb/pull/13162) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  'ut for deleting absent rows'. [#13172](https://github.com/ydb-platform/ydb/pull/13172) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'Recover lost locks as broken'. [#13181](https://github.com/ydb-platform/ydb/pull/13181) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'batch portions on write'. [#13182](https://github.com/ydb-platform/ydb/pull/13182) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Enable insert delete olap workload'. [#13183](https://github.com/ydb-platform/ydb/pull/13183) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'simultaneous writing session for tests'. [#13187](https://github.com/ydb-platform/ydb/pull/13187) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'correct commit processing for immediate writing'. [#13188](https://github.com/ydb-platform/ydb/pull/13188) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Do not clear shard lists'. [#13189](https://github.com/ydb-platform/ydb/pull/13189) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'strict writing data validation'. [#13190](https://github.com/ydb-platform/ydb/pull/13190) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Merge different schemas'. [#13192](https://github.com/ydb-platform/ydb/pull/13192) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Embed short blobs in TCell, fix empty string'. [#13194](https://github.com/ydb-platform/ydb/pull/13194) ([zverevgeny](https://github.com/zverevgeny)).
* NO CL ENTRY:  'positive integer class'. [#13195](https://github.com/ydb-platform/ydb/pull/13195) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'PDisk restart and readonly commands with FQDN and disk's path'. [#13196](https://github.com/ydb-platform/ydb/pull/13196) ([Semyon Danilov](https://github.com/SammyVimes)).
* NO CL ENTRY:  '[C++ SDK] Remove session from session pool if stream session was closed by server side.'. [#13199](https://github.com/ydb-platform/ydb/pull/13199) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Do not use containers when attach logs'. [#13210](https://github.com/ydb-platform/ydb/pull/13210) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'improve writing test for control portions count and compaction disable'. [#13213](https://github.com/ydb-platform/ydb/pull/13213) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Disable ydb/library/actors/interconnect/ut/event_holder_pool_ut.cpp with sanitizers'. [#13234](https://github.com/ydb-platform/ydb/pull/13234) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Add icb configurable defrag inflight'. [#13238](https://github.com/ydb-platform/ydb/pull/13238) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Library import 250109-1621'. [#13242](https://github.com/ydb-platform/ydb/pull/13242) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'batch writing fixes'. [#13246](https://github.com/ydb-platform/ydb/pull/13246) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 250110-0021'. [#13253](https://github.com/ydb-platform/ydb/pull/13253) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'add column for simple_queue workload'. [#13263](https://github.com/ydb-platform/ydb/pull/13263) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Move kv workload to other workload tests'. [#13268](https://github.com/ydb-platform/ydb/pull/13268) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Add kv workload for column table + add test'. [#13272](https://github.com/ydb-platform/ydb/pull/13272) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'scanner simple speed up'. [#13281](https://github.com/ydb-platform/ydb/pull/13281) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Revert "Correct Rows count in Block Output Channels ([#11893](https://github.com/ydb-platform/ydb/issues/11893))"'. [#13285](https://github.com/ydb-platform/ydb/pull/13285) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'Library import 250111-0020'. [#13289](https://github.com/ydb-platform/ydb/pull/13289) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix portions cleanup'. [#13290](https://github.com/ydb-platform/ydb/pull/13290) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'fix scanner'. [#13292](https://github.com/ydb-platform/ydb/pull/13292) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 250112-0023'. [#13297](https://github.com/ydb-platform/ydb/pull/13297) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add warnings and errors to db in benchmarks'. [#13298](https://github.com/ydb-platform/ydb/pull/13298) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 250113-0022'. [#13302](https://github.com/ydb-platform/ydb/pull/13302) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 250114-0501'. [#13350](https://github.com/ydb-platform/ydb/pull/13350) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Add log workload into cli'. [#13353](https://github.com/ydb-platform/ydb/pull/13353) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 250114-1110'. [#13359](https://github.com/ydb-platform/ydb/pull/13359) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Redefine flags for win32'. [#13362](https://github.com/ydb-platform/ydb/pull/13362) ([Dmitry Nechitaev](https://github.com/Nechda)).
* NO CL ENTRY:  'Library import 250115-0020'. [#13377](https://github.com/ydb-platform/ydb/pull/13377) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Rename tests/workloads to tests/stress (less confusing)'. [#13383](https://github.com/ydb-platform/ydb/pull/13383) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Operator statistics visualization'. [#13384](https://github.com/ydb-platform/ydb/pull/13384) ([Hor911](https://github.com/Hor911)).
* NO CL ENTRY:  'Introduce locality counters for single shard tx.'. [#13415](https://github.com/ydb-platform/ydb/pull/13415) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Library import 250116-0020'. [#13420](https://github.com/ydb-platform/ydb/pull/13420) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix log workload for one key column'. [#13423](https://github.com/ydb-platform/ydb/pull/13423) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Move ydb/tests/functional/canonical to large under asan'. [#13429](https://github.com/ydb-platform/ydb/pull/13429) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Add regression white list tests workflow'. [#13432](https://github.com/ydb-platform/ydb/pull/13432) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Move ydb/library/actors/util/ut/ya.make to medium under san'. [#13434](https://github.com/ydb-platform/ydb/pull/13434) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Build YDB CLI arm binaries for linux and mac'. [#13436](https://github.com/ydb-platform/ydb/pull/13436) ([Nikolay Perfilov](https://github.com/pnv1)).
* NO CL ENTRY:  'Add  ydb/tests/sql/large to regression_whitelist_run.yml'. [#13443](https://github.com/ydb-platform/ydb/pull/13443) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix quotes'. [#13446](https://github.com/ydb-platform/ydb/pull/13446) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Make DQ and KQP use only WideStream for WideFromBlocks'. [#13453](https://github.com/ydb-platform/ydb/pull/13453) ([Igor Munkin](https://github.com/igormunkin)).
* NO CL ENTRY:  'Wilson uploader sensors'. [#13457](https://github.com/ydb-platform/ydb/pull/13457) ([Robert Drynkin](https://github.com/robdrynkin)).
* NO CL ENTRY:  'Add function tests for tpcds and clickbench'. [#13461](https://github.com/ydb-platform/ydb/pull/13461) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 250117-0020'. [#13463](https://github.com/ydb-platform/ydb/pull/13463) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 250117-1049'. [#13486](https://github.com/ydb-platform/ydb/pull/13486) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Do not parallel sql large tests'. [#13489](https://github.com/ydb-platform/ydb/pull/13489) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix Date32 type id check + minor fixes.'. [#13495](https://github.com/ydb-platform/ydb/pull/13495) ([spuchin](https://github.com/spuchin)).
* NO CL ENTRY:  'Revert "Export views"'. [#13509](https://github.com/ydb-platform/ydb/pull/13509) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 250118-0019'. [#13513](https://github.com/ydb-platform/ydb/pull/13513) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 250119-0022'. [#13521](https://github.com/ydb-platform/ydb/pull/13521) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix thread sanitizer alarms'. [#13522](https://github.com/ydb-platform/ydb/pull/13522) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Wm + tiering'. [#13524](https://github.com/ydb-platform/ydb/pull/13524) ([SloNN](https://github.com/SloNN)).
* NO CL ENTRY:  'Library import 250120-0020'. [#13537](https://github.com/ydb-platform/ydb/pull/13537) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix scanner limits processing'. [#13556](https://github.com/ydb-platform/ydb/pull/13556) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Fix data race in ydb/library/yql/udfs/common/roaring'. [#13558](https://github.com/ydb-platform/ydb/pull/13558) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fix bug with backslashed in db paths in benchmark workload in YDB on Windows'. [#13561](https://github.com/ydb-platform/ydb/pull/13561) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Try USE_OPENSOURCE_TEST_TOOL=yes'. [#13566](https://github.com/ydb-platform/ydb/pull/13566) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Fix bug with fill tables in root directory and partially created tables in tpch and tpcds workloads'. [#13577](https://github.com/ydb-platform/ydb/pull/13577) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix thread sanitizer alert'. [#13578](https://github.com/ydb-platform/ydb/pull/13578) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Do not touch event after sending.'. [#13589](https://github.com/ydb-platform/ydb/pull/13589) ([Daniil Cherednik](https://github.com/dcherednik)).
* NO CL ENTRY:  'Fix recurse'. [#13590](https://github.com/ydb-platform/ydb/pull/13590) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Fixes for SloNN PR'. [#13592](https://github.com/ydb-platform/ydb/pull/13592) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Get path to CLI binary from env in load tests'. [#13600](https://github.com/ydb-platform/ydb/pull/13600) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 250121-0019'. [#13603](https://github.com/ydb-platform/ydb/pull/13603) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  '[#13427](https://github.com/ydb-platform/ydb/issues/13427) Add a monitoring counter for fds kept open by the spilling system'. [#13611](https://github.com/ydb-platform/ydb/pull/13611) ([uniquelogin](https://github.com/uniquelogin)).
* NO CL ENTRY:  'add ydb/tests/stress to regression_whitelist_run workflow'. [#13654](https://github.com/ydb-platform/ydb/pull/13654) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Add python test example'. [#13661](https://github.com/ydb-platform/ydb/pull/13661) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'fix precision in tpc-h 100 canonical result'. [#13665](https://github.com/ydb-platform/ydb/pull/13665) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Compaction sequentially in case huge memory usage'. [#13668](https://github.com/ydb-platform/ydb/pull/13668) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Specify explicit names for benchmarks to avoid target name duplication in cmake build'. [#13678](https://github.com/ydb-platform/ydb/pull/13678) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Library import 250122-0020'. [#13686](https://github.com/ydb-platform/ydb/pull/13686) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'fix scanner in flight control'. [#13690](https://github.com/ydb-platform/ydb/pull/13690) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 250122-1156'. [#13702](https://github.com/ydb-platform/ydb/pull/13702) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'additional signals to control write hanging'. [#13708](https://github.com/ydb-platform/ydb/pull/13708) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'increase timeout on tpch 10000 q09, q17, q18, q20, q21'. [#13712](https://github.com/ydb-platform/ydb/pull/13712) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Drop mrrun'. [#13720](https://github.com/ydb-platform/ydb/pull/13720) ([Roman Udovichenko](https://github.com/rvu1024)).
* NO CL ENTRY:  'fix tsan alerts'. [#13722](https://github.com/ydb-platform/ydb/pull/13722) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Support progress stats for workload'. [#13725](https://github.com/ydb-platform/ydb/pull/13725) ([Nikolay Shumkov](https://github.com/shnikd)).
* NO CL ENTRY:  'start ydb/tests/stress/kv with sanitizers'. [#13727](https://github.com/ydb-platform/ydb/pull/13727) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 250123-0020'. [#13743](https://github.com/ydb-platform/ydb/pull/13743) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix bad merge'. [#13744](https://github.com/ydb-platform/ydb/pull/13744) ([Valery Mironov](https://github.com/MBkkt)).
* NO CL ENTRY:  'Recanonization tpch 10000'. [#13749](https://github.com/ydb-platform/ydb/pull/13749) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Switch sql tests size from small to medium'. [#13750](https://github.com/ydb-platform/ydb/pull/13750) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Use threadsafe randomizer'. [#13754](https://github.com/ydb-platform/ydb/pull/13754) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'signals to writing trace'. [#13763](https://github.com/ydb-platform/ydb/pull/13763) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'dqrun gateways patches'. [#13767](https://github.com/ydb-platform/ydb/pull/13767) ([Александр Новожилов](https://github.com/MrLolthe1st)).
* NO CL ENTRY:  'correct validation for second init tx received'. [#13773](https://github.com/ydb-platform/ydb/pull/13773) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Upload error statistics'. [#13783](https://github.com/ydb-platform/ydb/pull/13783) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'Library import 250124-0020'. [#13788](https://github.com/ydb-platform/ydb/pull/13788) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fixes for parallel tests execution'. [#13798](https://github.com/ydb-platform/ydb/pull/13798) ([SloNN](https://github.com/SloNN)).
* NO CL ENTRY:  'fix race for positive control counters usage'. [#13811](https://github.com/ydb-platform/ydb/pull/13811) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Mute ydb/tests/olap/ttl_tiering ttl_delete_s3.py'. [#13829](https://github.com/ydb-platform/ydb/pull/13829) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* NO CL ENTRY:  'Library import 250125-0019'. [#13830](https://github.com/ydb-platform/ydb/pull/13830) ([AlexSm](https://github.com/alexv-smirnov)).
* NO CL ENTRY:  'Fix error processing'. [#13831](https://github.com/ydb-platform/ydb/pull/13831) ([Олег](https://github.com/iddqdex)).
* NO CL ENTRY:  'fix hanging in case timeout with empty reply from scanner'. [#13832](https://github.com/ydb-platform/ydb/pull/13832) ([ivanmorozov333](https://github.com/ivanmorozov333)).
* NO CL ENTRY:  'Library import 250126-0020'. [#13837](https://github.com/ydb-platform/ydb/pull/13837) ([AlexSm](https://github.com/alexv-smirnov)).

#### NOT FOR CHANGELOG / INSIGNIFICANT

* test `TPersQueueTest.SetupLockSession` [#3704](https://github.com/ydb-platform/ydb/pull/3704) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Add SystemPython3_8 to SystemPython3_13 to YQL [#3877](https://github.com/ydb-platform/ydb/pull/3877) ([Aleksandr Gaev](https://github.com/Krock21)).
* Remove CHECK_DEPENDENT_DIRS [#4645](https://github.com/ydb-platform/ydb/pull/4645) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* dqrun benchmark/result comarator scripts fixes and updates [#4668](https://github.com/ydb-platform/ydb/pull/4668) ([yumkam](https://github.com/yumkam)).
* Create vector index in SchemeShard [#4967](https://github.com/ydb-platform/ydb/pull/4967) ([azevaykin](https://github.com/azevaykin)).
* YQ-3322 Row dispatcher [#5544](https://github.com/ydb-platform/ydb/pull/5544) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add TabletService to the public api [#5545](https://github.com/ydb-platform/ydb/pull/5545) ([Aleksei Borzenkov](https://github.com/snaury)).
* Iterative B-Tree histograms builder [#6047](https://github.com/ydb-platform/ydb/pull/6047) ([kungurtsev](https://github.com/kunga)).
* Add NotFound error for shard ended [#6056](https://github.com/ydb-platform/ydb/pull/6056) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix multi sink type annotation [#6105](https://github.com/ydb-platform/ydb/pull/6105) ([Nikita Vasilev](https://github.com/nikvas0)).
* set pg port in config [#6124](https://github.com/ydb-platform/ydb/pull/6124) ([Timofey Koolin](https://github.com/rekby)).
* Add decimal support to arrow reader [#6151](https://github.com/ydb-platform/ydb/pull/6151) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Use topic api in pq_async_io tests [#6156](https://github.com/ydb-platform/ydb/pull/6156) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Obtain UsedTableMemory from private cache stats [#6178](https://github.com/ydb-platform/ydb/pull/6178) ([kungurtsev](https://github.com/kunga)).
* Refactor event pb [#6235](https://github.com/ydb-platform/ydb/pull/6235) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove some ancient feature flags [#6242](https://github.com/ydb-platform/ydb/pull/6242) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Improvements in Write Actor [#6251](https://github.com/ydb-platform/ydb/pull/6251) ([Nikita Vasilev](https://github.com/nikvas0)).
* Less LLVM templates in base classes [#6308](https://github.com/ydb-platform/ydb/pull/6308) ([Vitaly Stoyan](https://github.com/vitstn)).
* Several CTAS [#6330](https://github.com/ydb-platform/ydb/pull/6330) ([Nikita Vasilev](https://github.com/nikvas0)).
* Fix alter replication config [#6348](https://github.com/ydb-platform/ydb/pull/6348) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Avoid inlining of arrow kernel dispatcher [#6349](https://github.com/ydb-platform/ydb/pull/6349) ([Vitaly Stoyan](https://github.com/vitstn)).
* solomon tests: sanitize issues, remove line number [#6350](https://github.com/ydb-platform/ydb/pull/6350) ([uzhastik](https://github.com/uzhastik)).
* decompress.sh has been added [#6357](https://github.com/ydb-platform/ydb/pull/6357) ([Oleg Doronin](https://github.com/dorooleg)).
* Less LLVM in block agg [#6359](https://github.com/ydb-platform/ydb/pull/6359) ([Vitaly Stoyan](https://github.com/vitstn)).
* Enable update for oltp sink [#6393](https://github.com/ydb-platform/ydb/pull/6393) ([Nikita Vasilev](https://github.com/nikvas0)).
* YQ-3367 frozen fq yt-kqp test list [#6397](https://github.com/ydb-platform/ydb/pull/6397) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* split SpillingEngine and channels spilling [#6406](https://github.com/ydb-platform/ydb/pull/6406) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Make tsserver build for linux only [#6419](https://github.com/ydb-platform/ydb/pull/6419) ([Alexander Rutkovsky](https://github.com/alexvru)).
* fix typo in IsStrict(): ScripUdf -> ScriptUdf [#6427](https://github.com/ydb-platform/ydb/pull/6427) ([Fiodar Miron](https://github.com/fedor-miron)).
* Add incremental backup flag for table [#6433](https://github.com/ydb-platform/ydb/pull/6433) ([Innokentii Mokin](https://github.com/Enjection)).
* Migration to new protobuf (devtools request) [#6437](https://github.com/ydb-platform/ydb/pull/6437) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove KIKIMR_PDISK_ENABLE_T1HA_HASH_WRITING [#6439](https://github.com/ydb-platform/ydb/pull/6439) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Set join-lookup limit [#6455](https://github.com/ydb-platform/ydb/pull/6455) ([Mikhail Surin](https://github.com/ssmike)).
* Remove OldHashSector in PDisk [#6465](https://github.com/ydb-platform/ydb/pull/6465) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* remove unused proto imports [#6476](https://github.com/ydb-platform/ydb/pull/6476) ([uzhastik](https://github.com/uzhastik)).
* canonize window tests & add order by to the query [#6478](https://github.com/ydb-platform/ydb/pull/6478) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Improve replication code [#6501](https://github.com/ydb-platform/ydb/pull/6501) ([Alexander Rutkovsky](https://github.com/alexvru)).
* remove PredicateExtract20 & OldJoinsBehavior options [#6502](https://github.com/ydb-platform/ydb/pull/6502) ([Mikhail Surin](https://github.com/ssmike)).
* remove feature flag: modify tests to remove source reads feature flag [#6505](https://github.com/ydb-platform/ydb/pull/6505) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Tidy up in heap iterator a little [#6510](https://github.com/ydb-platform/ydb/pull/6510) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Remove KIKIMR_ALLOW_FLOWCONTROLLED_QUEUE_FOR_SSLOOKUP [#6511](https://github.com/ydb-platform/ydb/pull/6511) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove msgbus login method [#6523](https://github.com/ydb-platform/ydb/pull/6523) ([Andrey Molotkov](https://github.com/molotkov-and)).
* Refactor EYtSettingType enum [#6524](https://github.com/ydb-platform/ydb/pull/6524) ([Vadim Averin](https://github.com/avevad)).
* Remove build stage [#6527](https://github.com/ydb-platform/ydb/pull/6527) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove KIKIMR_ALLOW_SSREPLICA_PROBES [#6529](https://github.com/ydb-platform/ydb/pull/6529) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix yql translation for INTERSECT in TPC DS queries [#6530](https://github.com/ydb-platform/ydb/pull/6530) ([yumkam](https://github.com/yumkam)).
* get rid of wide fields in wide combiner. Not used in llvm [#6536](https://github.com/ydb-platform/ydb/pull/6536) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Add system python udfs in yql [#6562](https://github.com/ydb-platform/ydb/pull/6562) ([Aleksandr Gaev](https://github.com/Krock21)).
* fix pull param content in actions + added upload in action/test [#6564](https://github.com/ydb-platform/ydb/pull/6564) ([Kirill Rysin](https://github.com/naspirato)).
* YQB FQ: integration tests for MySQL [#6573](https://github.com/ydb-platform/ydb/pull/6573) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Template bloat [#6579](https://github.com/ydb-platform/ydb/pull/6579) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Memory Controller [#6587](https://github.com/ydb-platform/ydb/pull/6587) ([kungurtsev](https://github.com/kunga)).
* Switch SyncLog to modern entrypoint format [#6590](https://github.com/ydb-platform/ydb/pull/6590) ([Alexander Rutkovsky](https://github.com/alexvru)).
* remove wrong debug assert in block readers [#6604](https://github.com/ydb-platform/ydb/pull/6604) ([Fiodar Miron](https://github.com/fedor-miron)).
* Late fetch from bazel cache [#6606](https://github.com/ydb-platform/ydb/pull/6606) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Drop deprecated OWNER macro from ya.make [#6607](https://github.com/ydb-platform/ydb/pull/6607) ([Ildar Karimov](https://github.com/thevery)).
* Fix test build [#6621](https://github.com/ydb-platform/ydb/pull/6621) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* fix black style tests [#6622](https://github.com/ydb-platform/ydb/pull/6622) ([uzhastik](https://github.com/uzhastik)).
* Reduce binary size (AuditLogEntry) [#6624](https://github.com/ydb-platform/ydb/pull/6624) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Refacator workflows [#6630](https://github.com/ydb-platform/ydb/pull/6630) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Get rid of templates in dsproxy request actor [#6635](https://github.com/ydb-platform/ydb/pull/6635) ([Alexander Rutkovsky](https://github.com/alexvru)).
* rework solomon sink type ann [#6636](https://github.com/ydb-platform/ydb/pull/6636) ([uzhastik](https://github.com/uzhastik)).
* Reduce dsproxy templateness even more [#6646](https://github.com/ydb-platform/ydb/pull/6646) ([Alexander Rutkovsky](https://github.com/alexvru)).
* schemeshard: preserialize Table.SplitBoundary for describe result [#6648](https://github.com/ydb-platform/ydb/pull/6648) ([ijon](https://github.com/ijon)).
* Stab PG's pg_total_relation_size() [#6659](https://github.com/ydb-platform/ydb/pull/6659) ([Mars Agliullin](https://github.com/marsaly79)).
* Better template bloat aggregation [#6662](https://github.com/ydb-platform/ydb/pull/6662) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove using msgbus register node call [#6679](https://github.com/ydb-platform/ydb/pull/6679) ([Andrey Molotkov](https://github.com/molotkov-and)).
* -DUSE_EAT_MY_DATA for faster checks [#6690](https://github.com/ydb-platform/ydb/pull/6690) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* add implementation for common cases in local partition reader [#6692](https://github.com/ydb-platform/ydb/pull/6692) ([Innokentii Mokin](https://github.com/Enjection)).
* add unsafe append to tablecell [#6696](https://github.com/ydb-platform/ydb/pull/6696) ([Innokentii Mokin](https://github.com/Enjection)).
* Extract non-template function members from TComputationValueBase [#6701](https://github.com/ydb-platform/ydb/pull/6701) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Cleanup offload actor [#6702](https://github.com/ydb-platform/ydb/pull/6702) ([Innokentii Mokin](https://github.com/Enjection)).
* Remove TBaseExt [#6706](https://github.com/ydb-platform/ydb/pull/6706) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix CTAS test [#6707](https://github.com/ydb-platform/ydb/pull/6707) ([Nikita Vasilev](https://github.com/nikvas0)).
* Add error messages to replication [#6708](https://github.com/ydb-platform/ydb/pull/6708) ([Innokentii Mokin](https://github.com/Enjection)).
* Distinguish outdated schema from invalid schema in repl apply [#6710](https://github.com/ydb-platform/ydb/pull/6710) ([Innokentii Mokin](https://github.com/Enjection)).
* Remove TEventSimple [#6715](https://github.com/ydb-platform/ydb/pull/6715) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YDB FQ: stabilize MySQL tests [#6728](https://github.com/ydb-platform/ydb/pull/6728) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* add aggregated statistics protos [#6729](https://github.com/ydb-platform/ydb/pull/6729) ([andrew stalin](https://github.com/andrewstalin)).
* Switch ownership for http gateway to @ydb-platform/fq [#6740](https://github.com/ydb-platform/ydb/pull/6740) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Events: remove unused classes [#6742](https://github.com/ydb-platform/ydb/pull/6742) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add specialized backup writer for repl [#6748](https://github.com/ydb-platform/ydb/pull/6748) ([Innokentii Mokin](https://github.com/Enjection)).
* Add index.html into artifacts, unify upload to s3  [#6754](https://github.com/ydb-platform/ydb/pull/6754) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Events: use real typedef [#6757](https://github.com/ydb-platform/ydb/pull/6757) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Bump pg version [#6758](https://github.com/ydb-platform/ydb/pull/6758) ([Vitaly Stoyan](https://github.com/vitstn)).
* arcadia files lookup has been fixed [#6761](https://github.com/ydb-platform/ydb/pull/6761) ([Oleg Doronin](https://github.com/dorooleg)).
* Add +x to ya make invocation [#6767](https://github.com/ydb-platform/ydb/pull/6767) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Aggregate statistics from ColumnShards [#6768](https://github.com/ydb-platform/ydb/pull/6768) ([andrew stalin](https://github.com/andrewstalin)).
* Fixed rebalancing of reading sessions after restart PQRB [#6773](https://github.com/ydb-platform/ydb/pull/6773) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YDB FQ: fix YDB CP storage connections test [#6775](https://github.com/ydb-platform/ydb/pull/6775) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Move actor/core ut to separate dir [#6776](https://github.com/ydb-platform/ydb/pull/6776) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Lower sqs tests reqs [#6777](https://github.com/ydb-platform/ydb/pull/6777) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add export table's permissions [#6782](https://github.com/ydb-platform/ydb/pull/6782) ([Ilia Shakhov](https://github.com/pixcc)).
* DqPqReadActorTest has been fixed [#6785](https://github.com/ydb-platform/ydb/pull/6785) ([Oleg Doronin](https://github.com/dorooleg)).
* Fix warning [#6788](https://github.com/ydb-platform/ydb/pull/6788) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Do not use YQL_LOG during YQL plugin initialization [#6798](https://github.com/ydb-platform/ydb/pull/6798) ([Grigory Reznikov](https://github.com/gritukan)).
* query replay yt support local runner [#6799](https://github.com/ydb-platform/ydb/pull/6799) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix order of columns in Skiff converter [#6804](https://github.com/ydb-platform/ydb/pull/6804) ([Grigory Reznikov](https://github.com/gritukan)).
* YDB-2568 Enable match_recognize in ydb [#6807](https://github.com/ydb-platform/ydb/pull/6807) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Vector index build preparation in SchemeShard [#6809](https://github.com/ydb-platform/ydb/pull/6809) ([azevaykin](https://github.com/azevaykin)).
* unmute tests [#6811](https://github.com/ydb-platform/ydb/pull/6811) ([Nikita Vasilev](https://github.com/nikvas0)).
* Refactor upload artifacts and use SUMMARY_LINKS [#6812](https://github.com/ydb-platform/ydb/pull/6812) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove cmake tests from workflows [#6816](https://github.com/ydb-platform/ydb/pull/6816) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YDB FQ: transferring code ownership of db_id_async_resolver to FQ [#6818](https://github.com/ydb-platform/ydb/pull/6818) ([Grigorii Papashvili](https://github.com/lifthelm)).
* Allow streams on index table [#6827](https://github.com/ydb-platform/ydb/pull/6827) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Add permissions to ydb tools dump [#6833](https://github.com/ydb-platform/ydb/pull/6833) ([Ilia Shakhov](https://github.com/pixcc)).
* Allow streams on sync-index table [#6842](https://github.com/ydb-platform/ydb/pull/6842) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YQ mute fq/yt pg tests [#6855](https://github.com/ydb-platform/ydb/pull/6855) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Stream on index table: additional checks & tests [#6865](https://github.com/ydb-platform/ydb/pull/6865) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix link in PR comment ("Build failed. see the [logs]") [#6866](https://github.com/ydb-platform/ydb/pull/6866) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Test TopicReaderTests::TestRun_ReadOneMessage [#6869](https://github.com/ydb-platform/ydb/pull/6869) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* Tests for wide combiner with spilling [#6880](https://github.com/ydb-platform/ydb/pull/6880) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Allow to add changefeed to index table via AlterTable [#6883](https://github.com/ydb-platform/ydb/pull/6883) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fixed missing timeout in explain query [#6887](https://github.com/ydb-platform/ydb/pull/6887) ([Bulat](https://github.com/Gazizonoki)).
* Fix github outage (postcommit checks are stuck) [#6897](https://github.com/ydb-platform/ydb/pull/6897) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix github outage (postcommit checks are stuck) one more fix [#6898](https://github.com/ydb-platform/ydb/pull/6898) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix reading after pqrb restart [#6917](https://github.com/ydb-platform/ydb/pull/6917) ([Nikolay Shestakov](https://github.com/nshestakov)).
* improve failsafe on cuttting history [#6918](https://github.com/ydb-platform/ydb/pull/6918) ([vporyadke](https://github.com/vporyadke)).
* unused variable has been fixed [#6919](https://github.com/ydb-platform/ydb/pull/6919) ([Oleg Doronin](https://github.com/dorooleg)).
* cpu time has been accounted into async decompressing [#6921](https://github.com/ydb-platform/ydb/pull/6921) ([Oleg Doronin](https://github.com/dorooleg)).
* Replicate index tables [#6937](https://github.com/ydb-platform/ydb/pull/6937) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Less harcode in copy_src.py [#6938](https://github.com/ydb-platform/ydb/pull/6938) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fast fail for test CloseSessionsWithLoad [#6947](https://github.com/ydb-platform/ydb/pull/6947) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove unused workflows [#6953](https://github.com/ydb-platform/ydb/pull/6953) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Allow to describe index tables as common tables [#6954](https://github.com/ydb-platform/ydb/pull/6954) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Correct queue size (8 is current number of stuck checks) [#6955](https://github.com/ydb-platform/ydb/pull/6955) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* drop some dead code [#6957](https://github.com/ydb-platform/ydb/pull/6957) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Refactor CDC exchange [#6964](https://github.com/ydb-platform/ydb/pull/6964) ([Nikolay Shestakov](https://github.com/nshestakov)).
* mute tests [#6966](https://github.com/ydb-platform/ydb/pull/6966) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Add tests retry [#6973](https://github.com/ydb-platform/ydb/pull/6973) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* [backups] Add restore incremental backup op [#6979](https://github.com/ydb-platform/ydb/pull/6979) ([Innokentii Mokin](https://github.com/Enjection)).
* Remove unused BuildIndexMetadata [#6981](https://github.com/ydb-platform/ydb/pull/6981) ([azevaykin](https://github.com/azevaykin)).
* Removed a rule that turned Shuffle into Map breaking some TPCDS queries [#6982](https://github.com/ydb-platform/ydb/pull/6982) ([Pavel Velikhov](https://github.com/pavelvelikhov)).
* test_kill_pq_bill has been improved [#6984](https://github.com/ydb-platform/ydb/pull/6984) ([Oleg Doronin](https://github.com/dorooleg)).
* Add PAUSED strategy  for autopartitioning of the topic [#7002](https://github.com/ydb-platform/ydb/pull/7002) ([Nikolay Shestakov](https://github.com/nshestakov)).
* test_retry has been fixed [#7003](https://github.com/ydb-platform/ydb/pull/7003) ([Oleg Doronin](https://github.com/dorooleg)).
* add columnshard traversal in statistics aggregator [#7004](https://github.com/ydb-platform/ydb/pull/7004) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Alter index is not supported for vector index [#7005](https://github.com/ydb-platform/ydb/pull/7005) ([azevaykin](https://github.com/azevaykin)).
* WideCombiner with spilling better buffer pass [#7022](https://github.com/ydb-platform/ydb/pull/7022) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Support paused strategy fo topic autopartitioning [#7026](https://github.com/ydb-platform/ydb/pull/7026) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Delete obsolete muted_* [#7033](https://github.com/ydb-platform/ydb/pull/7033) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Mute all chunks [#7034](https://github.com/ydb-platform/ydb/pull/7034) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Treat 'no test run' as success [#7036](https://github.com/ydb-platform/ydb/pull/7036) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Enable/disable ssl connections, return connection_string in API [#7040](https://github.com/ydb-platform/ydb/pull/7040) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Remove labels if description changed [#7043](https://github.com/ydb-platform/ydb/pull/7043) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use yellow color for failed test not in last retry [#7058](https://github.com/ydb-platform/ydb/pull/7058) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add ya analyze-make timeline [#7061](https://github.com/ydb-platform/ydb/pull/7061) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* TCredentialsKey -> TConnectionParams [#7062](https://github.com/ydb-platform/ydb/pull/7062) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* pq read sensors have been added [#7073](https://github.com/ydb-platform/ydb/pull/7073) ([Oleg Doronin](https://github.com/dorooleg)).
* tpc ds q32: fix yql translation [#7081](https://github.com/ydb-platform/ydb/pull/7081) ([yumkam](https://github.com/yumkam)).
* fix operator->(): requirement ptr failed [#7084](https://github.com/ydb-platform/ydb/pull/7084) ([Nikolay Shestakov](https://github.com/nshestakov)).
* EnableChangefeedsOnIndexTables feature flag [#7085](https://github.com/ydb-platform/ydb/pull/7085) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* hide ya make output from gh logs [#7086](https://github.com/ydb-platform/ydb/pull/7086) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Update s3 artifacts more often [#7088](https://github.com/ydb-platform/ydb/pull/7088) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Statistics refactoring [#7096](https://github.com/ydb-platform/ydb/pull/7096) ([azevaykin](https://github.com/azevaykin)).
* fix many scheduled events [#7098](https://github.com/ydb-platform/ydb/pull/7098) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix postcommit gate (there are no stuck checks at this moment) [#7102](https://github.com/ydb-platform/ydb/pull/7102) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Support correct PDisk stopping in context of metadata handling [#7104](https://github.com/ydb-platform/ydb/pull/7104) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Remove arm64 cmake nightly [#7106](https://github.com/ydb-platform/ydb/pull/7106) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove cpu reqs from tests in order to speed up checks [#7111](https://github.com/ydb-platform/ydb/pull/7111) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix link in testmo [#7113](https://github.com/ydb-platform/ydb/pull/7113) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Mute ydb/core/blobstorage/ut_blobstorage BlobPatching.PatchBlock42 [#7115](https://github.com/ydb-platform/ydb/pull/7115) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* html app [#7118](https://github.com/ydb-platform/ydb/pull/7118) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Use EvRead-based table reading in datashard_ut_write test [#7121](https://github.com/ydb-platform/ydb/pull/7121) ([Ivan Nikolaev](https://github.com/lex007in)).
* Split statistics tests [#7122](https://github.com/ydb-platform/ydb/pull/7122) ([azevaykin](https://github.com/azevaykin)).
* add autopartitioning by load [#7123](https://github.com/ydb-platform/ydb/pull/7123) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Statistics proto refactoring + ANALYZE command [#7132](https://github.com/ydb-platform/ydb/pull/7132) ([azevaykin](https://github.com/azevaykin)).
* Statistics test refactoring [#7149](https://github.com/ydb-platform/ydb/pull/7149) ([azevaykin](https://github.com/azevaykin)).
* Freeze event spaces ids [#7151](https://github.com/ydb-platform/ydb/pull/7151) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* add ut for incorrect pragma parsing and return error [#7153](https://github.com/ydb-platform/ydb/pull/7153) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Add debuginfo helpers for LLVM codegeneration [#7159](https://github.com/ydb-platform/ydb/pull/7159) ([Vadim Averin](https://github.com/avevad)).
* Fix PEERDIR [#7164](https://github.com/ydb-platform/ydb/pull/7164) ([Alexander Shadchin](https://github.com/shadchin)).
* Mute yt_native_file tests [#7167](https://github.com/ydb-platform/ydb/pull/7167) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove erasure_rope [#7179](https://github.com/ydb-platform/ydb/pull/7179) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Metering for inactive partitions [#7199](https://github.com/ydb-platform/ydb/pull/7199) ([Nikolay Shestakov](https://github.com/nshestakov)).
* remove outdated code in rm service [#7207](https://github.com/ydb-platform/ydb/pull/7207) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Refactoring: scan -> traversal [#7210](https://github.com/ydb-platform/ydb/pull/7210) ([azevaykin](https://github.com/azevaykin)).
* History in test results [#7213](https://github.com/ydb-platform/ydb/pull/7213) ([Kirill Rysin](https://github.com/naspirato)).
* do not send request to PartitionActor after finishing of reading [#7214](https://github.com/ydb-platform/ydb/pull/7214) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Async replication: option handling [#7217](https://github.com/ydb-platform/ydb/pull/7217) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Return no-yield guaranties to Collect [#7219](https://github.com/ydb-platform/ydb/pull/7219) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Split bulkupsert and enable stat upload to ydb [#7221](https://github.com/ydb-platform/ydb/pull/7221) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YQ: Fix task id on pq sink [#7223](https://github.com/ydb-platform/ydb/pull/7223) ([Dmitry Kardymon](https://github.com/kardymonds)).
* postgis functions from regress tests [#7225](https://github.com/ydb-platform/ydb/pull/7225) ([Vitaly Stoyan](https://github.com/vitstn)).
* Analyze statistics tests [#7227](https://github.com/ydb-platform/ydb/pull/7227) ([azevaykin](https://github.com/azevaykin)).
* Fix building against modern c-ares [#7232](https://github.com/ydb-platform/ydb/pull/7232) ([Yuriy Chernyshov](https://github.com/georgthegreat)).
* Improve Memory Controller [#7233](https://github.com/ydb-platform/ydb/pull/7233) ([kungurtsev](https://github.com/kunga)).
* Bring order: replace </br> and <br> to <br/> in docs [#7235](https://github.com/ydb-platform/ydb/pull/7235) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Move s3cmd sync to proper place [#7245](https://github.com/ydb-platform/ydb/pull/7245) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add permissions to ydb tools restore [#7247](https://github.com/ydb-platform/ydb/pull/7247) ([Ilia Shakhov](https://github.com/pixcc)).
* some statistics aggregator reboot tests [#7269](https://github.com/ydb-platform/ydb/pull/7269) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Do rm -rf ./.ya instead of ya gc cache [#7275](https://github.com/ydb-platform/ydb/pull/7275) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Rescue asan tests (remove NO_EXPORT_DYNAMIC_SYMBOLS for them) [#7290](https://github.com/ydb-platform/ydb/pull/7290) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Statistics: lternate between forced and scheduled traversals [#7292](https://github.com/ydb-platform/ydb/pull/7292) ([azevaykin](https://github.com/azevaykin)).
* Speedup Restore_block42 [#7295](https://github.com/ydb-platform/ydb/pull/7295) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Improve DescribeReplication() output [#7303](https://github.com/ydb-platform/ydb/pull/7303) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix missing ALTER USER root PASSWORD in YdbWorkloadTransferTopicToTable tests [#7310](https://github.com/ydb-platform/ydb/pull/7310) ([kungurtsev](https://github.com/kunga)).
* Fix rm -rf [#7312](https://github.com/ydb-platform/ydb/pull/7312) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix actor system usage after it was freed [#7316](https://github.com/ydb-platform/ydb/pull/7316) ([Vasily Gerasimov](https://github.com/UgnineSirdis)).
* Fix balancing of large topics [#7317](https://github.com/ydb-platform/ydb/pull/7317) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ci: upgrade github runner to 2.318.0 [#7323](https://github.com/ydb-platform/ydb/pull/7323) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Transitional flag FIX_UNUSED_PARAMETR_PLS=1 (devtools request) [#7330](https://github.com/ydb-platform/ydb/pull/7330) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* add test for parse_double [#7331](https://github.com/ydb-platform/ydb/pull/7331) ([uzhastik](https://github.com/uzhastik)).
* Faster MapperSequentialCalls test [#7344](https://github.com/ydb-platform/ydb/pull/7344) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add tests for spilling in GraceJoin [#7347](https://github.com/ydb-platform/ydb/pull/7347) ([Vladluk](https://github.com/vladl2802)).
* Enable blocking tests policy (relwithdebinfo) [#7350](https://github.com/ydb-platform/ydb/pull/7350) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix UB with reading uninit var [#7356](https://github.com/ydb-platform/ydb/pull/7356) ([uzhastik](https://github.com/uzhastik)).
* Test report: mute history [#7357](https://github.com/ydb-platform/ydb/pull/7357) ([Kirill Rysin](https://github.com/naspirato)).
* fix uninit read in DqRewriteEquiJoin [#7362](https://github.com/ydb-platform/ydb/pull/7362) ([uzhastik](https://github.com/uzhastik)).
* Statistics: TAnalyze event contains many tables + Cookie [#7366](https://github.com/ydb-platform/ydb/pull/7366) ([azevaykin](https://github.com/azevaykin)).
* ci: remove use ubuntu-2204 without oslogin for gh runner image [#7377](https://github.com/ydb-platform/ydb/pull/7377) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Remove MemoryStats from SystemStateInfo [#7378](https://github.com/ydb-platform/ydb/pull/7378) ([kungurtsev](https://github.com/kunga)).
* Split the partition if there is only more than 1 producer [#7379](https://github.com/ydb-platform/ydb/pull/7379) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Add tests for block support for JsonDocument type [#7380](https://github.com/ydb-platform/ydb/pull/7380) ([Igor Munkin](https://github.com/igormunkin)).
* more columnshard traversal tests [#7382](https://github.com/ydb-platform/ydb/pull/7382) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Mute ydb/tests/functional/clickbench [#7387](https://github.com/ydb-platform/ydb/pull/7387) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Added more logging [#7388](https://github.com/ydb-platform/ydb/pull/7388) ([Nikolay Shestakov](https://github.com/nshestakov)).
* implement rows duplication check [#7392](https://github.com/ydb-platform/ydb/pull/7392) ([Mikhail Surin](https://github.com/ssmike)).
* FIX_UNUSED_PARAMETR_PLS=1 (devtools request) [#7396](https://github.com/ydb-platform/ydb/pull/7396) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Statistics: Pass ColumnTags and Types [#7397](https://github.com/ydb-platform/ydb/pull/7397) ([azevaykin](https://github.com/azevaykin)).
* Supported autopartition of topics in the workload [#7420](https://github.com/ydb-platform/ydb/pull/7420) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Use jinja for html in build_analytics [#7439](https://github.com/ydb-platform/ydb/pull/7439) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Print wrongly altered local db table details [#7454](https://github.com/ydb-platform/ydb/pull/7454) ([kungurtsev](https://github.com/kunga)).
* Accurately check database size limit [#7457](https://github.com/ydb-platform/ydb/pull/7457) ([Nikolay Shestakov](https://github.com/nshestakov)).
* temporary fix for SA tablet local db schema [#7459](https://github.com/ydb-platform/ydb/pull/7459) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* fix help typo for local_ydb [#7464](https://github.com/ydb-platform/ydb/pull/7464) ([Timofey Koolin](https://github.com/rekby)).
* fix build for win-x86_64 [#7470](https://github.com/ydb-platform/ydb/pull/7470) ([kruall](https://github.com/kruall)).
* Use common tool in treemap view [#7471](https://github.com/ydb-platform/ydb/pull/7471) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* check vector access [#7474](https://github.com/ydb-platform/ydb/pull/7474) ([uzhastik](https://github.com/uzhastik)).
* add default values for from/to [#7476](https://github.com/ydb-platform/ydb/pull/7476) ([uzhastik](https://github.com/uzhastik)).
* use new avx macros [#7494](https://github.com/ydb-platform/ydb/pull/7494) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Move yql/tests/sql/kikimr_tpch/  to github [#7498](https://github.com/ydb-platform/ydb/pull/7498) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use -DDEBUGINFO_LINES_ONLY for all build types [#7504](https://github.com/ydb-platform/ydb/pull/7504) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Rm -rf in actions (and it will be used in all workflows) [#7507](https://github.com/ydb-platform/ydb/pull/7507) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* cbo/debug: fix Print with missing Stats [#7512](https://github.com/ydb-platform/ydb/pull/7512) ([yumkam](https://github.com/yumkam)).
* Small fixes in LLVM debug info [#7527](https://github.com/ydb-platform/ydb/pull/7527) ([Vadim Averin](https://github.com/avevad)).
* Remove PSQL_BINARY setting in action [#7529](https://github.com/ydb-platform/ydb/pull/7529) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix frozen write sessions which wait reserve bytes [#7530](https://github.com/ydb-platform/ydb/pull/7530) ([Nikolay Shestakov](https://github.com/nshestakov)).
* fixes applied to tpch tests [#7531](https://github.com/ydb-platform/ydb/pull/7531) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* ci: move nodejs and testmo-cli install into gh-runner-image building process [#7544](https://github.com/ydb-platform/ydb/pull/7544) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Extracted yson result formatting from DQ service node [#7563](https://github.com/ydb-platform/ydb/pull/7563) ([Vitaly Stoyan](https://github.com/vitstn)).
* tests/fq: add streamlookup [#7568](https://github.com/ydb-platform/ydb/pull/7568) ([yumkam](https://github.com/yumkam)).
* Fix duplicate junit upload [#7577](https://github.com/ydb-platform/ydb/pull/7577) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Drop unused flag in IsYtCompleteIsolatedLambda [#7587](https://github.com/ydb-platform/ydb/pull/7587) ([Roman Udovichenko](https://github.com/rvu1024)).
* Set KQP & Resource Broker limits from MemoryController [#7590](https://github.com/ydb-platform/ydb/pull/7590) ([kungurtsev](https://github.com/kunga)).
* YDB FQ: Exclude DATABASE_NAME from mandatory for oracle [#7593](https://github.com/ydb-platform/ydb/pull/7593) ([Grigorii Papashvili](https://github.com/lifthelm)).
* Fix testmo name in retry [#7615](https://github.com/ydb-platform/ydb/pull/7615) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* dq: add cbo cost functions [#7617](https://github.com/ydb-platform/ydb/pull/7617) ([yumkam](https://github.com/yumkam)).
* Fix env var name in CI [#7618](https://github.com/ydb-platform/ydb/pull/7618) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove ram requirements in order to speed up checks [#7621](https://github.com/ydb-platform/ydb/pull/7621) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fixes in memory pools [#7623](https://github.com/ydb-platform/ydb/pull/7623) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Flaky tests research [#7626](https://github.com/ydb-platform/ydb/pull/7626) ([Kirill Rysin](https://github.com/naspirato)).
* fix suspended read session of a topic [#7647](https://github.com/ydb-platform/ydb/pull/7647) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Remove ram requirements in order to speed up checks (YQL) [#7648](https://github.com/ydb-platform/ydb/pull/7648) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Return seqno & row index for duplicate rows [#7660](https://github.com/ydb-platform/ydb/pull/7660) ([Mikhail Surin](https://github.com/ssmike)).
* Add tests for pqv1 [#7669](https://github.com/ydb-platform/ydb/pull/7669) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YDB FQ: Oracle integration tests [#7671](https://github.com/ydb-platform/ydb/pull/7671) ([Grigorii Papashvili](https://github.com/lifthelm)).
* system user access to system statistics table [#7679](https://github.com/ydb-platform/ydb/pull/7679) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Add system columns to schemeshard [#7685](https://github.com/ydb-platform/ydb/pull/7685) ([Innokentii Mokin](https://github.com/Enjection)).
* Remove deprecated field of TReleasePartition [#7689](https://github.com/ydb-platform/ydb/pull/7689) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Statistics: OperationId is generated by KQP [#7694](https://github.com/ydb-platform/ydb/pull/7694) ([azevaykin](https://github.com/azevaykin)).
* Add common WaitFor helper to the test actor runtime [#7725](https://github.com/ydb-platform/ydb/pull/7725) ([Aleksei Borzenkov](https://github.com/snaury)).
* Another workaround for exported read table API [#7726](https://github.com/ydb-platform/ydb/pull/7726) ([Vitaly Stoyan](https://github.com/vitstn)).
* fix windows build [#7730](https://github.com/ydb-platform/ydb/pull/7730) ([Vitaly Stoyan](https://github.com/vitstn)).
* TESTOWNERS and migration to column shard [#7733](https://github.com/ydb-platform/ydb/pull/7733) ([Kirill Rysin](https://github.com/naspirato)).
* YQ WM move resource pools into metadata folder [#7741](https://github.com/ydb-platform/ydb/pull/7741) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ci: add github actions runner sync workflow [#7742](https://github.com/ydb-platform/ydb/pull/7742) ([Nikita Kozlovskii](https://github.com/nikitka)).
* solomon: fill client-id [#7746](https://github.com/ydb-platform/ydb/pull/7746) ([uzhastik](https://github.com/uzhastik)).
* fix error code of initialization of read [#7759](https://github.com/ydb-platform/ydb/pull/7759) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Statistics: Two force traversal collections in local DB [#7765](https://github.com/ydb-platform/ydb/pull/7765) ([azevaykin](https://github.com/azevaykin)).
* Add a common TBlockEvents helper class for event interception [#7767](https://github.com/ydb-platform/ydb/pull/7767) ([Aleksei Borzenkov](https://github.com/snaury)).
* YQ-3556 move workload manager sensors under feature flag [#7768](https://github.com/ydb-platform/ydb/pull/7768) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* PQRB HTTP app for autopartitioning diagnostic [#7772](https://github.com/ydb-platform/ydb/pull/7772) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Set SpacesInLineCommentPrefix to 1 [#7782](https://github.com/ydb-platform/ydb/pull/7782) ([dmasloff](https://github.com/dmasloff)).
* Use new test helper TBlockEvents [#7783](https://github.com/ydb-platform/ydb/pull/7783) ([kungurtsev](https://github.com/kunga)).
* Add junk to gitignore [#7793](https://github.com/ydb-platform/ydb/pull/7793) ([kungurtsev](https://github.com/kunga)).
* Replace cpp sdk to v3 [#7796](https://github.com/ydb-platform/ydb/pull/7796) ([Bulat](https://github.com/Gazizonoki)).
* use pipe clients to send requests to tablets [#7817](https://github.com/ydb-platform/ydb/pull/7817) ([andrew stalin](https://github.com/andrewstalin)).
* check root files in workflows [#7823](https://github.com/ydb-platform/ydb/pull/7823) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add comment about junk in gitignore (also check that checks are working) [#7827](https://github.com/ydb-platform/ydb/pull/7827) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove migration flag FIX_UNUSED_PARAMETR_PLS (devtools request) [#7828](https://github.com/ydb-platform/ydb/pull/7828) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix internal PQRB state ([#7792](https://github.com/ydb-platform/ydb/issues/7792)) [#7833](https://github.com/ydb-platform/ydb/pull/7833) ([Nikolay Shestakov](https://github.com/nshestakov)).
* yql_s3_settings: pass AllowLocalFiles from protobuf [#7843](https://github.com/ydb-platform/ydb/pull/7843) ([yumkam](https://github.com/yumkam)).
* Fix ignore shardCount parameter [#7846](https://github.com/ydb-platform/ydb/pull/7846) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Rename incr backup system columns [#7847](https://github.com/ydb-platform/ydb/pull/7847) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix skiff usage in dq [#7864](https://github.com/ydb-platform/ydb/pull/7864) ([Marina Pereskokova](https://github.com/Krisha11)).
* optin for pgwire port [#7870](https://github.com/ydb-platform/ydb/pull/7870) ([Timofey Koolin](https://github.com/rekby)).
* YDB FQ: integration tests for MS SQL Server [#7871](https://github.com/ydb-platform/ydb/pull/7871) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Statistics: Send TEvAnalyzeTable to shards [#7880](https://github.com/ydb-platform/ydb/pull/7880) ([azevaykin](https://github.com/azevaykin)).
* Stop test runtime as soon as stop condition is satisfied [#7887](https://github.com/ydb-platform/ydb/pull/7887) ([Aleksei Borzenkov](https://github.com/snaury)).
* Testowner teams [#7893](https://github.com/ydb-platform/ydb/pull/7893) ([Kirill Rysin](https://github.com/naspirato)).
* YQ change code owners for clickhouse/client [#7898](https://github.com/ydb-platform/ydb/pull/7898) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Fix style tests and add workaround to fix PR check for them [#7899](https://github.com/ydb-platform/ydb/pull/7899) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* solomon: support reading from monitoring [#7903](https://github.com/ydb-platform/ydb/pull/7903) ([uzhastik](https://github.com/uzhastik)).
* solomon: add client-id in push [#7905](https://github.com/ydb-platform/ydb/pull/7905) ([uzhastik](https://github.com/uzhastik)).
* ci: upgrade runner version and PyGitHub [#7908](https://github.com/ydb-platform/ydb/pull/7908) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Fix input transform destructor [#7909](https://github.com/ydb-platform/ydb/pull/7909) ([yumkam](https://github.com/yumkam)).
* Use correct default value for AddressResolver for DQ [#7922](https://github.com/ydb-platform/ydb/pull/7922) ([Aleksandr Gaev](https://github.com/Krock21)).
* fix flake8 style [#7924](https://github.com/ydb-platform/ydb/pull/7924) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix pr_labels in case of empty description [#7930](https://github.com/ydb-platform/ydb/pull/7930) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Change threshhold for postcommit open gate [#7933](https://github.com/ydb-platform/ydb/pull/7933) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Report QueryExecution memory stats [#7936](https://github.com/ydb-platform/ydb/pull/7936) ([kungurtsev](https://github.com/kunga)).
* nemesis driver and ut [#7937](https://github.com/ydb-platform/ydb/pull/7937) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* fix flake8 style [#7939](https://github.com/ydb-platform/ydb/pull/7939) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix flake8 style [#7955](https://github.com/ydb-platform/ydb/pull/7955) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix frozing of write session [#7959](https://github.com/ydb-platform/ydb/pull/7959) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix max calls compilation [#7962](https://github.com/ydb-platform/ydb/pull/7962) ([kungurtsev](https://github.com/kunga)).
* Correct work with TInt128 (win32 compile fix) [#7964](https://github.com/ydb-platform/ydb/pull/7964) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Support forbidden certificate algorithms list in IC [#7974](https://github.com/ydb-platform/ydb/pull/7974) ([Alexander Rutkovsky](https://github.com/alexvru)).
* TSerializedCellVec operator bool [#7981](https://github.com/ydb-platform/ydb/pull/7981) ([azevaykin](https://github.com/azevaykin)).
* ci: download the latest github runner on a VM start [#7987](https://github.com/ydb-platform/ydb/pull/7987) ([Nikita Kozlovskii](https://github.com/nikitka)).
* add stability test to oss [#7992](https://github.com/ydb-platform/ydb/pull/7992) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Tune decimal precision for q66 [#7998](https://github.com/ydb-platform/ydb/pull/7998) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Numerics in beetween [#8004](https://github.com/ydb-platform/ydb/pull/8004) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Statistics: test for SA reboot [#8012](https://github.com/ydb-platform/ydb/pull/8012) ([azevaykin](https://github.com/azevaykin)).
* Fix latest import problems (LLVM include) [#8021](https://github.com/ydb-platform/ydb/pull/8021) ([Vadim Averin](https://github.com/avevad)).
* Remove ram requirements in sqs for sanitizers [#8022](https://github.com/ydb-platform/ydb/pull/8022) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove ram requirements in fq (speed up asan checks) [#8023](https://github.com/ydb-platform/ydb/pull/8023) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove fq/generic from asan precommit checks (too long, and not profitable) [#8026](https://github.com/ydb-platform/ydb/pull/8026) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* auditlog: refactor ydb/core/audit library interface [#8027](https://github.com/ydb-platform/ydb/pull/8027) ([ijon](https://github.com/ijon)).
* Remove providers/generic and core/external_sources from asan precommit checks (too long, and not profitable) [#8034](https://github.com/ydb-platform/ydb/pull/8034) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fixes applied [#8044](https://github.com/ydb-platform/ydb/pull/8044) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Update TESTOWNERS [#8045](https://github.com/ydb-platform/ydb/pull/8045) ([Kirill Rysin](https://github.com/naspirato)).
* YDB FQ: unmute YDB tests [#8053](https://github.com/ydb-platform/ydb/pull/8053) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* YDB FQ: Update github.com/ydb-platform/fq-connector-go to 0.5.3-rc.2 [#8059](https://github.com/ydb-platform/ydb/pull/8059) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Add test create datastream with disabled autopartitioning [#8072](https://github.com/ydb-platform/ydb/pull/8072) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Statistics: ANALYZE tests for SA reboot [#8077](https://github.com/ydb-platform/ydb/pull/8077) ([azevaykin](https://github.com/azevaykin)).
* Apply old Resource Broker config [#8087](https://github.com/ydb-platform/ydb/pull/8087) ([kungurtsev](https://github.com/kunga)).
* Add docs dir into RECURSE ydb [#8092](https://github.com/ydb-platform/ydb/pull/8092) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YQ kqprun enable runtime listing by default [#8096](https://github.com/ydb-platform/ydb/pull/8096) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Statistics: Traverse tests refactoring [#8110](https://github.com/ydb-platform/ydb/pull/8110) ([azevaykin](https://github.com/azevaykin)).
* Statistics: reset events in test observers [#8118](https://github.com/ydb-platform/ydb/pull/8118) ([azevaykin](https://github.com/azevaykin)).
* Add UseRingQueue to ActorSystemConfig [#8122](https://github.com/ydb-platform/ydb/pull/8122) ([kruall](https://github.com/kruall)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.5-rc.1 [#8127](https://github.com/ydb-platform/ydb/pull/8127) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Refactor tests for BlockMapJoinCore computation node [#8129](https://github.com/ydb-platform/ydb/pull/8129) ([Igor Munkin](https://github.com/igormunkin)).
* move wardens test to oss [#8130](https://github.com/ydb-platform/ydb/pull/8130) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* golang pg test [#8132](https://github.com/ydb-platform/ydb/pull/8132) ([Timofey Koolin](https://github.com/rekby)).
* Update postgis functions from tests [#8133](https://github.com/ydb-platform/ydb/pull/8133) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fix possible write session frozing ([#8075](https://github.com/ydb-platform/ydb/issues/8075)) [#8134](https://github.com/ydb-platform/ydb/pull/8134) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Debug logging in WaiFor [#8137](https://github.com/ydb-platform/ydb/pull/8137) ([azevaykin](https://github.com/azevaykin)).
* Show a nicer demangled name in block/unblock messages [#8138](https://github.com/ydb-platform/ydb/pull/8138) ([Aleksei Borzenkov](https://github.com/snaury)).
* Report UNKNOWN status to SysView for disks that have not checked in yet [#8144](https://github.com/ydb-platform/ydb/pull/8144) ([Alexander Rutkovsky](https://github.com/alexvru)).
* ci: fix logic in check-is-mergeable check [#8152](https://github.com/ydb-platform/ydb/pull/8152) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Upload testowners analytics in workflow [#8156](https://github.com/ydb-platform/ydb/pull/8156) ([Kirill Rysin](https://github.com/naspirato)).
* Statistics: disable some internal events without feature flag [#8159](https://github.com/ydb-platform/ydb/pull/8159) ([azevaykin](https://github.com/azevaykin)).
* tpc ds: manually optimize join order to workaround [#7565](https://github.com/ydb-platform/ydb/issues/7565) [#8163](https://github.com/ydb-platform/ydb/pull/8163) ([yumkam](https://github.com/yumkam)).
* ci: upgrade actions/checkout@v4, actions/github-script@v7, add test_retry_count input for build_and_test_ya action [#8164](https://github.com/ydb-platform/ydb/pull/8164) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Do docker-compose tests in parallel [#8165](https://github.com/ydb-platform/ydb/pull/8165) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Statistics: Remove IsSchemeshardSeen, rely on persisted ScheduleTraversals [#8182](https://github.com/ydb-platform/ydb/pull/8182) ([azevaykin](https://github.com/azevaykin)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.5-rc.2 [#8183](https://github.com/ydb-platform/ydb/pull/8183) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* subscribe on changes in resource broker [#8187](https://github.com/ydb-platform/ydb/pull/8187) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Statistics: retry AnalyzeTable to ColumnShard [#8190](https://github.com/ydb-platform/ydb/pull/8190) ([azevaykin](https://github.com/azevaykin)).
* set partitioning settings for statistics table [#8193](https://github.com/ydb-platform/ydb/pull/8193) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Statistics: Expanded ForceTraversalOperations scheme, add CreatedAt [#8194](https://github.com/ydb-platform/ydb/pull/8194) ([andrew stalin](https://github.com/andrewstalin)).
* Support STLOG json format for JSON output [#8205](https://github.com/ydb-platform/ydb/pull/8205) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Serialize constraints to yson [#8211](https://github.com/ydb-platform/ydb/pull/8211) ([Roman Udovichenko](https://github.com/rvu1024)).
* Handle Write in DQ recapture [#8212](https://github.com/ydb-platform/ydb/pull/8212) ([Roman Udovichenko](https://github.com/rvu1024)).
* Statistic: Delete analyze after deadline [#8214](https://github.com/ydb-platform/ydb/pull/8214) ([azevaykin](https://github.com/azevaykin)).
* ci: upgrade actions/checkout@v4, actions/github-script@v7, test_retry_count input variable [#8216](https://github.com/ydb-platform/ydb/pull/8216) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Always limit HardLimitBytes with MemTotal [#8223](https://github.com/ydb-platform/ydb/pull/8223) ([kungurtsev](https://github.com/kunga)).
* Upload html summary before updating status [#8224](https://github.com/ydb-platform/ydb/pull/8224) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Clearer comments [#8229](https://github.com/ydb-platform/ydb/pull/8229) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* remove anon namespace [#8236](https://github.com/ydb-platform/ydb/pull/8236) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add node name to labels [#8237](https://github.com/ydb-platform/ydb/pull/8237) ([Ilia Shakhov](https://github.com/pixcc)).
* Optimize grpc for pqv0  ([#8199](https://github.com/ydb-platform/ydb/issues/8199)) [#8239](https://github.com/ydb-platform/ydb/pull/8239) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Allow sinks for data query [#8242](https://github.com/ydb-platform/ydb/pull/8242) ([Nikita Vasilev](https://github.com/nikvas0)).
* add histogram on history sizes [#8246](https://github.com/ydb-platform/ydb/pull/8246) ([vporyadke](https://github.com/vporyadke)).
* Fix duplicated responses in collect/propose query [#8249](https://github.com/ydb-platform/ydb/pull/8249) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Add decimal unary kernels [#8254](https://github.com/ydb-platform/ydb/pull/8254) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Fix tstool file descriptor leak [#8259](https://github.com/ydb-platform/ydb/pull/8259) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Added a timeout waiting for a response from the tablet [#8260](https://github.com/ydb-platform/ydb/pull/8260) ([andrew stalin](https://github.com/andrewstalin)).
* Async replication: configurable default retention period [#8270](https://github.com/ydb-platform/ydb/pull/8270) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Add decimal comparison kernels [#8271](https://github.com/ydb-platform/ydb/pull/8271) ([Alexey Ozeritskiy](https://github.com/resetius)).
* YDB FQ: Update github.com/ydb-platform/fq-connector-go to 0.5.6-rc.2 [#8276](https://github.com/ydb-platform/ydb/pull/8276) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Statistics: reboot columnshard test [#8278](https://github.com/ydb-platform/ydb/pull/8278) ([azevaykin](https://github.com/azevaykin)).
* Statistics: more logs in statistics service [#8282](https://github.com/ydb-platform/ydb/pull/8282) ([azevaykin](https://github.com/azevaykin)).
* tpc ds q32: fix yql translation [#8295](https://github.com/ydb-platform/ydb/pull/8295) ([yumkam](https://github.com/yumkam)).
* Report index sizes by type [#8297](https://github.com/ydb-platform/ydb/pull/8297) ([kungurtsev](https://github.com/kunga)).
* tpc ds q14: temporary workaround CBO bug [#8298](https://github.com/ydb-platform/ydb/pull/8298) ([yumkam](https://github.com/yumkam)).
* Mute KqpStats.SysViewClientLost [#8301](https://github.com/ydb-platform/ydb/pull/8301) ([Kirill Rysin](https://github.com/naspirato)).
* Replace DEFINE_SIMPLE_LOCAL_EVENT to TEventLocal [#8302](https://github.com/ydb-platform/ydb/pull/8302) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use UserPool for pqv0 actors [#8316](https://github.com/ydb-platform/ydb/pull/8316) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Statistics service metrics [#8322](https://github.com/ydb-platform/ydb/pull/8322) ([andrew stalin](https://github.com/andrewstalin)).
* YQ-3322: Row dispatcher: add use_row_dispatcher to public api [#8331](https://github.com/ydb-platform/ydb/pull/8331) ([Dmitry Kardymon](https://github.com/kardymonds)).
* AssumeConstraints callable [#8349](https://github.com/ydb-platform/ydb/pull/8349) ([Roman Udovichenko](https://github.com/rvu1024)).
* [yt provider] Properly clear constraints in YqlRowSpec [#8350](https://github.com/ydb-platform/ydb/pull/8350) ([Roman Udovichenko](https://github.com/rvu1024)).
* Get rid of copy-pase of TChangeRecordContainer [#8352](https://github.com/ydb-platform/ydb/pull/8352) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Moved NotExistsIsOk setting to recursive remove settings [#8355](https://github.com/ydb-platform/ydb/pull/8355) ([Bulat](https://github.com/Gazizonoki)).
* Handle Unordered in Dq [#8357](https://github.com/ydb-platform/ydb/pull/8357) ([Roman Udovichenko](https://github.com/rvu1024)).
* retry requests to statistics table [#8358](https://github.com/ydb-platform/ydb/pull/8358) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Randomize order of sessions [#8359](https://github.com/ydb-platform/ydb/pull/8359) ([Nikolay Shestakov](https://github.com/nshestakov)).
* [docs] create .gitignore [#8362](https://github.com/ydb-platform/ydb/pull/8362) ([Ivan Blinkov](https://github.com/blinkov)).
* Introduce TBlockJoinState [#8368](https://github.com/ydb-platform/ydb/pull/8368) ([Igor Munkin](https://github.com/igormunkin)).
* ci: add workflow for create github actions runner vm image [#8371](https://github.com/ydb-platform/ydb/pull/8371) ([Nikita Kozlovskii](https://github.com/nikitka)).
* SQL lang functions in postgis [#8374](https://github.com/ydb-platform/ydb/pull/8374) ([Vitaly Stoyan](https://github.com/vitstn)).
* Locks for Scan Actor [#8379](https://github.com/ydb-platform/ydb/pull/8379) ([Nikita Vasilev](https://github.com/nikvas0)).
* Removed legacy KV API [#8383](https://github.com/ydb-platform/ydb/pull/8383) ([mregrock](https://github.com/mregrock)).
* Randomize semaphore name for tests [#8385](https://github.com/ydb-platform/ydb/pull/8385) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix test & Sink [#8386](https://github.com/ydb-platform/ydb/pull/8386) ([Nikita Vasilev](https://github.com/nikvas0)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.6-rc.3 [#8387](https://github.com/ydb-platform/ydb/pull/8387) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Add TotalNodeCpuUsage to local's metrics [#8390](https://github.com/ydb-platform/ydb/pull/8390) ([Ilia Shakhov](https://github.com/pixcc)).
* Statistics: several analyzes inflight [#8394](https://github.com/ydb-platform/ydb/pull/8394) ([azevaykin](https://github.com/azevaykin)).
* Statistics: disable datashard traversal [#8402](https://github.com/ydb-platform/ydb/pull/8402) ([azevaykin](https://github.com/azevaykin)).
* Statistics: status for TEvAnalyzeResponse [#8404](https://github.com/ydb-platform/ydb/pull/8404) ([azevaykin](https://github.com/azevaykin)).
* Delete deprecated code (ReadRules,..) [#8405](https://github.com/ydb-platform/ydb/pull/8405) ([Nikolay Shestakov](https://github.com/nshestakov)).
* executer & planner changes to potentially improve placing [#8409](https://github.com/ydb-platform/ydb/pull/8409) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Properly optimize unordered YtOutput over YtDqProcessWrite [#8411](https://github.com/ydb-platform/ydb/pull/8411) ([Roman Udovichenko](https://github.com/rvu1024)).
* Remove cmake from nightly [#8416](https://github.com/ydb-platform/ydb/pull/8416) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Move stability test into manual (because it is a cluster test) [#8419](https://github.com/ydb-platform/ydb/pull/8419) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Sink locks tests + some locks fixes [#8420](https://github.com/ydb-platform/ydb/pull/8420) ([Nikita Vasilev](https://github.com/nikvas0)).
* TEvRecords helpers, little style guide changes [#8421](https://github.com/ydb-platform/ydb/pull/8421) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Test for RW olap tx [#8423](https://github.com/ydb-platform/ydb/pull/8423) ([Nikita Vasilev](https://github.com/nikvas0)).
* Reset traversal for tables with TraversalStarted status [#8441](https://github.com/ydb-platform/ydb/pull/8441) ([andrew stalin](https://github.com/andrewstalin)).
* Add unit test: drop then add column with different type [#8446](https://github.com/ydb-platform/ydb/pull/8446) ([Semyon](https://github.com/swalrus1)).
* Switch tests to the new tablet service [#8454](https://github.com/ydb-platform/ydb/pull/8454) ([Aleksei Borzenkov](https://github.com/snaury)).
* Return MemoryStats to node whiteboard [#8455](https://github.com/ydb-platform/ydb/pull/8455) ([kungurtsev](https://github.com/kunga)).
* support launching tasks in the same dc with executer [#8457](https://github.com/ydb-platform/ydb/pull/8457) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* add stage level to compute actor span to clarify it's purpose [#8467](https://github.com/ydb-platform/ydb/pull/8467) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Statistics: updated HTML page [#8471](https://github.com/ydb-platform/ydb/pull/8471) ([azevaykin](https://github.com/azevaykin)).
* ci: add unified-agent into github runner VM [#8474](https://github.com/ydb-platform/ydb/pull/8474) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Prepare for testmo retries [#8475](https://github.com/ydb-platform/ydb/pull/8475) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use the new tablet service in ydbd admin tablet commands [#8478](https://github.com/ydb-platform/ydb/pull/8478) ([Aleksei Borzenkov](https://github.com/snaury)).
* Statistics: more logging [#8480](https://github.com/ydb-platform/ydb/pull/8480) ([azevaykin](https://github.com/azevaykin)).
* Mute test [#8484](https://github.com/ydb-platform/ydb/pull/8484) ([Nikita Vasilev](https://github.com/nikvas0)).
* Fix commit using EvWrite [#8489](https://github.com/ydb-platform/ydb/pull/8489) ([Nikita Vasilev](https://github.com/nikvas0)).
* StatisticsService: updated HTML page [#8507](https://github.com/ydb-platform/ydb/pull/8507) ([andrew stalin](https://github.com/andrewstalin)).
* Stop using LocalMKQL and LocalSchemeTx msgbus requests in tests [#8515](https://github.com/ydb-platform/ydb/pull/8515) ([Aleksei Borzenkov](https://github.com/snaury)).
* Get rid of backticks in async replication examples [#8516](https://github.com/ydb-platform/ydb/pull/8516) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* ci: unified-agent: export preset name [#8518](https://github.com/ydb-platform/ydb/pull/8518) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Retry 5xx in testmo interaction (Server response (503): Account is in maintenance mode) [#8519](https://github.com/ydb-platform/ydb/pull/8519) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix flaky calculation [#8539](https://github.com/ydb-platform/ydb/pull/8539) ([Kirill Rysin](https://github.com/naspirato)).
* FixNamespaceComments in /contrib/ydb [#8548](https://github.com/ydb-platform/ydb/pull/8548) ([dmasloff](https://github.com/dmasloff)).
* Don't run large_serializable in PR [#8549](https://github.com/ydb-platform/ydb/pull/8549) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Added separation skips/not_runed for flaky analitycs [#8551](https://github.com/ydb-platform/ydb/pull/8551) ([Kirill Rysin](https://github.com/naspirato)).
* add report [#8556](https://github.com/ydb-platform/ydb/pull/8556) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Check result format in yqlrun/dqrun tests [#8559](https://github.com/ydb-platform/ydb/pull/8559) ([Vitaly Stoyan](https://github.com/vitstn)).
* Remove DEFINE_SIMPLE_NONLOCAL_EVENT, add TEventSimpleNonLocal [#8562](https://github.com/ydb-platform/ydb/pull/8562) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Enable CTAS Immediate EvWrite for CS [#8578](https://github.com/ydb-platform/ydb/pull/8578) ([Nikita Vasilev](https://github.com/nikvas0)).
* Do not ignore configure errors [#8586](https://github.com/ydb-platform/ydb/pull/8586) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Introduce a common Shared Cache cache interface [#8590](https://github.com/ydb-platform/ydb/pull/8590) ([kungurtsev](https://github.com/kunga)).
* -o pipefail  in graph_compare [#8600](https://github.com/ydb-platform/ydb/pull/8600) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Don't run large_serializable in PR (2nd attempt) [#8606](https://github.com/ydb-platform/ydb/pull/8606) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Implement Shared Cache replacement policy hot switch [#8607](https://github.com/ydb-platform/ydb/pull/8607) ([kungurtsev](https://github.com/kunga)).
* Test runtime: Easy wait for a single event [#8608](https://github.com/ydb-platform/ydb/pull/8608) ([azevaykin](https://github.com/azevaykin)).
* Reset __async_replica attr after changing REPLICATION_MODE to NONE [#8610](https://github.com/ydb-platform/ydb/pull/8610) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* data query uses different local compute tasks param [#8632](https://github.com/ydb-platform/ydb/pull/8632) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Test report: links to history [#8638](https://github.com/ydb-platform/ydb/pull/8638) ([Kirill Rysin](https://github.com/naspirato)).
* Add const to the condition function [#8644](https://github.com/ydb-platform/ydb/pull/8644) ([azevaykin](https://github.com/azevaykin)).
* Statistics: TWaitForFirstEvent [#8646](https://github.com/ydb-platform/ydb/pull/8646) ([azevaykin](https://github.com/azevaykin)).
* Debug logs for EvWrite/EvRead [#8653](https://github.com/ydb-platform/ydb/pull/8653) ([Nikita Vasilev](https://github.com/nikvas0)).
* Add gRPC API for recommender [#8654](https://github.com/ydb-platform/ydb/pull/8654) ([Ilia Shakhov](https://github.com/pixcc)).
* fixes applied to sessions sysview [#8661](https://github.com/ydb-platform/ydb/pull/8661) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Publish testmo.json [#8663](https://github.com/ydb-platform/ydb/pull/8663) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* CDC supported types test [#8664](https://github.com/ydb-platform/ydb/pull/8664) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Remove load_network (it was commented for 2+ years) [#8679](https://github.com/ydb-platform/ydb/pull/8679) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YQ WM added unit tests for sls disable [#8687](https://github.com/ydb-platform/ydb/pull/8687) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Remove YT migration helper [#8691](https://github.com/ydb-platform/ydb/pull/8691) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Shared Cache S3FIFO implementation [#8692](https://github.com/ydb-platform/ydb/pull/8692) ([kungurtsev](https://github.com/kunga)).
* Remove ISerializerToStream [#8722](https://github.com/ydb-platform/ydb/pull/8722) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Make it easier to use IEventHandle as an unfiltered event type in tests [#8723](https://github.com/ydb-platform/ydb/pull/8723) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix locks tests [#8733](https://github.com/ydb-platform/ydb/pull/8733) ([Nikita Vasilev](https://github.com/nikvas0)).
* Change all PerSessionCounters to AdaptiveCounters [#8741](https://github.com/ydb-platform/ydb/pull/8741) ([kruall](https://github.com/kruall)).
* Remove templates.h [#8746](https://github.com/ydb-platform/ydb/pull/8746) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix incorrect DC comparison [#8747](https://github.com/ydb-platform/ydb/pull/8747) ([Alexander Rutkovsky](https://github.com/alexvru)).
* fix analyze for serverless case [#8754](https://github.com/ydb-platform/ydb/pull/8754) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Revert macro (broken arcadia and nbs) [#8758](https://github.com/ydb-platform/ydb/pull/8758) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix monitoring page registration races in tests [#8770](https://github.com/ydb-platform/ydb/pull/8770) ([Aleksei Borzenkov](https://github.com/snaury)).
* Move graph_compare logic into tests_ya/action.yml [#8776](https://github.com/ydb-platform/ydb/pull/8776) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fixed unit test ManyColumnShards [#8777](https://github.com/ydb-platform/ydb/pull/8777) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* support solomon reading from subquery [#8779](https://github.com/ydb-platform/ydb/pull/8779) ([uzhastik](https://github.com/uzhastik)).
* Post graph_compare.sh logs [#8787](https://github.com/ydb-platform/ydb/pull/8787) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* increase timeout for tests [#8818](https://github.com/ydb-platform/ydb/pull/8818) ([uzhastik](https://github.com/uzhastik)).
* Validate protos from antlr4 [#8832](https://github.com/ydb-platform/ydb/pull/8832) ([Vitaly Stoyan](https://github.com/vitstn)).
* fix grammar in healthcheck messages [#8839](https://github.com/ydb-platform/ydb/pull/8839) ([vporyadke](https://github.com/vporyadke)).
* Always show table name in locks broken error 2 [#8840](https://github.com/ydb-platform/ydb/pull/8840) ([Nikita Vasilev](https://github.com/nikvas0)).
* Optimize memory usage for CMS functional tests [#8846](https://github.com/ydb-platform/ydb/pull/8846) ([Ilia Shakhov](https://github.com/pixcc)).
* Mute ydb/tests/functional/hive/test_drain.py.TestHive.test_drain_on_stop [#8852](https://github.com/ydb-platform/ydb/pull/8852) ([Kirill Rysin](https://github.com/naspirato)).
* Olap TableStore read/write test [#8858](https://github.com/ydb-platform/ydb/pull/8858) ([Nikita Vasilev](https://github.com/nikvas0)).
* NodesManager cleanup [#8863](https://github.com/ydb-platform/ydb/pull/8863) ([Oleg Doronin](https://github.com/dorooleg)).
* mute rules upd [#8865](https://github.com/ydb-platform/ydb/pull/8865) ([Kirill Rysin](https://github.com/naspirato)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.8-rc.1 [#8866](https://github.com/ydb-platform/ydb/pull/8866) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Text of the DescribePath error has been improved [#8868](https://github.com/ydb-platform/ydb/pull/8868) ([Oleg Doronin](https://github.com/dorooleg)).
* Fix error message about merge conflicts [#8883](https://github.com/ydb-platform/ydb/pull/8883) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove unused imports in proto [#8885](https://github.com/ydb-platform/ydb/pull/8885) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Show tests with max RSS [#8888](https://github.com/ydb-platform/ydb/pull/8888) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Typed pg descriptor [#8913](https://github.com/ydb-platform/ydb/pull/8913) ([azevaykin](https://github.com/azevaykin)).
* HTAP: Query Processor [#8917](https://github.com/ydb-platform/ydb/pull/8917) ([Nikita Vasilev](https://github.com/nikvas0)).
* Nemesis statistics workload [#8919](https://github.com/ydb-platform/ydb/pull/8919) ([andrew stalin](https://github.com/andrewstalin)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.8-rc.2 [#8932](https://github.com/ydb-platform/ydb/pull/8932) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Move some into test_ya action [#8937](https://github.com/ydb-platform/ydb/pull/8937) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix tx tests [#8945](https://github.com/ydb-platform/ydb/pull/8945) ([Nikita Vasilev](https://github.com/nikvas0)).
* Disallow disabling of topic autopartitioning ([#8871](https://github.com/ydb-platform/ydb/issues/8871)) [#8949](https://github.com/ydb-platform/ydb/pull/8949) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YDB FQ: Use `--tmpfs` flag when running docker containers [#8951](https://github.com/ydb-platform/ydb/pull/8951) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Fix spacing in logs [#8954](https://github.com/ydb-platform/ydb/pull/8954) ([Innokentii Mokin](https://github.com/Enjection)).
* Support of out of code builds [#8962](https://github.com/ydb-platform/ydb/pull/8962) ([Vitaly Stoyan](https://github.com/vitstn)).
* Mute ydb/core/kqp/ut/tx tests [#8969](https://github.com/ydb-platform/ydb/pull/8969) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add incremental restore type in ChangeExchange [#8986](https://github.com/ydb-platform/ydb/pull/8986) ([Innokentii Mokin](https://github.com/Enjection)).
* unmute tests [#8993](https://github.com/ydb-platform/ydb/pull/8993) ([Nikita Vasilev](https://github.com/nikvas0)).
* Make change sender identity explicit [#8995](https://github.com/ydb-platform/ydb/pull/8995) ([Innokentii Mokin](https://github.com/Enjection)).
* Topic autopartitioning for CDC [#8996](https://github.com/ydb-platform/ydb/pull/8996) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Add link to s3 artifacts [#9001](https://github.com/ydb-platform/ydb/pull/9001) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Do not use autopartition settings when autopartitioning was disabled [#9005](https://github.com/ydb-platform/ydb/pull/9005) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Mute ydb/core/kqp/ut/query/KqpLimits.QueryExecTimeoutCancel [#9018](https://github.com/ydb-platform/ydb/pull/9018) ([Kirill Rysin](https://github.com/naspirato)).
* Prepare async index change sender to reuse [#9024](https://github.com/ydb-platform/ydb/pull/9024) ([Innokentii Mokin](https://github.com/Enjection)).
* YDB FQ: split `ydb/tests/fq/generic` into two folders [#9029](https://github.com/ydb-platform/ydb/pull/9029) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Replaced client cache to server cache in ydb tools restore command [#9031](https://github.com/ydb-platform/ydb/pull/9031) ([Bulat](https://github.com/Gazizonoki)).
* Remove some from kikimr_config [#9032](https://github.com/ydb-platform/ydb/pull/9032) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Update TESTOWNERS appteam ydb/tests/postgres_integrations/go-libpq [#9049](https://github.com/ydb-platform/ydb/pull/9049) ([Kirill Rysin](https://github.com/naspirato)).
* Disable CTAS by default [#9057](https://github.com/ydb-platform/ydb/pull/9057) ([Nikita Vasilev](https://github.com/nikvas0)).
* add arrow memory pools graphs [#9061](https://github.com/ydb-platform/ydb/pull/9061) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* calculate yql memory bytes allocated [#9065](https://github.com/ydb-platform/ydb/pull/9065) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Add utilization and starvation sensors [#9066](https://github.com/ydb-platform/ydb/pull/9066) ([Alexander Rutkovsky](https://github.com/alexvru)).
* YQ fixed build in testlib [#9071](https://github.com/ydb-platform/ydb/pull/9071) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Clean up code in harness [#9076](https://github.com/ydb-platform/ydb/pull/9076) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Mute ydb/library/yql/providers/generic/connector/tests/datasource/ydb/ 13 tests [#9101](https://github.com/ydb-platform/ydb/pull/9101) ([Kirill Rysin](https://github.com/naspirato)).
* Add senders readiness helpers [#9103](https://github.com/ydb-platform/ydb/pull/9103) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix cloudId for YMQ ([#9088](https://github.com/ydb-platform/ydb/issues/9088)) [#9107](https://github.com/ydb-platform/ydb/pull/9107) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Refactor tests for BlockMapJoinCore computation node (again) [#9111](https://github.com/ydb-platform/ydb/pull/9111) ([Igor Munkin](https://github.com/igormunkin)).
* Sort datashard ya.make srcs [#9115](https://github.com/ydb-platform/ydb/pull/9115) ([Innokentii Mokin](https://github.com/Enjection)).
* schemeshard: make direct creation of TAlterExtSubDomain impossible [#9157](https://github.com/ydb-platform/ydb/pull/9157) ([ijon](https://github.com/ijon)).
* Get rid of TChangeRecordBuilderTrait [#9164](https://github.com/ydb-platform/ydb/pull/9164) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* get prepared for recipe update [#9165](https://github.com/ydb-platform/ydb/pull/9165) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Rename TChangeRecordBuilderContextTrait to TSerializationContext, move it inside TChangeRecord [#9178](https://github.com/ydb-platform/ydb/pull/9178) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YQ-3671 move ydb/core/formats into ydb/library/formats [#9180](https://github.com/ydb-platform/ydb/pull/9180) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Add import ACL from S3 for tables [#9181](https://github.com/ydb-platform/ydb/pull/9181) ([Ilia Shakhov](https://github.com/pixcc)).
* Extract stream scan internal structs for further reuse [#9183](https://github.com/ydb-platform/ydb/pull/9183) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix sink index column order [#9190](https://github.com/ydb-platform/ydb/pull/9190) ([Nikita Vasilev](https://github.com/nikvas0)).
* schemeshard: fix Alter{Ext,}SubDomain compatibility [#9198](https://github.com/ydb-platform/ydb/pull/9198) ([ijon](https://github.com/ijon)).
* HTAP: single arbiter [#9199](https://github.com/ydb-platform/ydb/pull/9199) ([Nikita Vasilev](https://github.com/nikvas0)).
* Reduce memory footprint for shards info [#9207](https://github.com/ydb-platform/ydb/pull/9207) ([Nikita Vasilev](https://github.com/nikvas0)).
* Mute ydb/library/yql/providers/generic/connector/tests/datasource/clickhouse/ 12 tests [#9209](https://github.com/ydb-platform/ydb/pull/9209) ([Kirill Rysin](https://github.com/naspirato)).
* add lost peerdir [#9210](https://github.com/ydb-platform/ydb/pull/9210) ([uzhastik](https://github.com/uzhastik)).
* Refactor harness [#9211](https://github.com/ydb-platform/ydb/pull/9211) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Mute ydb/core/kqp/ut/olap/ 2 tests [#9214](https://github.com/ydb-platform/ydb/pull/9214) ([Kirill Rysin](https://github.com/naspirato)).
* tests for [#9177](https://github.com/ydb-platform/ydb/issues/9177) [#9217](https://github.com/ydb-platform/ydb/pull/9217) ([yumkam](https://github.com/yumkam)).
* split proto_ast by antlr version [#9219](https://github.com/ydb-platform/ydb/pull/9219) ([Vitaly Stoyan](https://github.com/vitstn)).
* add lost inline [#9222](https://github.com/ydb-platform/ydb/pull/9222) ([uzhastik](https://github.com/uzhastik)).
* YQ fix cmake library name clash [#9235](https://github.com/ydb-platform/ydb/pull/9235) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* HTAP: ProposeTx + EvWrite [#9236](https://github.com/ydb-platform/ydb/pull/9236) ([Nikita Vasilev](https://github.com/nikvas0)).
* WriteActror settings [#9251](https://github.com/ydb-platform/ydb/pull/9251) ([Nikita Vasilev](https://github.com/nikvas0)).
* (refactoring) Get rid of template change sender [#9253](https://github.com/ydb-platform/ydb/pull/9253) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* fix int overflow [#9261](https://github.com/ydb-platform/ydb/pull/9261) ([uzhastik](https://github.com/uzhastik)).
* Remove implicit casts from nullptr to TString [#9262](https://github.com/ydb-platform/ydb/pull/9262) ([Golear Dimitris](https://github.com/Disadvantaged)).
* remove ydb provider from peerdirs, sort paths [#9263](https://github.com/ydb-platform/ydb/pull/9263) ([uzhastik](https://github.com/uzhastik)).
* check iterator before use [#9264](https://github.com/ydb-platform/ydb/pull/9264) ([uzhastik](https://github.com/uzhastik)).
* Add incr restore scan [#9265](https://github.com/ydb-platform/ydb/pull/9265) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix test result order mismatch [#9266](https://github.com/ydb-platform/ydb/pull/9266) ([Roman Udovichenko](https://github.com/rvu1024)).
* (refactoring) Get rid of template local table writer [#9270](https://github.com/ydb-platform/ydb/pull/9270) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix warning [#9274](https://github.com/ydb-platform/ydb/pull/9274) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Improved statistics_workload test [#9275](https://github.com/ydb-platform/ydb/pull/9275) ([andrew stalin](https://github.com/andrewstalin)).
* Decimal: win32 compile fix [#9290](https://github.com/ydb-platform/ydb/pull/9290) ([Alexey Ozeritskiy](https://github.com/resetius)).
* Fix UB for unexpected request case [#9295](https://github.com/ydb-platform/ydb/pull/9295) ([Alexander Rutkovsky](https://github.com/alexvru)).
* [RFC] Add checkpoint support for streamlookup [#9299](https://github.com/ydb-platform/ydb/pull/9299) ([yumkam](https://github.com/yumkam)).
* add mmapped bytes counter to mkql allocator [#9307](https://github.com/ydb-platform/ydb/pull/9307) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix typing for block decimal avg (use logic of non-block version) [#9327](https://github.com/ydb-platform/ydb/pull/9327) ([Alexey Ozeritskiy](https://github.com/resetius)).
* [backups][yql] Implement entries handling for backup collections [#9338](https://github.com/ydb-platform/ydb/pull/9338) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix sinks order [#9345](https://github.com/ydb-platform/ydb/pull/9345) ([Nikita Vasilev](https://github.com/nikvas0)).
* Fix compatibility with legacy external projects [#9346](https://github.com/ydb-platform/ydb/pull/9346) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix build antlr4 for sandboxing/windows [#9362](https://github.com/ydb-platform/ydb/pull/9362) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add all params to viewer/nodes swagger [#9366](https://github.com/ydb-platform/ydb/pull/9366) ([Артём Муфазалов](https://github.com/artemmufazalov)).
* fix aligned page pool counters [#9373](https://github.com/ydb-platform/ydb/pull/9373) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Optimize size of PQTabletConfig [#9375](https://github.com/ydb-platform/ydb/pull/9375) ([Nikolay Shestakov](https://github.com/nshestakov)).
* generic_lookup_actor: add basic error handling [#9396](https://github.com/ydb-platform/ydb/pull/9396) ([yumkam](https://github.com/yumkam)).
* [DQ] Fix YtDqProcessWrite with aux columns in YT emulation mode [#9400](https://github.com/ydb-platform/ydb/pull/9400) ([Roman Udovichenko](https://github.com/rvu1024)).
* [yt provider] Move UnorderedPublishTarget to finalizing [#9402](https://github.com/ydb-platform/ydb/pull/9402) ([Roman Udovichenko](https://github.com/rvu1024)).
* Pg test stable [#9405](https://github.com/ydb-platform/ydb/pull/9405) ([Timofey Koolin](https://github.com/rekby)).
* Fixes after refactoring [#9421](https://github.com/ydb-platform/ydb/pull/9421) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Filter out export directories [#9427](https://github.com/ydb-platform/ydb/pull/9427) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* return default channel buffer size for these tests [#9439](https://github.com/ydb-platform/ydb/pull/9439) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Different ydbds in harness [#9444](https://github.com/ydb-platform/ydb/pull/9444) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* allow to cleanup mkql allocator free lists in background [#9450](https://github.com/ydb-platform/ydb/pull/9450) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Optimize file downloading for requests with strong worker filters [#9452](https://github.com/ydb-platform/ydb/pull/9452) ([Alexey Ozeritskiy](https://github.com/resetius)).
* remove unused import [#9465](https://github.com/ydb-platform/ydb/pull/9465) ([uzhastik](https://github.com/uzhastik)).
* [backups][yql] add backup-restore statements [#9473](https://github.com/ydb-platform/ydb/pull/9473) ([Innokentii Mokin](https://github.com/Enjection)).
* Simplify TTypeInfo constructors [#9480](https://github.com/ydb-platform/ydb/pull/9480) ([azevaykin](https://github.com/azevaykin)).
* fix: pass project name in storage-bucket [#9492](https://github.com/ydb-platform/ydb/pull/9492) ([Ivan Lediaev](https://github.com/main-kun)).
* More tests for CTAS [#9497](https://github.com/ydb-platform/ydb/pull/9497) ([Nikita Vasilev](https://github.com/nikvas0)).
* remove unused proto fields [#9500](https://github.com/ydb-platform/ydb/pull/9500) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Support address hints in pipe clients and designated initializers for TClientConfig [#9503](https://github.com/ydb-platform/ydb/pull/9503) ([Aleksei Borzenkov](https://github.com/snaury)).
* YQ-3322 Move pg from common to purecalc [#9512](https://github.com/ydb-platform/ydb/pull/9512) ([Dmitry Kardymon](https://github.com/kardymonds)).
* add debug details to troubleshoot scan data ack failure [#9518](https://github.com/ydb-platform/ydb/pull/9518) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix bulk upsert rewrite results asan/relwithdevinfo in analytics [#9521](https://github.com/ydb-platform/ydb/pull/9521) ([Kirill Rysin](https://github.com/naspirato)).
* Introduce nightly-build [#9525](https://github.com/ydb-platform/ydb/pull/9525) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Revert 9526 revert cdc [#9527](https://github.com/ydb-platform/ydb/pull/9527) ([Ivan Nikolaev](https://github.com/lex007in)).
* Skip database prefix in replication description [#9530](https://github.com/ydb-platform/ydb/pull/9530) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Move type serialization functions to a separate type_serialization.h [#9537](https://github.com/ydb-platform/ydb/pull/9537) ([Ivan Nikolaev](https://github.com/lex007in)).
* extra details added to error message [#9539](https://github.com/ydb-platform/ydb/pull/9539) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Rename `HasNotRight` -> `HasNoRight` in tests [#9550](https://github.com/ydb-platform/ydb/pull/9550) ([Ilia Shakhov](https://github.com/pixcc)).
* Add incr restore change sender [#9603](https://github.com/ydb-platform/ydb/pull/9603) ([Innokentii Mokin](https://github.com/Enjection)).
* remove no export for profile memory allocations builds [#9617](https://github.com/ydb-platform/ydb/pull/9617) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix local_ydb  [#9623](https://github.com/ydb-platform/ydb/pull/9623) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* work [#9624](https://github.com/ydb-platform/ydb/pull/9624) ([andrew stalin](https://github.com/andrewstalin)).
* Set ending_sequence_number for inactive partitions of datashard [#9636](https://github.com/ydb-platform/ydb/pull/9636) ([Nikolay Shestakov](https://github.com/nshestakov)).
* fix yson parsing in tests [#9648](https://github.com/ydb-platform/ydb/pull/9648) ([uzhastik](https://github.com/uzhastik)).
* refactor statistics tests [#9654](https://github.com/ydb-platform/ydb/pull/9654) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Bootstrapper: don't restart healthy tablets [#9659](https://github.com/ydb-platform/ydb/pull/9659) ([Aleksei Borzenkov](https://github.com/snaury)).
* Add upload for nightly build  [#9662](https://github.com/ydb-platform/ydb/pull/9662) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* MEMBERNAME has been renamed to MEMBER_NAME [#9666](https://github.com/ydb-platform/ydb/pull/9666) ([Oleg Doronin](https://github.com/dorooleg)).
* Add ds incremental restore src unit and use it [#9694](https://github.com/ydb-platform/ydb/pull/9694) ([Innokentii Mokin](https://github.com/Enjection)).
* Yq 3560 Add row dispatcher to dqrun [#9697](https://github.com/ydb-platform/ydb/pull/9697) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Do not paint red for asan [#9704](https://github.com/ydb-platform/ydb/pull/9704) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Revert harmonizer fixes: ([#9454](https://github.com/ydb-platform/ydb/issues/9454)) ([#9384](https://github.com/ydb-platform/ydb/issues/9384)) [#9712](https://github.com/ydb-platform/ydb/pull/9712) ([kruall](https://github.com/kruall)).
* analytics workflow:  upload_muted_tests branch main [#9722](https://github.com/ydb-platform/ydb/pull/9722) ([Kirill Rysin](https://github.com/naspirato)).
* Add permissions for describe of topic ([#9562](https://github.com/ydb-platform/ydb/issues/9562)) [#9724](https://github.com/ydb-platform/ydb/pull/9724) ([Nikolay Shestakov](https://github.com/nshestakov)).
* ci: retry testmo requests [#9727](https://github.com/ydb-platform/ydb/pull/9727) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Make pragma ForceJobSizeAdjuster public [#9739](https://github.com/ydb-platform/ydb/pull/9739) ([Vadim Averin](https://github.com/avevad)).
* YQ-3322 Change row dispatcher service id [#9747](https://github.com/ydb-platform/ydb/pull/9747) ([Dmitry Kardymon](https://github.com/kardymonds)).
* streamlookup, generic lookup, yt lookup: remove TUVMap usage from events [#9758](https://github.com/ydb-platform/ydb/pull/9758) ([yumkam](https://github.com/yumkam)).
* Move bazel password into file [#9759](https://github.com/ydb-platform/ydb/pull/9759) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add workflow for publishing dstool [#9787](https://github.com/ydb-platform/ydb/pull/9787) ([kruall](https://github.com/kruall)).
* Remove clang14 from PRs and other workflows [#9798](https://github.com/ydb-platform/ydb/pull/9798) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix usage YaMuteCheck() for different files [#9803](https://github.com/ydb-platform/ydb/pull/9803) ([Kirill Rysin](https://github.com/naspirato)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.10-rc.1 [#9804](https://github.com/ydb-platform/ydb/pull/9804) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* get rid of mkql results [#9811](https://github.com/ydb-platform/ydb/pull/9811) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Add disable evict vdisks option to config [#9812](https://github.com/ydb-platform/ydb/pull/9812) ([Ilia Shakhov](https://github.com/pixcc)).
* Introduce compatibility test (between last stable and main) [#9828](https://github.com/ydb-platform/ydb/pull/9828) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* avoid uninit hiveId [#9831](https://github.com/ydb-platform/ydb/pull/9831) ([uzhastik](https://github.com/uzhastik)).
* avoid uninit stype [#9832](https://github.com/ydb-platform/ydb/pull/9832) ([uzhastik](https://github.com/uzhastik)).
* avoid uninit vars [#9833](https://github.com/ydb-platform/ydb/pull/9833) ([uzhastik](https://github.com/uzhastik)).
* Fix log priority and refactor switch in ProcessChunkWriteQueue [#9840](https://github.com/ydb-platform/ydb/pull/9840) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix for missing clang14 [#9861](https://github.com/ydb-platform/ydb/pull/9861) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Reconnect session has been supported [#9862](https://github.com/ydb-platform/ydb/pull/9862) ([Oleg Doronin](https://github.com/dorooleg)).
* YT YQL; Make possible to set default cluster [#9863](https://github.com/ydb-platform/ydb/pull/9863) ([Marina Pereskokova](https://github.com/Krisha11)).
* fix test_mkql_not_increased [#9872](https://github.com/ydb-platform/ydb/pull/9872) ([uzhastik](https://github.com/uzhastik)).
* Rename TBasicString methods [#9874](https://github.com/ydb-platform/ydb/pull/9874) ([Mikhnenko Sasha](https://github.com/4JustMe4)).
* Add a workflow to build YDB CLI for each platform and upload binaries to S3 [#9879](https://github.com/ydb-platform/ydb/pull/9879) ([Nikolay Perfilov](https://github.com/pnv1)).
* No newline in bazel cache password [#9887](https://github.com/ydb-platform/ydb/pull/9887) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix code example typo for topic in ydb go sdk [#9894](https://github.com/ydb-platform/ydb/pull/9894) ([Timofey Koolin](https://github.com/rekby)).
* Fix log priority in PDisk ChunkRead [#9902](https://github.com/ydb-platform/ydb/pull/9902) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Rename IsTxDataReleased -> GetIsReleased [#9920](https://github.com/ydb-platform/ydb/pull/9920) ([azevaykin](https://github.com/azevaykin)).
* Improve cluster workload run [#9921](https://github.com/ydb-platform/ydb/pull/9921) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Stop supporting non-mvcc legacy modes in DataShards [#9923](https://github.com/ydb-platform/ydb/pull/9923) ([Aleksei Borzenkov](https://github.com/snaury)).
* Change spamming BS_QUEUE log line to INFO priority [#9927](https://github.com/ydb-platform/ydb/pull/9927) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* add new tests [#9930](https://github.com/ydb-platform/ydb/pull/9930) ([uzhastik](https://github.com/uzhastik)).
* Speed up TSectorMapPerformance UT and fix SectorMap throttler [#9943](https://github.com/ydb-platform/ydb/pull/9943) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix YDB CLI build for windows [#9944](https://github.com/ydb-platform/ydb/pull/9944) ([Nikolay Perfilov](https://github.com/pnv1)).
* Speed up TPDiskTest::SmallDisk10Gb [#9947](https://github.com/ydb-platform/ydb/pull/9947) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Test bloat for every PR [#9948](https://github.com/ydb-platform/ydb/pull/9948) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* fix flapping unit tests [#9953](https://github.com/ydb-platform/ydb/pull/9953) ([andrew stalin](https://github.com/andrewstalin)).
* YQ-3583 Improvements after load tests [#9955](https://github.com/ydb-platform/ydb/pull/9955) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Remove perf.data from pdisk dir [#9957](https://github.com/ydb-platform/ydb/pull/9957) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* dqrun pq simulation: add queue limit [#9962](https://github.com/ydb-platform/ydb/pull/9962) ([yumkam](https://github.com/yumkam)).
* Remove yds from asan PR checks [#9980](https://github.com/ydb-platform/ydb/pull/9980) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YQ-3594 processing queries with different schemes [#9981](https://github.com/ydb-platform/ydb/pull/9981) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Stop generating legacy readset format in CopyTable [#9982](https://github.com/ydb-platform/ydb/pull/9982) ([Aleksei Borzenkov](https://github.com/snaury)).
* Increment YDB CLI version to 2.14.0 [#9983](https://github.com/ydb-platform/ydb/pull/9983) ([Nikolay Perfilov](https://github.com/pnv1)).
* Test bloat in links [#9986](https://github.com/ydb-platform/ydb/pull/9986) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* get rid of mkql results in scripting [#9997](https://github.com/ydb-platform/ydb/pull/9997) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Mute ydb/core/statistics/service/ut/ 1 tests [#9998](https://github.com/ydb-platform/ydb/pull/9998) ([Kirill Rysin](https://github.com/naspirato)).
* Remove schemeshard/*_reboot tests from asan PR checks [#10004](https://github.com/ydb-platform/ydb/pull/10004) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Replace TMemorizableControlWrapper to TControlWrapper [#10005](https://github.com/ydb-platform/ydb/pull/10005) ([mregrock](https://github.com/mregrock)).
* Fix mime type in build artifacts [#10011](https://github.com/ydb-platform/ydb/pull/10011) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* add lost pragma once [#10023](https://github.com/ydb-platform/ydb/pull/10023) ([uzhastik](https://github.com/uzhastik)).
* Revert "Mute ydb/core/statistics/service/ut/ 1 tests" [#10024](https://github.com/ydb-platform/ydb/pull/10024) ([andrew stalin](https://github.com/andrewstalin)).
* Remove TTypeInfo from TRawTypeValue [#10026](https://github.com/ydb-platform/ydb/pull/10026) ([azevaykin](https://github.com/azevaykin)).
* Harden huge blob placement checks in VDisk, fix HugeKeeper WAL [#10034](https://github.com/ydb-platform/ydb/pull/10034) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Remove RAM reqs for tests with less 4gb RSS in asan [#10036](https://github.com/ydb-platform/ydb/pull/10036) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use DWARF symbols in backtrace only on Linux [#10046](https://github.com/ydb-platform/ydb/pull/10046) ([Ivan](https://github.com/abyss7)).
* Wait until db is populated in connector/fq tests [#10047](https://github.com/ydb-platform/ydb/pull/10047) ([yumkam](https://github.com/yumkam)).
* Clear GonePartitions on every CreateSenders() [#10049](https://github.com/ydb-platform/ydb/pull/10049) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Remove RAM reqs for tests with less 4gb RSS in asan (part 2) [#10052](https://github.com/ydb-platform/ydb/pull/10052) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Removed weird lib [#10053](https://github.com/ydb-platform/ydb/pull/10053) ([Vitaly Stoyan](https://github.com/vitstn)).
* [yt provider] Add YtMaterialize callable [#10057](https://github.com/ydb-platform/ydb/pull/10057) ([Roman Udovichenko](https://github.com/rvu1024)).
* Specify explicit cpu requirement (speed up asan) [#10061](https://github.com/ydb-platform/ydb/pull/10061) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Shared Cache Clock-Pro implementation  [#10063](https://github.com/ydb-platform/ydb/pull/10063) ([kungurtsev](https://github.com/kunga)).
* YQ-3560 RowDispatcher: local mode to use in dqrun [#10072](https://github.com/ydb-platform/ydb/pull/10072) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3560 Use pq gateway in row dispatcher [#10073](https://github.com/ydb-platform/ydb/pull/10073) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Make fake io error tests in PDisk more robust [#10091](https://github.com/ydb-platform/ydb/pull/10091) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Enable Olap settings [#10097](https://github.com/ydb-platform/ydb/pull/10097) ([Nikita Vasilev](https://github.com/nikvas0)).
* Rework BlockDevice tests [#10107](https://github.com/ydb-platform/ydb/pull/10107) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Fix encryption test [#10118](https://github.com/ydb-platform/ydb/pull/10118) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Revert "Rework FormatRead and SysLogRead, move their execution to PDisk to avoid race" [#10122](https://github.com/ydb-platform/ydb/pull/10122) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Restore legacy kv server [#10132](https://github.com/ydb-platform/ydb/pull/10132) ([mregrock](https://github.com/mregrock)).
* Allow zero decimal scale [#10168](https://github.com/ydb-platform/ydb/pull/10168) ([azevaykin](https://github.com/azevaykin)).
* Build analytics for whole ydb dir [#10180](https://github.com/ydb-platform/ydb/pull/10180) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* -DDEBUGINFO_LINES_ONLY only for CI checks [#10181](https://github.com/ydb-platform/ydb/pull/10181) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fixed build with new pqlib [#10209](https://github.com/ydb-platform/ydb/pull/10209) ([Vitaly Stoyan](https://github.com/vitstn)).
* Remove arm architecture form YDB CLI installation script [#10210](https://github.com/ydb-platform/ydb/pull/10210) ([Nikolay Perfilov](https://github.com/pnv1)).
* Simplify TSubOperation [#10211](https://github.com/ydb-platform/ydb/pull/10211) ([Innokentii Mokin](https://github.com/Enjection)).
* Add op context to some TSubOperation calls [#10215](https://github.com/ydb-platform/ydb/pull/10215) ([Innokentii Mokin](https://github.com/Enjection)).
* Add prewarm workflow [#10216](https://github.com/ydb-platform/ydb/pull/10216) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add debug info to TPathChecker [#10217](https://github.com/ydb-platform/ydb/pull/10217) ([Innokentii Mokin](https://github.com/Enjection)).
* Fix build [#10227](https://github.com/ydb-platform/ydb/pull/10227) ([Vitaly Stoyan](https://github.com/vitstn)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.11-rc.2 [#10232](https://github.com/ydb-platform/ydb/pull/10232) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* change bruteforce for scripting [#10246](https://github.com/ydb-platform/ydb/pull/10246) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Add backup collection schema path item [#10252](https://github.com/ydb-platform/ydb/pull/10252) ([Innokentii Mokin](https://github.com/Enjection)).
* Test a few small completion threads count [#10253](https://github.com/ydb-platform/ydb/pull/10253) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* ci: save job steps, partially pr event fields in webhook receiver server [#10255](https://github.com/ydb-platform/ydb/pull/10255) ([Nikita Kozlovskii](https://github.com/nikitka)).
* YQ-3736 Shared reading: fix unsupported predicates [#10256](https://github.com/ydb-platform/ydb/pull/10256) ([Dmitry Kardymon](https://github.com/kardymonds)).
* fix waiting followers in dev ui [#10257](https://github.com/ydb-platform/ydb/pull/10257) ([vporyadke](https://github.com/vporyadke)).
* New UT to check that all requests are answered on PDisk restart [#10262](https://github.com/ydb-platform/ydb/pull/10262) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Yq 3560 Add row dispatcher to dqrun [#10271](https://github.com/ydb-platform/ydb/pull/10271) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add streamlookup monitoring (dynamic counters) [#10280](https://github.com/ydb-platform/ydb/pull/10280) ([yumkam](https://github.com/yumkam)).
* Atomically update feature flags at runtime [#10281](https://github.com/ydb-platform/ydb/pull/10281) ([Aleksei Borzenkov](https://github.com/snaury)).
* streamlookup: fix KeysForLookup reallocation [#10283](https://github.com/ydb-platform/ydb/pull/10283) ([yumkam](https://github.com/yumkam)).
* Unmute tests  [#10287](https://github.com/ydb-platform/ydb/pull/10287) ([Alek5andr-Kotov](https://github.com/Alek5andr-Kotov)).
* YQ-3745 Shared reading:  add raw format [#10294](https://github.com/ydb-platform/ydb/pull/10294) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.11-rc.3 [#10304](https://github.com/ydb-platform/ydb/pull/10304) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Add hints to TEvRead for scan queries [#10308](https://github.com/ydb-platform/ydb/pull/10308) ([Aleksei Borzenkov](https://github.com/snaury)).
* Add basic test for PDisk on file with encryption [#10315](https://github.com/ydb-platform/ydb/pull/10315) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* Enable postgresql tests with sanitizer [#10320](https://github.com/ydb-platform/ydb/pull/10320) ([Ivan Nikolaev](https://github.com/lex007in)).
* YQ-3742 Shared reading: remove assert [#10322](https://github.com/ydb-platform/ydb/pull/10322) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Enhance description for S3 export/import CLI parameters [#10331](https://github.com/ydb-platform/ydb/pull/10331) ([Ilia Shakhov](https://github.com/pixcc)).
* Yq 3724 Move no_pg_wrapper to fq [#10360](https://github.com/ydb-platform/ydb/pull/10360) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Some fixes in erase_rows_condition.cpp [#10361](https://github.com/ydb-platform/ydb/pull/10361) ([Ivan Nikolaev](https://github.com/lex007in)).
* Cosmetic changes & simplification [#10362](https://github.com/ydb-platform/ydb/pull/10362) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Replace dangerous UB-prone UNREACHABLE with abort [#10363](https://github.com/ydb-platform/ydb/pull/10363) ([Innokentii Mokin](https://github.com/Enjection)).
* Trim debug info in configs_dispatcher [#10364](https://github.com/ydb-platform/ydb/pull/10364) ([Innokentii Mokin](https://github.com/Enjection)).
* YQ-3753 Shared reading: metadatafields [#10370](https://github.com/ydb-platform/ydb/pull/10370) ([Dmitry Kardymon](https://github.com/kardymonds)).
* add include that comes transparently [#10374](https://github.com/ydb-platform/ydb/pull/10374) ([Anatoly](https://github.com/tborisow)).
* Correct mime type for err/out in ya make tests results [#10385](https://github.com/ydb-platform/ydb/pull/10385) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YDB FQ: unmute connector tests [#10392](https://github.com/ydb-platform/ydb/pull/10392) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Throw error if manifests don't exist [#10396](https://github.com/ydb-platform/ydb/pull/10396) ([kungurtsev](https://github.com/kunga)).
* Sink metrics & trace [#10397](https://github.com/ydb-platform/ydb/pull/10397) ([Nikita Vasilev](https://github.com/nikvas0)).
* ci: add antlr4 to github runner image [#10407](https://github.com/ydb-platform/ydb/pull/10407) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Get rid of unnecessary code [#10410](https://github.com/ydb-platform/ydb/pull/10410) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YQ-3756 Shared reading: check buffer size in read_actor [#10418](https://github.com/ydb-platform/ydb/pull/10418) ([Dmitry Kardymon](https://github.com/kardymonds)).
* redefine json_errdetail [#10420](https://github.com/ydb-platform/ydb/pull/10420) ([uzhastik](https://github.com/uzhastik)).
* YQ-3753 Fix build [#10421](https://github.com/ydb-platform/ydb/pull/10421) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Fix UB in right shift [#10422](https://github.com/ydb-platform/ydb/pull/10422) ([yumkam](https://github.com/yumkam)).
* fixed the count-min request deletion error [#10427](https://github.com/ydb-platform/ydb/pull/10427) ([andrew stalin](https://github.com/andrewstalin)).
* YQ-3763 Fix flaky fq/yds tests [#10428](https://github.com/ydb-platform/ydb/pull/10428) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add backup/restore test for all scheme objects [#10448](https://github.com/ydb-platform/ydb/pull/10448) ([Ilia Shakhov](https://github.com/pixcc)).
* Script for showing unreachable targets [#10453](https://github.com/ydb-platform/ydb/pull/10453) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* ya.make fixes (missing RECURSE) [#10454](https://github.com/ydb-platform/ydb/pull/10454) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* [YQ-3761] Fix RewriteAsHoppingWindow optimization [#10455](https://github.com/ydb-platform/ydb/pull/10455) ([Alexey Pozdniakov](https://github.com/APozdniakov)).
* DbgPrintValue for Pg types (reapply [#4847](https://github.com/ydb-platform/ydb/issues/4847) reverted in [#4894](https://github.com/ydb-platform/ydb/issues/4894)) [#10458](https://github.com/ydb-platform/ydb/pull/10458) ([Ivan Nikolaev](https://github.com/lex007in)).
* Improve DS proxy GET logs at debug level [#10467](https://github.com/ydb-platform/ydb/pull/10467) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fail summary in comment [#10474](https://github.com/ydb-platform/ydb/pull/10474) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* streamlookup: pass and use MaxDelayedRows parameter [#10489](https://github.com/ydb-platform/ydb/pull/10489) ([yumkam](https://github.com/yumkam)).
* Treat backup collections as dirs [#10490](https://github.com/ydb-platform/ydb/pull/10490) ([Innokentii Mokin](https://github.com/Enjection)).
* Add PDisk/VSlot whiteboard states to sys_view [#10491](https://github.com/ydb-platform/ydb/pull/10491) ([mregrock](https://github.com/mregrock)).
* base: move TCompactionPolicy out of flat_scheme_op.proto [#10495](https://github.com/ydb-platform/ydb/pull/10495) ([ijon](https://github.com/ijon)).
* [dq] Add missing peerdir [#10496](https://github.com/ydb-platform/ydb/pull/10496) ([Roman Udovichenko](https://github.com/rvu1024)).
* YQ-3721 PQ sink: write to file [#10501](https://github.com/ydb-platform/ydb/pull/10501) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add coop create cdc evaluation to copy/create table calls [#10503](https://github.com/ydb-platform/ydb/pull/10503) ([Innokentii Mokin](https://github.com/Enjection)).
* Streamlookup special case nulls in keys [#10508](https://github.com/ydb-platform/ydb/pull/10508) ([yumkam](https://github.com/yumkam)).
* Mute ydb/core/mind/hive/ut/THiveTest.DrainWithHiveRestart [#10514](https://github.com/ydb-platform/ydb/pull/10514) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix sed in fail summary (exclude brackets in content) [#10520](https://github.com/ydb-platform/ydb/pull/10520) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Allow system columns in tables inside backup collections [#10523](https://github.com/ydb-platform/ydb/pull/10523) ([Innokentii Mokin](https://github.com/Enjection)).
* ImportData: consistent limits [#10524](https://github.com/ydb-platform/ydb/pull/10524) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* CDC initial scan settings [#10536](https://github.com/ydb-platform/ydb/pull/10536) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* remove kicli tests [#10537](https://github.com/ydb-platform/ydb/pull/10537) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Increment YDB CLI version to 2.15.0 [#10546](https://github.com/ydb-platform/ydb/pull/10546) ([Bulat](https://github.com/Gazizonoki)).
* ci: add an "external" label for issues that were opened by external users [#10551](https://github.com/ydb-platform/ydb/pull/10551) ([Nikita Kozlovskii](https://github.com/nikitka)).
* YQ-3767 Shared reading: fix field names with @ [#10563](https://github.com/ydb-platform/ydb/pull/10563) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add tests for pg types for kqp_scan_data [#10569](https://github.com/ydb-platform/ydb/pull/10569) ([Ivan Nikolaev](https://github.com/lex007in)).
* Improve Memory Controller data size logs [#10574](https://github.com/ydb-platform/ydb/pull/10574) ([kungurtsev](https://github.com/kunga)).
* Revert "Make block combine hashed use stream instead of flow ([#9979](https://github.com/ydb-platform/ydb/issues/9979))" [#10575](https://github.com/ydb-platform/ydb/pull/10575) ([Vladluk](https://github.com/vladl2802)).
* Align create backup collection entries grammar with corresponding topics grammar [#10580](https://github.com/ydb-platform/ydb/pull/10580) ([Innokentii Mokin](https://github.com/Enjection)).
* Add include system/event.h [#10581](https://github.com/ydb-platform/ydb/pull/10581) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YQ-3766 Shared reading: clear used_size by stop_session [#10586](https://github.com/ydb-platform/ydb/pull/10586) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Change step to common step for publishing pachage [#10602](https://github.com/ydb-platform/ydb/pull/10602) ([kruall](https://github.com/kruall)).
* build_bloat: add paths sorting to improve visual stability [#10604](https://github.com/ydb-platform/ydb/pull/10604) ([ijon](https://github.com/ijon)).
* YQ RD fix import contirb build [#10606](https://github.com/ydb-platform/ydb/pull/10606) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Change dstool's version to 0.0.12 [#10608](https://github.com/ydb-platform/ydb/pull/10608) ([kruall](https://github.com/kruall)).
* Legacy kv api remove [#10614](https://github.com/ydb-platform/ydb/pull/10614) ([mregrock](https://github.com/mregrock)).
* Do not block all requests on Shared Cache policy switch [#10619](https://github.com/ydb-platform/ydb/pull/10619) ([kungurtsev](https://github.com/kunga)).
* fix waiting in test [#10626](https://github.com/ydb-platform/ydb/pull/10626) ([vporyadke](https://github.com/vporyadke)).
* schemeshard: split schemeshard__operation_common.cpp, move code from .h [#10631](https://github.com/ydb-platform/ydb/pull/10631) ([ijon](https://github.com/ijon)).
* YQ-3766 Shared reading: add unread stats [#10635](https://github.com/ydb-platform/ydb/pull/10635) ([Dmitry Kardymon](https://github.com/kardymonds)).
* remove deprecated & unused result lib [#10641](https://github.com/ydb-platform/ydb/pull/10641) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* YQ-3763  Fix read count (try to fix flaky test) [#10644](https://github.com/ydb-platform/ydb/pull/10644) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Rate Limiter metrics have been added in control plane proxy [#10652](https://github.com/ydb-platform/ydb/pull/10652) ([Oleg Doronin](https://github.com/dorooleg)).
* YQ-3743 Add message to Y_ABORT_UNLESS in checkpoint_coordinator [#10660](https://github.com/ydb-platform/ydb/pull/10660) ([Dmitry Kardymon](https://github.com/kardymonds)).
* fix FindWrapStats for wide lambda [#10662](https://github.com/ydb-platform/ydb/pull/10662) ([uzhastik](https://github.com/uzhastik)).
* Less deps in yql/utils [#10667](https://github.com/ydb-platform/ydb/pull/10667) ([Vitaly Stoyan](https://github.com/vitstn)).
* change some event scopes from `struct` to `namespace` [#10685](https://github.com/ydb-platform/ydb/pull/10685) ([ijon](https://github.com/ijon)).
* Remove asan sqs from PR [#10702](https://github.com/ydb-platform/ydb/pull/10702) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Implement runtime flags codegen in C++ [#10711](https://github.com/ydb-platform/ydb/pull/10711) ([Aleksei Borzenkov](https://github.com/snaury)).
* YQ-3779 Remove FlagSubscribeOnSession (use TEvSubscribe) [#10720](https://github.com/ydb-platform/ydb/pull/10720) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add counters for volatile transactions [#10723](https://github.com/ydb-platform/ydb/pull/10723) ([Aleksei Borzenkov](https://github.com/snaury)).
* increase grpc call timeout in TMonitoringGrpcServiceActor [#10734](https://github.com/ydb-platform/ydb/pull/10734) ([uzhastik](https://github.com/uzhastik)).
* streamlookup: fix zero default for MaxDelayedRows [#10735](https://github.com/ydb-platform/ydb/pull/10735) ([yumkam](https://github.com/yumkam)).
* Unmute Osiris tests and temporarily disable multithreading [#10737](https://github.com/ydb-platform/ydb/pull/10737) ([Alexander Rutkovsky](https://github.com/alexvru)).
* PoolId has been renamed to ResourcePool in c++ sdk [#10770](https://github.com/ydb-platform/ydb/pull/10770) ([Oleg Doronin](https://github.com/dorooleg)).
* YDB FQ: avoid using `clickhouse-connect` library in integration tests [#10776](https://github.com/ydb-platform/ydb/pull/10776) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Get rid of unused code, cleanup dependencies [#10777](https://github.com/ydb-platform/ydb/pull/10777) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Add escaping for serialized pg types in viewer [#10778](https://github.com/ydb-platform/ydb/pull/10778) ([Ivan Nikolaev](https://github.com/lex007in)).
* Add basic scale recommender implementation [#10780](https://github.com/ydb-platform/ydb/pull/10780) ([Ilia Shakhov](https://github.com/pixcc)).
* YQ-3775 Shared reading: try to fix memory leak in topic session [#10786](https://github.com/ydb-platform/ydb/pull/10786) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Encapsulate BackupFolder() in DumpClient [#10804](https://github.com/ydb-platform/ydb/pull/10804) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YQ WM fixed flaky tests [#10805](https://github.com/ydb-platform/ydb/pull/10805) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* ci: add clang-16, antlr 4.13.2 to Github Runner VM Image [#10806](https://github.com/ydb-platform/ydb/pull/10806) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Extract prefix and entries in backup-related sql [#10807](https://github.com/ydb-platform/ydb/pull/10807) ([Innokentii Mokin](https://github.com/Enjection)).
* Improve Shared Cache S3FIFO [#10825](https://github.com/ydb-platform/ydb/pull/10825) ([kungurtsev](https://github.com/kunga)).
* Support for autopartitioning topics for CLI [#10832](https://github.com/ydb-platform/ydb/pull/10832) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YQ-3713 Shared reading: IS DISTINCT FROM  predicates [#10837](https://github.com/ydb-platform/ydb/pull/10837) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Remove autoconfig asan tests from PR [#10843](https://github.com/ydb-platform/ydb/pull/10843) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove fq/plans asan tests from PR [#10845](https://github.com/ydb-platform/ydb/pull/10845) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add volatile transactions to datashard internal ui [#10859](https://github.com/ydb-platform/ydb/pull/10859) ([Aleksei Borzenkov](https://github.com/snaury)).
* Add backup collection settings parser [#10868](https://github.com/ydb-platform/ydb/pull/10868) ([Innokentii Mokin](https://github.com/Enjection)).
* Enable Shared Cache S3FIFO policy [#10886](https://github.com/ydb-platform/ydb/pull/10886) ([kungurtsev](https://github.com/kunga)).
* Add workflow for building binary ydb-dstool [#10887](https://github.com/ydb-platform/ydb/pull/10887) ([kruall](https://github.com/kruall)).
* Update github.com/ydb-platform/fq-connector-go to 0.5.11-rc.6 [#10891](https://github.com/ydb-platform/ydb/pull/10891) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Fix harness (bytes vs str issue) [#10909](https://github.com/ydb-platform/ydb/pull/10909) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* EvWrite: Immediate & Prepare [#10913](https://github.com/ydb-platform/ydb/pull/10913) ([Nikita Vasilev](https://github.com/nikvas0)).
* Cache small readsets in memory and improve resending [#10920](https://github.com/ydb-platform/ydb/pull/10920) ([Aleksei Borzenkov](https://github.com/snaury)).
* Remove apps/ydb asan tests from PR [#10921](https://github.com/ydb-platform/ydb/pull/10921) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* mute unstable tests [#10931](https://github.com/ydb-platform/ydb/pull/10931) ([Kirill Rysin](https://github.com/naspirato)).
* Remove dsproxy asan tests from PR [#10942](https://github.com/ydb-platform/ydb/pull/10942) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Mute TestPqRowDispatcher.test_scheme_error [#10947](https://github.com/ydb-platform/ydb/pull/10947) ([Kirill Rysin](https://github.com/naspirato)).
* fix crash inside AS when statistics is disabled [#10949](https://github.com/ydb-platform/ydb/pull/10949) ([uzhastik](https://github.com/uzhastik)).
* Unmute stable tests [#10955](https://github.com/ydb-platform/ydb/pull/10955) ([Kirill Rysin](https://github.com/naspirato)).
* Remove yatest_common from ydb [#10964](https://github.com/ydb-platform/ydb/pull/10964) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use ReadRows for loading COUNT_MIN_SKETCH statistics [#10967](https://github.com/ydb-platform/ydb/pull/10967) ([andrew stalin](https://github.com/andrewstalin)).
* packed_tuple: fix windows build (long vs size_t) [#10975](https://github.com/ydb-platform/ydb/pull/10975) ([yumkam](https://github.com/yumkam)).
* Remove some from harness [#10976](https://github.com/ydb-platform/ydb/pull/10976) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove tests/functional/tenants asan tests from PR [#10980](https://github.com/ydb-platform/ydb/pull/10980) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Add a developer ui page for runtime feature flags [#10982](https://github.com/ydb-platform/ydb/pull/10982) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix runtime feature flags codegen for darwin [#10984](https://github.com/ydb-platform/ydb/pull/10984) ([Aleksei Borzenkov](https://github.com/snaury)).
* Remove tests/functional/sqs/common asan tests from PR [#10986](https://github.com/ydb-platform/ydb/pull/10986) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove tests/functional/ydb_cli asan tests from PR [#10987](https://github.com/ydb-platform/ydb/pull/10987) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Allow yql at top level [#11003](https://github.com/ydb-platform/ydb/pull/11003) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* add missing define [#11004](https://github.com/ydb-platform/ydb/pull/11004) ([vporyadke](https://github.com/vporyadke)).
* Add backup collection kqp part [#11022](https://github.com/ydb-platform/ydb/pull/11022) ([Innokentii Mokin](https://github.com/Enjection)).
* Remove excessive atomicity from IC [#11027](https://github.com/ydb-platform/ydb/pull/11027) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix local_ydb (yatest issues) [#11029](https://github.com/ydb-platform/ydb/pull/11029) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Remove pg_integrations asan from PR [#11034](https://github.com/ydb-platform/ydb/pull/11034) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix alter of autoparttitioning setting in CLI [#11037](https://github.com/ydb-platform/ydb/pull/11037) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix typo in tools/lib/cmds [#11038](https://github.com/ydb-platform/ydb/pull/11038) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Separate Scheme Shard background compaction code and improve logging [#11058](https://github.com/ydb-platform/ydb/pull/11058) ([kungurtsev](https://github.com/kunga)).
* Separate libs for tests/library [#11062](https://github.com/ydb-platform/ydb/pull/11062) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Replication counters [#11065](https://github.com/ydb-platform/ydb/pull/11065) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Remove symlink [#11103](https://github.com/ydb-platform/ydb/pull/11103) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix flacky test TPDiskTest::TestMultipleLogSpliceNonceJump [#11125](https://github.com/ydb-platform/ydb/pull/11125) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* YQ-3713 Shared reading: SqlIn predicate [#11132](https://github.com/ydb-platform/ydb/pull/11132) ([Dmitry Kardymon](https://github.com/kardymonds)).
* fix std::min usage [#11133](https://github.com/ydb-platform/ydb/pull/11133) ([uzhastik](https://github.com/uzhastik)).
* YQ-3713 Try to remove peerdir [#11139](https://github.com/ydb-platform/ydb/pull/11139) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3713 Shared reading: do not check compare arguments types [#11140](https://github.com/ydb-platform/ydb/pull/11140) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Higher timeout for dread_cache_service [#11144](https://github.com/ydb-platform/ydb/pull/11144) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* [yt] Mixed gateway [#11146](https://github.com/ydb-platform/ydb/pull/11146) ([Roman Udovichenko](https://github.com/rvu1024)).
* Request DataShard compaction if scheme has been changed [#11147](https://github.com/ydb-platform/ydb/pull/11147) ([kungurtsev](https://github.com/kunga)).
* Remove accidentally left-out debug printing [#11154](https://github.com/ydb-platform/ydb/pull/11154) ([Aleksei Borzenkov](https://github.com/snaury)).
* Use PQ_LOG_ macros in PQ-tablet [#11156](https://github.com/ydb-platform/ydb/pull/11156) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Try remaking Builders for every output [#11164](https://github.com/ydb-platform/ydb/pull/11164) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Cosmetic changes [#11166](https://github.com/ydb-platform/ydb/pull/11166) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Step & tx id getters for json change record [#11167](https://github.com/ydb-platform/ydb/pull/11167) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix backup collection working dir interaction [#11171](https://github.com/ydb-platform/ydb/pull/11171) ([Innokentii Mokin](https://github.com/Enjection)).
* YQ-3809 Shared reading: fix logging [#11175](https://github.com/ydb-platform/ydb/pull/11175) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3775 Remove ydb/core/kqp/common peerdir from providers/s3 [#11177](https://github.com/ydb-platform/ydb/pull/11177) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Use PQ_LOG_ macros in PQRB-tablet and TPartition actor [#11181](https://github.com/ydb-platform/ydb/pull/11181) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Add feature flag to enable drive serial numbers discovery [#11183](https://github.com/ydb-platform/ydb/pull/11183) ([Alexander Rutkovsky](https://github.com/alexvru)).
* rework grpc monitoring [#11191](https://github.com/ydb-platform/ydb/pull/11191) ([uzhastik](https://github.com/uzhastik)).
* YQ-3814 Add metrics to read_actor / topic_session [#11196](https://github.com/ydb-platform/ydb/pull/11196) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Support batch/scan mode for TEvRead [#11201](https://github.com/ydb-platform/ydb/pull/11201) ([Aleksei Borzenkov](https://github.com/snaury)).
* Remove unused functions [#11204](https://github.com/ydb-platform/ydb/pull/11204) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YQ-3811 Shared reading: check the same consumer in all clients [#11205](https://github.com/ydb-platform/ydb/pull/11205) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Drop old epoch reorder impl [#11218](https://github.com/ydb-platform/ydb/pull/11218) ([Roman Udovichenko](https://github.com/rvu1024)).
* Harness refactor 4 (explicit ssh_user param) [#11229](https://github.com/ydb-platform/ydb/pull/11229) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use node info from labels in configs dispatcher instead of tenant pool [#11238](https://github.com/ydb-platform/ydb/pull/11238) ([Innokentii Mokin](https://github.com/Enjection)).
* misspells have been fixed [#11242](https://github.com/ydb-platform/ydb/pull/11242) ([Oleg Doronin](https://github.com/dorooleg)).
* Fix kqp test on spilling in selfjoin [#11254](https://github.com/ydb-platform/ydb/pull/11254) ([Vladluk](https://github.com/vladl2802)).
* TRowVersion::Serialize [#11285](https://github.com/ydb-platform/ydb/pull/11285) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* explicitly stop driver in these tests [#11290](https://github.com/ydb-platform/ydb/pull/11290) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* YQ-3822 Don't use connect() in retry_queue [#11292](https://github.com/ydb-platform/ydb/pull/11292) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add backup backup collection op [#11293](https://github.com/ydb-platform/ydb/pull/11293) ([Innokentii Mokin](https://github.com/Enjection)).
* Switch off the ColumnStatistics feature flag for tenant tests [#11297](https://github.com/ydb-platform/ydb/pull/11297) ([andrew stalin](https://github.com/andrewstalin)).
* Set providers/common/pushdown owner to fq [#11301](https://github.com/ydb-platform/ydb/pull/11301) ([Dmitry Kardymon](https://github.com/kardymonds)).
* streamlookup join: add lru size monitoring [#11303](https://github.com/ydb-platform/ydb/pull/11303) ([yumkam](https://github.com/yumkam)).
* Metrics for buffer actor [#11304](https://github.com/ydb-platform/ydb/pull/11304) ([Nikita Vasilev](https://github.com/nikvas0)).
* Report IC session state to Node Whiteboard [#11310](https://github.com/ydb-platform/ydb/pull/11310) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix last/next in harness [#11311](https://github.com/ydb-platform/ydb/pull/11311) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Copy TS3Uploader to shared module [#11312](https://github.com/ydb-platform/ydb/pull/11312) ([Ilia Shakhov](https://github.com/pixcc)).
* Harness: fix start/stop [#11316](https://github.com/ydb-platform/ydb/pull/11316) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* rd reconnect has been supported [#11322](https://github.com/ydb-platform/ydb/pull/11322) ([Oleg Doronin](https://github.com/dorooleg)).
* Harness refactor 5 (explicit binary path) [#11324](https://github.com/ydb-platform/ydb/pull/11324) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Harness refactor 6 (remove yatest.common.get_param from harness) [#11328](https://github.com/ydb-platform/ydb/pull/11328) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Refactor harness 7 (less param_constants) [#11332](https://github.com/ydb-platform/ydb/pull/11332) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix param_constants.ssh_user [#11336](https://github.com/ydb-platform/ydb/pull/11336) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YQ-3820 Shared reading:  remove Y_ENSURE / add log message [#11337](https://github.com/ydb-platform/ydb/pull/11337) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Disabling EnableColumnStatistics feature flag for test system view [#11347](https://github.com/ydb-platform/ydb/pull/11347) ([andrew stalin](https://github.com/andrewstalin)).
* Fix db param and show error message [#11361](https://github.com/ydb-platform/ydb/pull/11361) ([kungurtsev](https://github.com/kunga)).
* Disable control_plane_storage ut under asan in PR [#11363](https://github.com/ydb-platform/ydb/pull/11363) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* remove unused stream profile event [#11366](https://github.com/ydb-platform/ydb/pull/11366) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Write changes using WriteTxId in consistent mode [#11374](https://github.com/ydb-platform/ydb/pull/11374) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YQ-3824 Shared reading: fix `is not distinct from` with optional field  [#11378](https://github.com/ydb-platform/ydb/pull/11378) ([Dmitry Kardymon](https://github.com/kardymonds)).
* remove result channel proxies [#11382](https://github.com/ydb-platform/ydb/pull/11382) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* ReconnectPeriod cleanup [#11415](https://github.com/ydb-platform/ydb/pull/11415) ([Oleg Doronin](https://github.com/dorooleg)).
* Remove obsolete map from backpressure queue client [#11429](https://github.com/ydb-platform/ydb/pull/11429) ([Alexander Rutkovsky](https://github.com/alexvru)).
* remove confusing timeout macro [#11431](https://github.com/ydb-platform/ydb/pull/11431) ([uzhastik](https://github.com/uzhastik)).
* More yql fixes [#11433](https://github.com/ydb-platform/ydb/pull/11433) ([Vitaly Stoyan](https://github.com/vitstn)).
* Assign tx id to version [#11440](https://github.com/ydb-platform/ydb/pull/11440) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* [SchemeShard] Add required path creation [#11445](https://github.com/ydb-platform/ydb/pull/11445) ([Innokentii Mokin](https://github.com/Enjection)).
* Yql fixes [#11465](https://github.com/ydb-platform/ydb/pull/11465) ([Vitaly Stoyan](https://github.com/vitstn)).
* YQ-3837 Add Heartbeat messages [#11467](https://github.com/ydb-platform/ydb/pull/11467) ([Dmitry Kardymon](https://github.com/kardymonds)).
* remove duplicated log messages [#11469](https://github.com/ydb-platform/ydb/pull/11469) ([yumkam](https://github.com/yumkam)).
* Fix TComputeActorAsyncInputHelperSync destruction [#11476](https://github.com/ydb-platform/ydb/pull/11476) ([yumkam](https://github.com/yumkam)).
* YQ-3844 Add internal states to log [#11479](https://github.com/ydb-platform/ydb/pull/11479) ([Dmitry Kardymon](https://github.com/kardymonds)).
* fix histogram response parsing [#11494](https://github.com/ydb-platform/ydb/pull/11494) ([uzhastik](https://github.com/uzhastik)).
* YQ-3844 Change dq/actors/common owner to fq [#11495](https://github.com/ydb-platform/ydb/pull/11495) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3850 Shared reading: fix interconnect subscribing  [#11506](https://github.com/ydb-platform/ydb/pull/11506) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3844 Shared reading: add restart session sensor [#11510](https://github.com/ydb-platform/ydb/pull/11510) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add missing precharges in datashard init tx [#11516](https://github.com/ydb-platform/ydb/pull/11516) ([Aleksei Borzenkov](https://github.com/snaury)).
* Remove YQL_PACKAGED [#11535](https://github.com/ydb-platform/ydb/pull/11535) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fix test [#11542](https://github.com/ydb-platform/ydb/pull/11542) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* YDB FQ: tests for `JsonDocument` support [#11558](https://github.com/ydb-platform/ydb/pull/11558) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* YQ-3855 Add cookie to events RD <-> read_actor [#11562](https://github.com/ydb-platform/ydb/pull/11562) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Support arbitrary chain set in huge blob keeper heap [#11566](https://github.com/ydb-platform/ydb/pull/11566) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Refactor Shared Cache configuration [#11567](https://github.com/ydb-platform/ydb/pull/11567) ([kungurtsev](https://github.com/kunga)).
* YQ-3859 Check semaphore generation in row dispatcher [#11572](https://github.com/ydb-platform/ydb/pull/11572) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Test for Read Only Snapshots [#11574](https://github.com/ydb-platform/ydb/pull/11574) ([Nikita Vasilev](https://github.com/nikvas0)).
* Improve schemeshard codegen [#11579](https://github.com/ydb-platform/ydb/pull/11579) ([Innokentii Mokin](https://github.com/Enjection)).
* Change conditions for enabling block input [#11600](https://github.com/ydb-platform/ydb/pull/11600) ([Mark Ziganshin](https://github.com/loochek)).
* YQ-3834 Shared reading: add query id to logs [#11603](https://github.com/ydb-platform/ydb/pull/11603) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Restore legacy kv api again [#11604](https://github.com/ydb-platform/ydb/pull/11604) ([mregrock](https://github.com/mregrock)).
* Aggregate nodes memory stats for tenant [#11612](https://github.com/ydb-platform/ydb/pull/11612) ([kungurtsev](https://github.com/kunga)).
* async CA: remove unused code [#11628](https://github.com/ydb-platform/ydb/pull/11628) ([yumkam](https://github.com/yumkam)).
* Change TODO comments about pg types in minikql [#11651](https://github.com/ydb-platform/ydb/pull/11651) ([Ivan Nikolaev](https://github.com/lex007in)).
* schemeshard: forward declare events in a core header for operations [#11655](https://github.com/ydb-platform/ydb/pull/11655) ([ijon](https://github.com/ijon)).
* async CA: fq_diag/monitoring page: add input transform information [#11662](https://github.com/ydb-platform/ydb/pull/11662) ([yumkam](https://github.com/yumkam)).
* Fix tsan race in actor quicksort benchmark [#11664](https://github.com/ydb-platform/ydb/pull/11664) ([Aleksei Borzenkov](https://github.com/snaury)).
* Optimise Html App of PQ-table [#11667](https://github.com/ydb-platform/ydb/pull/11667) ([Nikolay Shestakov](https://github.com/nshestakov)).
* PopCount() => std::popcount() [#11669](https://github.com/ydb-platform/ydb/pull/11669) ([Anatoly](https://github.com/tborisow)).
* use alive nodes in warmup, rather than connected nodes [#11672](https://github.com/ydb-platform/ydb/pull/11672) ([vporyadke](https://github.com/vporyadke)).
* Remove obsolete readme from tests [#11697](https://github.com/ydb-platform/ydb/pull/11697) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Prewarm more often [#11698](https://github.com/ydb-platform/ydb/pull/11698) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* YQ-3873 Add query id to error  [#11700](https://github.com/ydb-platform/ydb/pull/11700) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Dump more data on async ca monitoring page [#11706](https://github.com/ydb-platform/ydb/pull/11706) ([yumkam](https://github.com/yumkam)).
* adjust grpc request latency buckets [#11713](https://github.com/ydb-platform/ydb/pull/11713) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Resolve wildcards in muted_ya [#11717](https://github.com/ydb-platform/ydb/pull/11717) ([Kirill Rysin](https://github.com/naspirato)).
* YQ-3883 Shared reading: fix logs/statistics [#11723](https://github.com/ydb-platform/ydb/pull/11723) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3838 Skip filtering if already processed [#11734](https://github.com/ydb-platform/ydb/pull/11734) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add GRPC thread CPU time metric [#11772](https://github.com/ydb-platform/ydb/pull/11772) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* YQ-3833 Add read lag sensor [#11773](https://github.com/ydb-platform/ydb/pull/11773) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Pass compacted pages directly to Shared Cache [#11779](https://github.com/ydb-platform/ydb/pull/11779) ([kungurtsev](https://github.com/kunga)).
* Add release into night build [#11781](https://github.com/ydb-platform/ydb/pull/11781) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Use release build in compatability test [#11783](https://github.com/ydb-platform/ydb/pull/11783) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* increase dstool version to 0.0.13 [#11787](https://github.com/ydb-platform/ydb/pull/11787) ([kruall](https://github.com/kruall)).
* Umute stable tests [#11789](https://github.com/ydb-platform/ydb/pull/11789) ([Kirill Rysin](https://github.com/naspirato)).
* YQ-3889 Add MaxHandledEventsSize [#11791](https://github.com/ydb-platform/ydb/pull/11791) ([Dmitry Kardymon](https://github.com/kardymonds)).
* release support in wf [#11797](https://github.com/ydb-platform/ydb/pull/11797) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Support configuring scale recommender policies in console [#11798](https://github.com/ydb-platform/ydb/pull/11798) ([Ilia Shakhov](https://github.com/pixcc)).
* Extract schemeshard protos p.1 [#11803](https://github.com/ydb-platform/ydb/pull/11803) ([Innokentii Mokin](https://github.com/Enjection)).
* Use shared compile cache to speedup queries [#11806](https://github.com/ydb-platform/ydb/pull/11806) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Restore mailbox_queue_revolving.h [#11809](https://github.com/ydb-platform/ydb/pull/11809) ([Aleksei Borzenkov](https://github.com/snaury)).
* Use tail sends when replying from QP [#11813](https://github.com/ydb-platform/ydb/pull/11813) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Fix overflow case in stream index lookup join [#11818](https://github.com/ydb-platform/ydb/pull/11818) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix udfs path in tests runner [#11821](https://github.com/ydb-platform/ydb/pull/11821) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* YQ-3888 Fix "session already exists" error [#11826](https://github.com/ydb-platform/ydb/pull/11826) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Make sure mailboxes in test actorsystems are in a locked state [#11837](https://github.com/ydb-platform/ydb/pull/11837) ([Aleksei Borzenkov](https://github.com/snaury)).
* YQ-3873 Add query id to error /  fix clang14 build [#11846](https://github.com/ydb-platform/ydb/pull/11846) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add backup incremental backup collection [#11870](https://github.com/ydb-platform/ydb/pull/11870) ([Innokentii Mokin](https://github.com/Enjection)).
* YQ-3880 Add metrics to pq read actor [#11871](https://github.com/ydb-platform/ydb/pull/11871) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3900 Fix ScheduleHeartbeat() if already connected [#11888](https://github.com/ydb-platform/ydb/pull/11888) ([Dmitry Kardymon](https://github.com/kardymonds)).
* schemeshard: stop using schemeshard_utils.h as public header [#11895](https://github.com/ydb-platform/ydb/pull/11895) ([ijon](https://github.com/ijon)).
* checkpointing vs abort: wait for completion before aborting [#11896](https://github.com/ydb-platform/ydb/pull/11896) ([yumkam](https://github.com/yumkam)).
* Add test for CDC topic control plane [#11899](https://github.com/ydb-platform/ydb/pull/11899) ([Nikolay Shestakov](https://github.com/nshestakov)).
* get rid of bootstrap in kqp executer [#11905](https://github.com/ydb-platform/ydb/pull/11905) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Remove REAL infix from huge blob size [#11916](https://github.com/ydb-platform/ydb/pull/11916) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Support arbitrary chain set in huge blob keeper heap [#11921](https://github.com/ydb-platform/ydb/pull/11921) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Unmute stable tests [#11924](https://github.com/ydb-platform/ydb/pull/11924) ([Kirill Rysin](https://github.com/naspirato)).
* YQ-3904 Remove TEvSessionClosed and check generation [#11930](https://github.com/ydb-platform/ydb/pull/11930) ([Dmitry Kardymon](https://github.com/kardymonds)).
* add kafka port to quick start [#11935](https://github.com/ydb-platform/ydb/pull/11935) ([Timofey Koolin](https://github.com/rekby)).
* Drop yql fastcheck before move [#11937](https://github.com/ydb-platform/ydb/pull/11937) ([Vitaly Stoyan](https://github.com/vitstn)).
* Fixed base statistics for global indexes [#11942](https://github.com/ydb-platform/ydb/pull/11942) ([andrew stalin](https://github.com/andrewstalin)).
* YQ-3909 Shared reading: fix Ingress statistics [#11943](https://github.com/ydb-platform/ydb/pull/11943) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YQ-3910 Fix MaxUnreadBytes on stopping query [#11948](https://github.com/ydb-platform/ydb/pull/11948) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Remove passing part pages on part switch [#11952](https://github.com/ydb-platform/ydb/pull/11952) ([kungurtsev](https://github.com/kunga)).
* remove obsolete invalidation from kqp [#11965](https://github.com/ydb-platform/ydb/pull/11965) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Consistency option (core part) [#11970](https://github.com/ydb-platform/ydb/pull/11970) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Disentangle SS operation traits [#11972](https://github.com/ydb-platform/ydb/pull/11972) ([Innokentii Mokin](https://github.com/Enjection)).
* Support arbitrary chain set in huge blob keeper heap [#11983](https://github.com/ydb-platform/ydb/pull/11983) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Add ydb cli changelog [#11986](https://github.com/ydb-platform/ydb/pull/11986) ([Nikolay Perfilov](https://github.com/pnv1)).
* Remove share body logic [#11987](https://github.com/ydb-platform/ydb/pull/11987) ([kungurtsev](https://github.com/kunga)).
* Add YDB CLI folders to CODEOWNERS [#11992](https://github.com/ydb-platform/ydb/pull/11992) ([Nikolay Perfilov](https://github.com/pnv1)).
* Fix ui.sh [#11998](https://github.com/ydb-platform/ydb/pull/11998) ([Vitaly Stoyan](https://github.com/vitstn)).
* Restore backup collection op [#12003](https://github.com/ydb-platform/ydb/pull/12003) ([Innokentii Mokin](https://github.com/Enjection)).
* schemeshard: remove schemeshard_utils.h from common dependencies [#12012](https://github.com/ydb-platform/ydb/pull/12012) ([ijon](https://github.com/ijon)).
* Simple queue fixes [#12014](https://github.com/ydb-platform/ydb/pull/12014) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Increment YDB CLI version to 2.16.0 [#12015](https://github.com/ydb-platform/ydb/pull/12015) ([Nikolay Perfilov](https://github.com/pnv1)).
* test followers with different ydb versions + fixes based on it [#12024](https://github.com/ydb-platform/ydb/pull/12024) ([vporyadke](https://github.com/vporyadke)).
* fix stream lookup bytes calculation [#12026](https://github.com/ydb-platform/ydb/pull/12026) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Drop yql embedded [#12035](https://github.com/ydb-platform/ydb/pull/12035) ([Vitaly Stoyan](https://github.com/vitstn)).
* Add verify for wrong StartOffset and EndOffset. Fix copy of blob. [#12049](https://github.com/ydb-platform/ydb/pull/12049) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Simply request all pages in Scan from Shared Cache [#12055](https://github.com/ydb-platform/ydb/pull/12055) ([kungurtsev](https://github.com/kunga)).
* Improvments for regression tests workflow [#12059](https://github.com/ydb-platform/ydb/pull/12059) ([Kirill Rysin](https://github.com/naspirato)).
* YQ-3912 Add read_group ( ~ connection_id) to pq cluster config [#12064](https://github.com/ydb-platform/ydb/pull/12064) ([Dmitry Kardymon](https://github.com/kardymonds)).
* mon page has been added for rd read actors [#12074](https://github.com/ydb-platform/ydb/pull/12074) ([Oleg Doronin](https://github.com/dorooleg)).
* Delete legacy Compaction Read code [#12078](https://github.com/ydb-platform/ydb/pull/12078) ([kungurtsev](https://github.com/kunga)).
* Login helper refactoring [#12083](https://github.com/ydb-platform/ydb/pull/12083) ([azevaykin](https://github.com/azevaykin)).
* Unmute stable tests [#12096](https://github.com/ydb-platform/ydb/pull/12096) ([Kirill Rysin](https://github.com/naspirato)).
* Make it possible to change in-memory setting for tables [#12099](https://github.com/ydb-platform/ydb/pull/12099) ([Aleksei Borzenkov](https://github.com/snaury)).
* Ping service [#12100](https://github.com/ydb-platform/ydb/pull/12100) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* YQ-3912 Add read group to row dispatcher  [#12102](https://github.com/ydb-platform/ydb/pull/12102) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Reply error on database size exceeded [#12110](https://github.com/ydb-platform/ydb/pull/12110) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Consistency option (kqp part) [#12111](https://github.com/ydb-platform/ydb/pull/12111) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* fq for solomon providers folders [#12121](https://github.com/ydb-platform/ydb/pull/12121) ([uzhastik](https://github.com/uzhastik)).
* Testlib: CheckDatabaseAccessPermission = true [#12126](https://github.com/ydb-platform/ydb/pull/12126) ([azevaykin](https://github.com/azevaykin)).
* Move CDC_Write test to slow [#12129](https://github.com/ydb-platform/ydb/pull/12129) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YQ-3871 Restart session on query stopping (if query read historical data) [#12135](https://github.com/ydb-platform/ydb/pull/12135) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Add partition status to pq tablet html app [#12144](https://github.com/ydb-platform/ydb/pull/12144) ([Nikolay Shestakov](https://github.com/nshestakov)).
* add test with build in progress index & chooser [#12148](https://github.com/ydb-platform/ydb/pull/12148) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* YQ-3933 Fix FlagTrackDelivery [#12160](https://github.com/ydb-platform/ydb/pull/12160) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Store sticky pages separately [#12198](https://github.com/ydb-platform/ydb/pull/12198) ([kungurtsev](https://github.com/kunga)).
* ContinueExecute on non-empty transform [#12201](https://github.com/ydb-platform/ydb/pull/12201) ([yumkam](https://github.com/yumkam)).
* Test for olap ACL [#12202](https://github.com/ydb-platform/ydb/pull/12202) ([Nikita Vasilev](https://github.com/nikvas0)).
* Support explicit bootstrap command using distconf [#12204](https://github.com/ydb-platform/ydb/pull/12204) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Remove TString nullptr ctor usages [#12207](https://github.com/ydb-platform/ydb/pull/12207) ([Golear Dimitris](https://github.com/Disadvantaged)).
* YQ fix unused argument [#12212](https://github.com/ydb-platform/ydb/pull/12212) ([Pisarenko Grigoriy](https://github.com/GrigoriyPA)).
* Explicit ydb/tools/cfg/bin/ydb_configure path [#12213](https://github.com/ydb-platform/ydb/pull/12213) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* Fix use-after-free when access line location in `ydb tools restore` [#12217](https://github.com/ydb-platform/ydb/pull/12217) ([Ilia Shakhov](https://github.com/pixcc)).
* fix various problems in stream lookup [#12218](https://github.com/ydb-platform/ydb/pull/12218) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix whitespace in schemeshard logging [#12229](https://github.com/ydb-platform/ydb/pull/12229) ([Innokentii Mokin](https://github.com/Enjection)).
* Remove explicit codegen in cmake export [#12238](https://github.com/ydb-platform/ydb/pull/12238) ([Aleksei Borzenkov](https://github.com/snaury)).
* Explicitly specify codegen binary name in ydb/core/base [#12240](https://github.com/ydb-platform/ydb/pull/12240) ([Aleksei Borzenkov](https://github.com/snaury)).
* use YDB_KAFKA_PROXY_PORT for enable kafka [#12242](https://github.com/ydb-platform/ydb/pull/12242) ([Timofey Koolin](https://github.com/rekby)).
* Fix compilation errors in 24-3 [#12245](https://github.com/ydb-platform/ydb/pull/12245) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YQ-3893 Use one session read_actor <-> RD [#12247](https://github.com/ydb-platform/ydb/pull/12247) ([Dmitry Kardymon](https://github.com/kardymonds)).
* add debug service changelog entry [#12258](https://github.com/ydb-platform/ydb/pull/12258) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Increment YDB CLI version to 2.17.0 [#12260](https://github.com/ydb-platform/ydb/pull/12260) ([Nikolay Perfilov](https://github.com/pnv1)).
* Register a custom audit log item builder [#12268](https://github.com/ydb-platform/ydb/pull/12268) ([andrew stalin](https://github.com/andrewstalin)).
* adjust grpc request latency buckets [#12271](https://github.com/ydb-platform/ydb/pull/12271) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Add more logs to backup-related components [#12277](https://github.com/ydb-platform/ydb/pull/12277) ([Innokentii Mokin](https://github.com/Enjection)).
* Make incr backup tests independent of order [#12280](https://github.com/ydb-platform/ydb/pull/12280) ([Innokentii Mokin](https://github.com/Enjection)).
* Support intersecting hosts in MergeBoxes [#12282](https://github.com/ydb-platform/ydb/pull/12282) ([Alexander Rutkovsky](https://github.com/alexvru)).
* YQ-3893 Fix next message offset in topic session [#12284](https://github.com/ydb-platform/ydb/pull/12284) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Grpc authentication tests [#12290](https://github.com/ydb-platform/ydb/pull/12290) ([azevaykin](https://github.com/azevaykin)).
* Turn Scan memory into passive Shared Cache memory [#12295](https://github.com/ydb-platform/ydb/pull/12295) ([kungurtsev](https://github.com/kunga)).
* YQ-3943 Fix TopicPartitionsLimitPerNode limit [#12302](https://github.com/ydb-platform/ydb/pull/12302) ([Dmitry Kardymon](https://github.com/kardymonds)).
* YDB FQ: extend data source settings for Logging data source [#12305](https://github.com/ydb-platform/ydb/pull/12305) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Public API bootstrap command [#12308](https://github.com/ydb-platform/ydb/pull/12308) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Simplify ds incr backup test helper [#12319](https://github.com/ydb-platform/ydb/pull/12319) ([Innokentii Mokin](https://github.com/Enjection)).
* setup large hard limit bytes for ydb in tpch test [#12329](https://github.com/ydb-platform/ydb/pull/12329) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Process heartbeats [#12333](https://github.com/ydb-platform/ydb/pull/12333) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Handle backup collection structure on restore [#12335](https://github.com/ydb-platform/ydb/pull/12335) ([Innokentii Mokin](https://github.com/Enjection)).
* Add the rest stuff for autoscaling [#12343](https://github.com/ydb-platform/ydb/pull/12343) ([Ilia Shakhov](https://github.com/pixcc)).
* Fix misleading schemeshard logs [#12346](https://github.com/ydb-platform/ydb/pull/12346) ([Innokentii Mokin](https://github.com/Enjection)).
* Optimize CPU usage when read blob (always use count limit) [#12349](https://github.com/ydb-platform/ydb/pull/12349) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix more misleading schemeshard logs [#12361](https://github.com/ydb-platform/ydb/pull/12361) ([Innokentii Mokin](https://github.com/Enjection)).
* Added CODEOWNERS for C++ SDK [#12375](https://github.com/ydb-platform/ydb/pull/12375) ([Bulat](https://github.com/Gazizonoki)).
* Fix whitespace in some schemeshard logs [#12388](https://github.com/ydb-platform/ydb/pull/12388) ([Innokentii Mokin](https://github.com/Enjection)).
* Schema changes for transfer data from the topic to the table [#12394](https://github.com/ydb-platform/ydb/pull/12394) ([Nikolay Shestakov](https://github.com/nshestakov)).
* YQ-3893  Remove query_id metrics on terminate [#12397](https://github.com/ydb-platform/ydb/pull/12397) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Split IC peer name labels [#12401](https://github.com/ydb-platform/ydb/pull/12401) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Allow data query for olap [#12404](https://github.com/ydb-platform/ydb/pull/12404) ([Nikita Vasilev](https://github.com/nikvas0)).
* Optimize CPU usage when read blob (always use count limit, fix) [#12412](https://github.com/ydb-platform/ydb/pull/12412) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Fix benchmarks/run_tests [#12420](https://github.com/ydb-platform/ydb/pull/12420) ([yumkam](https://github.com/yumkam)).
* Simple queue improvements [#12426](https://github.com/ydb-platform/ydb/pull/12426) ([Maxim Yurchuk](https://github.com/maximyurchuk)).
* less query id labels [#12427](https://github.com/ydb-platform/ydb/pull/12427) ([uzhastik](https://github.com/uzhastik)).
* YDB FQ: more support for Logging as an external data source [#12429](https://github.com/ydb-platform/ydb/pull/12429) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Library "files" for ydb/public/lib/ydb_cli/dump [#12432](https://github.com/ydb-platform/ydb/pull/12432) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* Fix tests [#12435](https://github.com/ydb-platform/ydb/pull/12435) ([FloatingCrowbar](https://github.com/FloatingCrowbar)).
* avoid code duplication of cell vectors hascode and equals [#12437](https://github.com/ydb-platform/ydb/pull/12437) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Don't skip xfail tests with dq only provider [#12440](https://github.com/ydb-platform/ydb/pull/12440) ([Roman Udovichenko](https://github.com/rvu1024)).
* Fix olap reads in data query [#12463](https://github.com/ydb-platform/ydb/pull/12463) ([Nikita Vasilev](https://github.com/nikvas0)).
* Enable SystemView.Nodes test [#12499](https://github.com/ydb-platform/ydb/pull/12499) ([kungurtsev](https://github.com/kunga)).
* Revert incorrect changes in BlobDepot [#12508](https://github.com/ydb-platform/ydb/pull/12508) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Run olap scenario tests on local ydb cluster [#12512](https://github.com/ydb-platform/ydb/pull/12512) ([zverevgeny](https://github.com/zverevgeny)).
* Don't run spilling (unused) with asan [#12514](https://github.com/ydb-platform/ydb/pull/12514) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Rename consistency settings (part 1) [#12526](https://github.com/ydb-platform/ydb/pull/12526) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Refactoring ydb/library/backup/backup.cpp [#12536](https://github.com/ydb-platform/ydb/pull/12536) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* YQ-3924 Pass cpu time to read actor [#12546](https://github.com/ydb-platform/ydb/pull/12546) ([Dmitry Kardymon](https://github.com/kardymonds)).
* parse and pass streamlookup parameters, YDB part [#12548](https://github.com/ydb-platform/ydb/pull/12548) ([yumkam](https://github.com/yumkam)).
* unmited fixed TPDiskTest.AllRequestsAreAnsweredOnPDiskRestart [#12551](https://github.com/ydb-platform/ydb/pull/12551) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).
* avoid allocating data on TTypeEnv when making cell vectors [#12552](https://github.com/ydb-platform/ydb/pull/12552) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Rename RESOLVED_TIMESTAMPS to BARRIERS_INTERVAL (part 1) [#12555](https://github.com/ydb-platform/ydb/pull/12555) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix build for memory profiling mode [#12569](https://github.com/ydb-platform/ydb/pull/12569) ([Ivan](https://github.com/abyss7)).
* Describe users even they haven't been logged in [#12574](https://github.com/ydb-platform/ydb/pull/12574) ([kungurtsev](https://github.com/kunga)).
* Merge rightlib 20241212 [#12582](https://github.com/ydb-platform/ydb/pull/12582) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* YDB FQ: fix tests after type renaming [#12589](https://github.com/ydb-platform/ydb/pull/12589) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* YDB FQ: drop protofiles that are no more used [#12596](https://github.com/ydb-platform/ydb/pull/12596) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Update TESTOWNERS - add engineering team [#12597](https://github.com/ydb-platform/ydb/pull/12597) ([Kirill Rysin](https://github.com/naspirato)).
* Rename consistency settings (part 2) [#12603](https://github.com/ydb-platform/ydb/pull/12603) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* fix deadlock [#12621](https://github.com/ydb-platform/ydb/pull/12621) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Enable automatic box management with distconf by default [#12631](https://github.com/ydb-platform/ydb/pull/12631) ([Alexander Rutkovsky](https://github.com/alexvru)).
* YQL for create, alter and drop transfer from topic to table [#12636](https://github.com/ydb-platform/ydb/pull/12636) ([Nikolay Shestakov](https://github.com/nshestakov)).
* kmeans tree vector index search [#12639](https://github.com/ydb-platform/ydb/pull/12639) ([Valery Mironov](https://github.com/MBkkt)).
* Fix c++23 compatibility in actor events [#12640](https://github.com/ydb-platform/ydb/pull/12640) ([Aleksei Borzenkov](https://github.com/snaury)).
* implement secret identification by name [#12641](https://github.com/ydb-platform/ydb/pull/12641) ([Semyon](https://github.com/swalrus1)).
* introduce VDisk throttling depending on SST count on level 0 [#12650](https://github.com/ydb-platform/ydb/pull/12650) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Support migration from conventional config to distconf [#12659](https://github.com/ydb-platform/ydb/pull/12659) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Enable transaction and autopartitioning for topics by default [#12674](https://github.com/ydb-platform/ydb/pull/12674) ([Nikolay Shestakov](https://github.com/nshestakov)).
* Commit replication changes [#12680](https://github.com/ydb-platform/ydb/pull/12680) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Increment YDB CLI version to 2.18.0 [#12688](https://github.com/ydb-platform/ydb/pull/12688) ([Aleksey Myasnikov](https://github.com/asmyasnikov)).
* Move distconf settings a level up in the configuration and add explicit enabled flag [#12696](https://github.com/ydb-platform/ydb/pull/12696) ([Alexander Rutkovsky](https://github.com/alexvru)).
* YQ-3738 Fix metafields in read_actor  [#12708](https://github.com/ydb-platform/ydb/pull/12708) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Some fixes in vector index schema [#12727](https://github.com/ydb-platform/ydb/pull/12727) ([Valery Mironov](https://github.com/MBkkt)).
* Add export checksums [#12728](https://github.com/ydb-platform/ydb/pull/12728) ([Ilia Shakhov](https://github.com/pixcc)).
* Support lightweight alias actor ids for actors [#12731](https://github.com/ydb-platform/ydb/pull/12731) ([Aleksei Borzenkov](https://github.com/snaury)).
* sanitize query name label [#12746](https://github.com/ydb-platform/ydb/pull/12746) ([uzhastik](https://github.com/uzhastik)).
* Try to fix msan for blobstorage unit tests [#12748](https://github.com/ydb-platform/ydb/pull/12748) ([Valery Mironov](https://github.com/MBkkt)).
* Feature/ydbd slice/allow slice creation using raw config yaml [#12762](https://github.com/ydb-platform/ydb/pull/12762) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Docs: authorization [#12771](https://github.com/ydb-platform/ydb/pull/12771) ([azevaykin](https://github.com/azevaykin)).
* YDB FQ: fix streaming tests after refactoring [#12800](https://github.com/ydb-platform/ydb/pull/12800) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Add event tracing capabilities in debugging [#12801](https://github.com/ydb-platform/ydb/pull/12801) ([Innokentii Mokin](https://github.com/Enjection)).
* ydb debug latency [#12803](https://github.com/ydb-platform/ydb/pull/12803) ([Evgeniy Ivanov](https://github.com/eivanov89)).
* Fix incorrect arguments in Send call [#12806](https://github.com/ydb-platform/ydb/pull/12806) ([Innokentii Mokin](https://github.com/Enjection)).
* Make `ListNodesCache` persistent between different `ListNodes` batches [#12813](https://github.com/ydb-platform/ydb/pull/12813) ([Ilia Shakhov](https://github.com/pixcc)).
* add throttling by inplaced blobs total size; add counters [#12829](https://github.com/ydb-platform/ydb/pull/12829) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Fix some issues from coverity in ActorSystem [#12831](https://github.com/ydb-platform/ydb/pull/12831) ([kruall](https://github.com/kruall)).
* YQ-3988 Add stop session reason [#12839](https://github.com/ydb-platform/ydb/pull/12839) ([Dmitry Kardymon](https://github.com/kardymonds)).
*  Description in the changelog about changefeed backup/restore [#12840](https://github.com/ydb-platform/ydb/pull/12840) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* YQ-39-47 Add EgressDataRate sensor to  pq write actor [#12846](https://github.com/ydb-platform/ydb/pull/12846) ([Dmitry Kardymon](https://github.com/kardymonds)).
* make code analyzer happy [#12860](https://github.com/ydb-platform/ydb/pull/12860) ([zverevgeny](https://github.com/zverevgeny)).
* rework olap_workload [#12870](https://github.com/ydb-platform/ydb/pull/12870) ([zverevgeny](https://github.com/zverevgeny)).
* Use FromProto/ToProto method names in TPathId and TRowVersion [#12880](https://github.com/ydb-platform/ydb/pull/12880) ([Aleksei Borzenkov](https://github.com/snaury)).
* Allow some quiet period before starting TestShard load [#12887](https://github.com/ydb-platform/ydb/pull/12887) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Add datashard interface for data cleanup operation [#12896](https://github.com/ydb-platform/ydb/pull/12896) ([Ivan Nikolaev](https://github.com/lex007in)).
* Refactor tests in YDB Topics' Kafka proxy [#12902](https://github.com/ydb-platform/ydb/pull/12902) ([Andrey Serebryanskiy](https://github.com/a-serebryanskiy)).
* Fix a reversed MissingConfig counter in coordinator [#12907](https://github.com/ydb-platform/ydb/pull/12907) ([Aleksei Borzenkov](https://github.com/snaury)).
* make throttling parameters configurable via CMS [#12911](https://github.com/ydb-platform/ydb/pull/12911) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Allow TOwnedCellVec construction directly from cellvec data [#12913](https://github.com/ydb-platform/ydb/pull/12913) ([Aleksei Borzenkov](https://github.com/snaury)).
* rightlib sync workflow [#12916](https://github.com/ydb-platform/ydb/pull/12916) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Update CHANGELOG.md [#12923](https://github.com/ydb-platform/ydb/pull/12923) ([Nikolay Perfilov](https://github.com/pnv1)).
* [ydbd_slice] add alias to kikimr for binary option on install [#12924](https://github.com/ydb-platform/ydb/pull/12924) ([Alexander Petrukhin](https://github.com/shmel1k)).
* Use sized operator delete for TOwnedCellVec [#12928](https://github.com/ydb-platform/ydb/pull/12928) ([Aleksei Borzenkov](https://github.com/snaury)).
* Add a feature flag for disabling erase cache [#12931](https://github.com/ydb-platform/ydb/pull/12931) ([Aleksei Borzenkov](https://github.com/snaury)).
* YDB FQ: fix analytics tests after refactoring [#12938](https://github.com/ydb-platform/ydb/pull/12938) ([yumkam](https://github.com/yumkam)).
* don't update indexes when all input columns are specified for indexes but values are not changed [#12940](https://github.com/ydb-platform/ydb/pull/12940) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* rewrite suite_tests parser [#12949](https://github.com/ydb-platform/ydb/pull/12949) ([zverevgeny](https://github.com/zverevgeny)).
* YDB FQ: Update fq-connector-go image v0.6.2 [#12955](https://github.com/ydb-platform/ydb/pull/12955) ([Vitaly Isaev](https://github.com/vitalyisaev2)).
* Add db counters for uncommitted changes and suspicious commits [#12966](https://github.com/ydb-platform/ydb/pull/12966) ([Aleksei Borzenkov](https://github.com/snaury)).
* Log last failed memory allocation instead of max [#12981](https://github.com/ydb-platform/ydb/pull/12981) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* ci: fix commit message in rightlib sync merge commit [#12986](https://github.com/ydb-platform/ydb/pull/12986) ([Nikita Kozlovskii](https://github.com/nikitka)).
* dummy pq emulation: cosmetics [#12992](https://github.com/ydb-platform/ydb/pull/12992) ([yumkam](https://github.com/yumkam)).
* remove  table with _ne suffix creation [#13002](https://github.com/ydb-platform/ydb/pull/13002) ([zverevgeny](https://github.com/zverevgeny)).
* Fix an observer use-after-free in a datashard test [#13004](https://github.com/ydb-platform/ydb/pull/13004) ([Aleksei Borzenkov](https://github.com/snaury)).
* async ca monitoring page: add detailed channel and sink state [#13009](https://github.com/ydb-platform/ydb/pull/13009) ([yumkam](https://github.com/yumkam)).
* do not switch ddl/dml when using query service [#13011](https://github.com/ydb-platform/ydb/pull/13011) ([zverevgeny](https://github.com/zverevgeny)).
* Disable WorkloadInsertDelete [#13016](https://github.com/ydb-platform/ydb/pull/13016) ([zverevgeny](https://github.com/zverevgeny)).
* Run olap workload on pr checks [#13017](https://github.com/ydb-platform/ydb/pull/13017) ([zverevgeny](https://github.com/zverevgeny)).
* remove old queue operations from tests and cli [#13032](https://github.com/ydb-platform/ydb/pull/13032) ([alexnick88](https://github.com/alexnick88)).
* Move TxIds & PendingTxId into session [#13039](https://github.com/ydb-platform/ydb/pull/13039) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Mute Flaky [#13041](https://github.com/ydb-platform/ydb/pull/13041) ([Kirill Rysin](https://github.com/naspirato)).
* return removed tests [#13042](https://github.com/ydb-platform/ydb/pull/13042) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Forget old tx ids [#13051](https://github.com/ydb-platform/ydb/pull/13051) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* test create column table with various column types [#13054](https://github.com/ydb-platform/ydb/pull/13054) ([zverevgeny](https://github.com/zverevgeny)).
* Re-request tx ids during handshake [#13059](https://github.com/ydb-platform/ydb/pull/13059) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* check colunm tables creation with nullables columns [#13061](https://github.com/ydb-platform/ydb/pull/13061) ([zverevgeny](https://github.com/zverevgeny)).
* ci: rightlib-sync: allow maintainers to modify PR [#13070](https://github.com/ydb-platform/ydb/pull/13070) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Refactoring FillTopicDescription & FillChangefeedDescription [#13077](https://github.com/ydb-platform/ydb/pull/13077) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* Vector Index leftovers [#13086](https://github.com/ydb-platform/ydb/pull/13086) ([Valery Mironov](https://github.com/MBkkt)).
* claryfy query results comparision [#13090](https://github.com/ydb-platform/ydb/pull/13090) ([zverevgeny](https://github.com/zverevgeny)).
* add vdisk throttling according to disk space occupancy [#13098](https://github.com/ydb-platform/ydb/pull/13098) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* Audit log for ModifyScheme::ESchemeOpAlterLogin [#13108](https://github.com/ydb-platform/ydb/pull/13108) ([andrew stalin](https://github.com/andrewstalin)).
* generic lookup: handle retrievable errors in grpc [#13119](https://github.com/ydb-platform/ydb/pull/13119) ([yumkam](https://github.com/yumkam)).
* Empty queues (PendingRecords & PendingTxId) before sending TEvPoll [#13127](https://github.com/ydb-platform/ydb/pull/13127) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Fix -Wunused-parameter [#13138](https://github.com/ydb-platform/ydb/pull/13138) ([Vadim D.](https://github.com/vvd170501)).
* Forbid to remove user with access [#13144](https://github.com/ydb-platform/ydb/pull/13144) ([kungurtsev](https://github.com/kunga)).
* Switch kqp yt tests to yt suites [#13152](https://github.com/ydb-platform/ydb/pull/13152) ([Vitaly Stoyan](https://github.com/vitstn)).
* Swith dq_file/hybrid_file to yt suites [#13153](https://github.com/ydb-platform/ydb/pull/13153) ([Vitaly Stoyan](https://github.com/vitstn)).
* fix build with rigourous checks [#13160](https://github.com/ydb-platform/ydb/pull/13160) ([zverevgeny](https://github.com/zverevgeny)).
* move tx_extension.h to a common place [#13165](https://github.com/ydb-platform/ydb/pull/13165) ([zverevgeny](https://github.com/zverevgeny)).
* pacify static code analyzer [#13167](https://github.com/ydb-platform/ydb/pull/13167) ([zverevgeny](https://github.com/zverevgeny)).
* Send heartbeat message after writing the data [#13168](https://github.com/ydb-platform/ydb/pull/13168) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Remove unnecessary template from TExtendedTransactionBase [#13169](https://github.com/ydb-platform/ydb/pull/13169) ([zverevgeny](https://github.com/zverevgeny)).
* Insert into nullable PK [#13193](https://github.com/ydb-platform/ydb/pull/13193) ([zverevgeny](https://github.com/zverevgeny)).
* Adapt suite tests for cs [#13204](https://github.com/ydb-platform/ydb/pull/13204) ([zverevgeny](https://github.com/zverevgeny)).
* YQ-3988 Add UnreadBytes sensor / fix labels for other sensors [#13205](https://github.com/ydb-platform/ydb/pull/13205) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Remove excessive check from DS proxy mock [#13207](https://github.com/ydb-platform/ydb/pull/13207) ([Alexander Rutkovsky](https://github.com/alexvru)).
* add conflict ut [#13211](https://github.com/ydb-platform/ydb/pull/13211) ([Mikhail Surin](https://github.com/ssmike)).
* roaring_bitmap_add_bulk [#13216](https://github.com/ydb-platform/ydb/pull/13216) ([azevaykin](https://github.com/azevaykin)).
* Added test that checks if simple aggregations are handled by block engine [#13224](https://github.com/ydb-platform/ydb/pull/13224) ([Filitov Mikhail](https://github.com/lll-phill-lll)).
* Fix ForceBlockTabletData behaviour in BlobDepot and DS proxy mock [#13227](https://github.com/ydb-platform/ydb/pull/13227) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Add LookupSrc InFlight counter [#13228](https://github.com/ydb-platform/ydb/pull/13228) ([yumkam](https://github.com/yumkam)).
* Apply changes in the correct order [#13232](https://github.com/ydb-platform/ydb/pull/13232) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Don't migrate uninitialized in-memory vars between datashards [#13235](https://github.com/ydb-platform/ydb/pull/13235) ([Aleksei Borzenkov](https://github.com/snaury)).
* Return consistency settings in the description [#13236](https://github.com/ydb-platform/ydb/pull/13236) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Generic lookup add timeouts [#13239](https://github.com/ydb-platform/ydb/pull/13239) ([yumkam](https://github.com/yumkam)).
* avoid underflow in clickhouse code [#13240](https://github.com/ydb-platform/ydb/pull/13240) ([uzhastik](https://github.com/uzhastik)).
* [ydbd_slice] add confirmation before ydbd build [#13241](https://github.com/ydb-platform/ydb/pull/13241) ([Alexander Petrukhin](https://github.com/shmel1k)).
* fix coverity complains [#13244](https://github.com/ydb-platform/ydb/pull/13244) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* validate invalid curly brace [#13245](https://github.com/ydb-platform/ydb/pull/13245) ([uzhastik](https://github.com/uzhastik)).
* SystemView Auth Owners [#13248](https://github.com/ydb-platform/ydb/pull/13248) ([kungurtsev](https://github.com/kunga)).
* fix coverity complains [#13249](https://github.com/ydb-platform/ydb/pull/13249) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Make selector_config and allowed_labels optional [#13252](https://github.com/ydb-platform/ydb/pull/13252) ([Innokentii Mokin](https://github.com/Enjection)).
* Add LastSuccessfulLogin time point to TSidRecord [#13254](https://github.com/ydb-platform/ydb/pull/13254) ([andrew stalin](https://github.com/andrewstalin)).
* Replication consistency levels support in C++ SDK [#13255](https://github.com/ydb-platform/ydb/pull/13255) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Add forgotten clear() [#13256](https://github.com/ydb-platform/ydb/pull/13256) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* switch to metrics interface [#13257](https://github.com/ydb-platform/ydb/pull/13257) ([Alexey Efimov](https://github.com/adameat)).
* Add sensors [#13261](https://github.com/ydb-platform/ydb/pull/13261) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Add account_type parameter for audit logs [#13269](https://github.com/ydb-platform/ydb/pull/13269) ([andrew stalin](https://github.com/andrewstalin)).
* ACL test for olap [#13270](https://github.com/ydb-platform/ydb/pull/13270) ([Nikita Vasilev](https://github.com/nikvas0)).
* Unlock last YT test in dq_file/hybrid_file [#13275](https://github.com/ydb-platform/ydb/pull/13275) ([Vitaly Stoyan](https://github.com/vitstn)).
* Correct BSC teardown on Console race [#13280](https://github.com/ydb-platform/ydb/pull/13280) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix group resolver bug [#13282](https://github.com/ydb-platform/ydb/pull/13282) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix version of python in workflow [#13287](https://github.com/ydb-platform/ydb/pull/13287) ([kruall](https://github.com/kruall)).
* Disable ALTER OBJECT for column tables by default [#13299](https://github.com/ydb-platform/ydb/pull/13299) ([zverevgeny](https://github.com/zverevgeny)).
* Add missed include <cstdlib> [#13300](https://github.com/ydb-platform/ydb/pull/13300) ([Mikhnenko Sasha](https://github.com/4JustMe4)).
* fix decoding version output in sql tests [#13304](https://github.com/ydb-platform/ydb/pull/13304) ([zverevgeny](https://github.com/zverevgeny)).
* Add shred stub into BSC [#13310](https://github.com/ydb-platform/ydb/pull/13310) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Make use of poller actor straight in http subsystem [#13316](https://github.com/ydb-platform/ydb/pull/13316) ([Alexander Rutkovsky](https://github.com/alexvru)).
* YQ-4017 Use real threds / try to fix asan tests [#13324](https://github.com/ydb-platform/ydb/pull/13324) ([Dmitry Kardymon](https://github.com/kardymonds)).
* remove minikql exec command [#13325](https://github.com/ydb-platform/ydb/pull/13325) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Fix UndoShardLock sometimes crashing when restoring in-memory locks [#13339](https://github.com/ydb-platform/ydb/pull/13339) ([Aleksei Borzenkov](https://github.com/snaury)).
* Scheme Shard List users request [#13344](https://github.com/ydb-platform/ydb/pull/13344) ([kungurtsev](https://github.com/kunga)).
* Support distconf shutdown [#13351](https://github.com/ydb-platform/ydb/pull/13351) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Inline up to 14 bytes in TCell [#13352](https://github.com/ydb-platform/ydb/pull/13352) ([Aleksei Borzenkov](https://github.com/snaury)).
* Support dynamic config propagation when distconf is off [#13354](https://github.com/ydb-platform/ydb/pull/13354) ([Alexander Rutkovsky](https://github.com/alexvru)).
* Fix reading messages from Kafka API in no authentication mode [#13357](https://github.com/ydb-platform/ydb/pull/13357) ([Andrey Serebryanskiy](https://github.com/a-serebryanskiy)).
* Fix some ubsan issues related to double vs ui64 [#13364](https://github.com/ydb-platform/ydb/pull/13364) ([Aleksei Borzenkov](https://github.com/snaury)).
* add vdisk throttling by log chunk count [#13366](https://github.com/ydb-platform/ydb/pull/13366) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* builtin security: add CreateQueue permission to DDL-ADMINS [#13367](https://github.com/ydb-platform/ydb/pull/13367) ([ijon](https://github.com/ijon)).
* Support TString = std::string in TSerializedCellVec [#13382](https://github.com/ydb-platform/ydb/pull/13382) ([Aleksei Borzenkov](https://github.com/snaury)).
* Fix race on table create delete [#13394](https://github.com/ydb-platform/ydb/pull/13394) ([zverevgeny](https://github.com/zverevgeny)).
* prepare move yt/comp_nodes/dq to llvm16 [#13399](https://github.com/ydb-platform/ydb/pull/13399) ([Vitaly Stoyan](https://github.com/vitstn)).
* SystemView Auth Permissions [#13403](https://github.com/ydb-platform/ydb/pull/13403) ([kungurtsev](https://github.com/kunga)).
* add logs for s3 request errors [#13405](https://github.com/ydb-platform/ydb/pull/13405) ([Semyon](https://github.com/swalrus1)).
* fix nbs tests build [#13407](https://github.com/ydb-platform/ydb/pull/13407) ([vporyadke](https://github.com/vporyadke)).
* Safe operation convertations [#13409](https://github.com/ydb-platform/ydb/pull/13409) ([Ilnaz Nizametdinov](https://github.com/CyberROFL)).
* Explicit control of SelfManagement enabling in distconf [#13411](https://github.com/ydb-platform/ydb/pull/13411) ([Alexander Rutkovsky](https://github.com/alexvru)).
* support pdisk build with musl [#13414](https://github.com/ydb-platform/ydb/pull/13414) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Add ydb ut only in ydb repository [#13419](https://github.com/ydb-platform/ydb/pull/13419) ([Marina Pereskokova](https://github.com/Krisha11)).
* Renamed the audit log parameter account_type to login_user_level [#13421](https://github.com/ydb-platform/ydb/pull/13421) ([andrew stalin](https://github.com/andrewstalin)).
* fix space color order in quota record [#13430](https://github.com/ydb-platform/ydb/pull/13430) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* [filestore] Allow 4G+ throttle values  [#13454](https://github.com/ydb-platform/ydb/pull/13454) ([proller](https://github.com/proller)).
* Detailed Shared Cache logs [#13455](https://github.com/ydb-platform/ydb/pull/13455) ([kungurtsev](https://github.com/kunga)).
* move core/client tests to simple mkql invoker [#13462](https://github.com/ydb-platform/ydb/pull/13462) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Muted unstable and unmute stable tests [#13471](https://github.com/ydb-platform/ydb/pull/13471) ([Kirill Rysin](https://github.com/naspirato)).
* YQ-3542 Calculate cpu over ticks (+ task runner actor cpu) [#13479](https://github.com/ydb-platform/ydb/pull/13479) ([Dmitry Kardymon](https://github.com/kardymonds)).
* RowDispatcher: split log messages by 64k [#13491](https://github.com/ydb-platform/ydb/pull/13491) ([Dmitry Kardymon](https://github.com/kardymonds)).
* FQ: Reduce buckets in histogram sensors [#13494](https://github.com/ydb-platform/ydb/pull/13494) ([Dmitry Kardymon](https://github.com/kardymonds)).
* descrease rows number in tests [#13507](https://github.com/ydb-platform/ydb/pull/13507) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* switch ui32 to ui64 [#13508](https://github.com/ydb-platform/ydb/pull/13508) ([uzhastik](https://github.com/uzhastik)).
* remove rpc call Request from deprecated api code [#13510](https://github.com/ydb-platform/ydb/pull/13510) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Completely remove security config from TDomainsConfig [#13512](https://github.com/ydb-platform/ydb/pull/13512) ([Innokentii Mokin](https://github.com/Enjection)).
* Test deleting from s3 by ttl [#13533](https://github.com/ydb-platform/ydb/pull/13533) ([zverevgeny](https://github.com/zverevgeny)).
* Implement PDisk shred event handling, [#12483](https://github.com/ydb-platform/ydb/issues/12483) [#13538](https://github.com/ydb-platform/ydb/pull/13538) ([Cthulhu](https://github.com/the-ancient-1)).
* FQ: edit LatencyMs buckets count in Histogram [#13549](https://github.com/ydb-platform/ydb/pull/13549) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Refactoring put object request in export_s3_uploader.cpp [#13570](https://github.com/ydb-platform/ydb/pull/13570) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* Test on topic_description.pb without the created_at field. [#13573](https://github.com/ydb-platform/ydb/pull/13573) ([stanislav_shchetinin](https://github.com/stanislav-shchetinin)).
* Update YDB CLI installation script to detect amd/arm architecture again [#13576](https://github.com/ydb-platform/ydb/pull/13576) ([Nikolay Perfilov](https://github.com/pnv1)).
* Avoid unnecessary ReadStep coordinator subscriptions [#13585](https://github.com/ydb-platform/ydb/pull/13585) ([Aleksei Borzenkov](https://github.com/snaury)).
* TypeInfoFromProto decimal test [#13588](https://github.com/ydb-platform/ydb/pull/13588) ([azevaykin](https://github.com/azevaykin)).
* Test: Check data migration when altering tiering settings [#13613](https://github.com/ydb-platform/ydb/pull/13613) ([Vladislav Gogov](https://github.com/vlad-gogov)).
* Top-level security config from scratch [#13634](https://github.com/ydb-platform/ydb/pull/13634) ([Innokentii Mokin](https://github.com/Enjection)).
* Correctly return error on reading from an unsuccessful result [#13658](https://github.com/ydb-platform/ydb/pull/13658) ([kungurtsev](https://github.com/kunga)).
* change driver path lookup path in recipe [#13667](https://github.com/ydb-platform/ydb/pull/13667) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* Include conditionally used include conditionally to speed up the build ([#13682](https://github.com/ydb-platform/ydb/issues/13682)) [#13683](https://github.com/ydb-platform/ydb/pull/13683) ([Cthulhu](https://github.com/the-ancient-1)).
* YQ: Fix asan fails in ydb/tests/fq/pq_async_io  [#13684](https://github.com/ydb-platform/ydb/pull/13684) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Implement PDisk shred reaction to Harakiri and YardInit, [#12483](https://github.com/ydb-platform/ydb/issues/12483) [#13685](https://github.com/ydb-platform/ydb/pull/13685) ([Cthulhu](https://github.com/the-ancient-1)).
* Fixed use-after-free in C++ SDK v2 [#13687](https://github.com/ydb-platform/ydb/pull/13687) ([Bulat](https://github.com/Gazizonoki)).
* Fixed build of ydb/core/kqp/ut/indexes test [#13688](https://github.com/ydb-platform/ydb/pull/13688) ([Bulat](https://github.com/Gazizonoki)).
* YQ-3893 Add timeout in read_actor after TEvUndelivered  [#13692](https://github.com/ydb-platform/ydb/pull/13692) ([Dmitry Kardymon](https://github.com/kardymonds)).
* Stability test: collect uniq traces [#13696](https://github.com/ydb-platform/ydb/pull/13696) ([Kirill Rysin](https://github.com/naspirato)).
* Add S3 unavailability test [#13700](https://github.com/ydb-platform/ydb/pull/13700) ([Vadim Averin](https://github.com/avevad)).
* Removed CMakeLists from C++ SDK [#13703](https://github.com/ydb-platform/ydb/pull/13703) ([Bulat](https://github.com/Gazizonoki)).
* Remove C++ SDKv2 from dependency graph in github [#13716](https://github.com/ydb-platform/ydb/pull/13716) ([Bulat](https://github.com/Gazizonoki)).
* Fixed cmake target name duplication in SDK libs [#13731](https://github.com/ydb-platform/ydb/pull/13731) ([Bulat](https://github.com/Gazizonoki)).
* fix bug in throttling by log chunk count [#13734](https://github.com/ydb-platform/ydb/pull/13734) ([Aleksandr Dmitriev](https://github.com/alexd65536)).
* switch off stream idx lookup join by default before 25-1 [#13737](https://github.com/ydb-platform/ydb/pull/13737) ([Vitalii Gridnev](https://github.com/gridnevvvit)).
* YQ-3924 Add compiler actors to cpu stats [#13745](https://github.com/ydb-platform/ydb/pull/13745) ([Dmitry Kardymon](https://github.com/kardymonds)).
* ci: don't add a `external` label to issues from organisation members [#13752](https://github.com/ydb-platform/ydb/pull/13752) ([Nikita Kozlovskii](https://github.com/nikitka)).
* Extract IsAdministrator [#13775](https://github.com/ydb-platform/ydb/pull/13775) ([kungurtsev](https://github.com/kunga)).
* Do not pass ParticipantNodes via protobuf for local event. [#13780](https://github.com/ydb-platform/ydb/pull/13780) ([Daniil Cherednik](https://github.com/dcherednik)).
* schemeshard: fix error handling of bad format in default_access [#13784](https://github.com/ydb-platform/ydb/pull/13784) ([ijon](https://github.com/ijon)).

#### Tests

* Added new UT for deadlines in DS Proxy. [#11749](https://github.com/ydb-platform/ydb/pull/11749) ([Sergey Belyakov](https://github.com/serbel324)).

#### Unit test

* ... [#9912](https://github.com/ydb-platform/ydb/pull/9912) ([Vlad Kuznetsov](https://github.com/va-kuznecov)).

#### not-for-changelog

* Block engine doesn't support wide combiner. But spilling for aggregation only works in it WideCombiner. So, this PR disables block engine when spilling in aggregation is enabled ... [#7778](https://github.com/ydb-platform/ydb/pull/7778) ([Filitov Mikhail](https://github.com/lll-phill-lll)).

#### unit tests

* Add UT for restore and index Get request deadlines. [#11780](https://github.com/ydb-platform/ydb/pull/11780) ([Sergey Belyakov](https://github.com/serbel324)).

