#!/usr/bin/env python3
# Copyright (c) 2020 The PIVX developers
# Distributed under the MIT software license, see the accompanying
# file COPYING or https://www.opensource.org/licenses/mit-license.php.

from test_framework.test_framework import PivxTier2TestFramework
from test_framework.util import (
    assert_equal,
    connect_nodes_clique,
    disconnect_nodes,
    satoshi_round,
    sync_blocks,
    sync_mempools,
    wait_until,
)

import time

"""
Test checking:
 1) Masternode setup/creation.
 2) Tier two network sync (masternode broadcasting).
 3) Masternode activation.
 4) Masternode expiration.
 5) Masternode re activation.
 6) Masternode removal.
 7) Masternode collateral spent removal.
"""

class MasternodeActivationTest(PivxTier2TestFramework):

    def disconnect_remotes(self):
        for i in [self.remoteOnePos, self.remoteTwoPos]:
            for j in range(self.num_nodes):
                if i != j:
                    disconnect_nodes(self.nodes[i], j)

    def reconnect_remotes(self):
        connect_nodes_clique(self.nodes)
        self.sync_all()

    def reconnect_and_restart_masternodes(self):
        self.log.info("Reconnecting nodes and sending start message again...")
        self.reconnect_remotes()
        self.wait_until_mnsync_finished()
        self.controller_start_all_masternodes()

    def spend_collateral(self):
        mnCollateralOutput = self.ownerOne.getmasternodeoutputs()[0]
        assert_equal(mnCollateralOutput["txhash"], self.mnOneTxHash)
        mnCollateralOutputIndex = mnCollateralOutput["outputidx"]
        send_value = satoshi_round(10000 - 0.001)
        inputs = [{'txid' : self.mnOneTxHash, 'vout' : mnCollateralOutputIndex}]
        outputs = {}
        outputs[self.ownerOne.getnewaddress()] = float(send_value)
        rawtx = self.ownerOne.createrawtransaction(inputs, outputs)
        signedtx = self.ownerOne.signrawtransaction(rawtx)
        txid = self.miner.sendrawtransaction(signedtx['hex'])
        sync_mempools(self.nodes)
        self.log.info("Collateral spent in %s" % txid)
        self.send_pings([self.remoteTwo])
        self.stake(1, [self.remoteTwo])

    # Similar to base class wait_until_mn_status but skipping the disconnected nodes
    def wait_until_mn_expired(self, _timeout, removed=False):
        collaterals = {
            self.remoteOnePos: self.mnOneTxHash,
            self.remoteTwoPos: self.mnTwoTxHash
        }
        for k in collaterals:
            for i in range(self.num_nodes):
                # skip check on disconnected remote node
                if i == k:
                    continue
                try:
                    if removed:
                        wait_until(lambda: (self.get_mn_status(self.nodes[i], collaterals[k]) == "" or
                                            self.get_mn_status(self.nodes[i], collaterals[k]) == "REMOVE"),
                                   timeout=_timeout, mocktime=self.advance_mocktime)
                    else:
                        wait_until(lambda: self.get_mn_status(self.nodes[i], collaterals[k]) == "EXPIRED",
                                   timeout=_timeout, mocktime=self.advance_mocktime)
                except AssertionError:
                    s = "EXPIRED" if not removed else "REMOVE"
                    strErr = "Unable to get status \"%s\" on node %d for mnode %s" % (s, i, collaterals[k])
                    raise AssertionError(strErr)


    def run_test(self):
        self.enable_mocktime()
        self.setup_2_masternodes_network()

        # check masternode expiration
        self.log.info("testing expiration now.")
        expiration_time = 180  # regtest expiration time
        self.log.info("disconnect remote and move time %d seconds in the future..." % expiration_time)
        self.disconnect_remotes()
        self.advance_mocktime_and_stake(expiration_time)
        self.wait_until_mn_expired(30)
        self.log.info("masternodes expired successfully")

        # check masternode removal
        self.log.info("testing removal now.")
        removal_time = 200  # regtest removal time
        self.advance_mocktime_and_stake(removal_time - expiration_time)
        self.wait_until_mn_expired(30, removed=True)
        self.log.info("masternodes removed successfully")

        # restart and check spending the collateral now.
        self.reconnect_and_restart_masternodes()
        self.advance_mocktime(30)
        self.log.info("spending the collateral now..")
        self.spend_collateral()
        sync_blocks(self.nodes)
        self.log.info("checking mn status..")
        time.sleep(3)           # wait a little bit
        self.wait_until_mn_vinspent(self.mnOneTxHash, 30, [self.remoteTwo])
        self.log.info("masternode list updated successfully, vin spent")




if __name__ == '__main__':
    MasternodeActivationTest().main()