# -*- coding: utf-8 -*-
import logging

import yatest
from ydb.tests.library.common.delayed import wait_tablets_are_active
from ydb.tests.library.common.types import Erasure
from ydb.tests.library.clients.kikimr_http_client import SwaggerClient
from ydb.tests.library.harness.kikimr_runner import KiKiMR
from ydb.tests.library.harness.kikimr_config import KikimrConfigGenerator
from ydb.tests.library.harness.util import LogLevels
from ydb.tests.library.harness import param_constants
from ydb.tests.library.kv.helpers import create_kv_tablets_and_wait_for_start


logger = logging.getLogger(__name__)
TabletsCount = 1500
TimeoutSeconds = 300


class TestHive(object):
    @classmethod
    def setup_class(cls):
        cls.cluster = KiKiMR(
            KikimrConfigGenerator(
                Erasure.BLOCK_4_2,
                additional_log_configs={
                    'HIVE': LogLevels.TRACE, 'LOCAL': LogLevels.TRACE
                },
                use_in_memory_pdisks=False,
                hive_config={
                    'max_node_usage_to_kick': 100,
                    'min_scatter_to_balance': 100,
                    'min_counter_scatter_to_balance': 100,
                    'object_imbalance_to_balance': 100,
                },
            )
        )
        cls.cluster.start()
        host = cls.cluster.nodes[1].host
        mon_port = cls.cluster.nodes[1].mon_port
        cls.swagger_client = SwaggerClient(host, mon_port)

    @classmethod
    def teardown_class(cls):
        if hasattr(cls, 'cluster'):
            cls.cluster.stop()

    def test_drain_tablets(self):
        path = '/Root/mydb'
        table_path = '/Root/mydb/mytable'
        self.cluster.scheme_client.make_directory(path)
        all_tablet_ids = create_kv_tablets_and_wait_for_start(self.cluster.client, self.cluster.kv_client, self.swagger_client, TabletsCount, table_path)
        for node_id, node in self.cluster.nodes.items():
            if node_id == 1:
                continue

            logger.info("Started tablets drain")

            try:
                yatest.common.execute(
                    [
                        param_constants.kikimr_driver_path(), '--mb-total-timeout', str(TimeoutSeconds),
                        '-s', 'localhost:%d' % node.grpc_port, 'admin', 'node', str(node_id), 'drain'
                    ]
                )

            except yatest.common.ExecutionError:
                pass

            node.stop()

            wait_tablets_are_active(
                self.cluster.client,
                all_tablet_ids,
            )

            node.start()

    def test_drain_on_stop(self):
        path = '/Root/mydb'
        table_path = '/Root/mydb/mytable'
        self.cluster.scheme_client.make_directory(path)
        all_tablet_ids = create_kv_tablets_and_wait_for_start(self.cluster.client, self.cluster.kv_client, self.swagger_client, TabletsCount, table_path)
        for node_id, node in self.cluster.nodes.items():
            if node_id == 1:
                continue

            logger.info(f"Stopping node {node_id}")

            node.stop()

            if not node.killed:
                wait_tablets_are_active(
                    self.cluster.client,
                    all_tablet_ids,
                    0,  # Tablets should already be active, as drain must be finished at this point
                )

            node.start()
