// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#include "test/librust/sapling_test_fixture.h"
#include "sapling/sapling_util.h"

SaplingTestingSetup::SaplingTestingSetup() : TestingSetup()
{
    initZKSNARKS(); // init zk-snarks lib
}

SaplingTestingSetup::~SaplingTestingSetup()
{
}
