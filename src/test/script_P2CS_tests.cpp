// Copyright (c) 2020 The PIVX developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.
#include "test/test_pivx.h"

#include "base58.h"
#include "key.h"

#include <boost/test/unit_test.hpp>

BOOST_FIXTURE_TEST_SUITE(script_P2CS_tests, BasicTestingSetup)

void CheckValidKeyId(const CTxDestination& dest, const CKeyID& expectedKey)
{
    const CKeyID* keyid = boost::get<CKeyID>(&dest);
    if (keyid) {
        BOOST_CHECK(keyid);
        BOOST_CHECK(*keyid == expectedKey);
    } else {
        BOOST_ERROR("Destination is not a CKeyID");
    }
}

// Goal: check cold staking script keys extraction
BOOST_AUTO_TEST_CASE(extract_cold_staking_destination_keys)
{
    CKey ownerKey;
    ownerKey.MakeNewKey(true);
    CKeyID ownerId = ownerKey.GetPubKey().GetID();
    CKey stakerKey;
    stakerKey.MakeNewKey(true);
    CKeyID stakerId = stakerKey.GetPubKey().GetID();
    CScript script = GetScriptForStakeDelegation(stakerId, ownerId);

    // Check owner
    CTxDestination ownerDest;
    BOOST_CHECK(ExtractDestination(script, ownerDest, false));
    CheckValidKeyId(ownerDest, ownerId);

    // Check staker
    CTxDestination stakerDest;
    BOOST_CHECK(ExtractDestination(script, stakerDest, true));
    CheckValidKeyId(stakerDest, stakerId);

    // Now go with ExtractDestinations.
    txnouttype type;
    int nRequiredRet = -1;
    std::vector<CTxDestination> destVector;
    BOOST_CHECK(ExtractDestinations(script, type, destVector, nRequiredRet));
    BOOST_CHECK(type == TX_COLDSTAKE);
    BOOST_CHECK(nRequiredRet == 2);
    BOOST_CHECK(destVector.size() == 2);
    CheckValidKeyId(destVector[0], stakerId);
    CheckValidKeyId(destVector[1], ownerId);
}

BOOST_AUTO_TEST_SUITE_END()
