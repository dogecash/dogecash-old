// Copyright (c) 2016 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_WALLET_TEST_FIXTURE_H
#define BITCOIN_WALLET_TEST_FIXTURE_H

#include "test/librust/sapling_test_fixture.h"

/** Testing setup and teardown for wallet.
 */
struct WalletTestingSetup : public SaplingTestingSetup {
    WalletTestingSetup();
    ~WalletTestingSetup();
};

#endif

