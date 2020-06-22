// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2014 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2018 The PIVX developers
// Copyright (c) 2018-2019 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "libzerocoin/Params.h"
#include "chainparams.h"
#include "consensus/merkle.h"
#include "random.h"
#include "util.h"
#include "utilstrencodings.h"
#include "stdio.h"
#include <iostream>
#include "libzerocoin/bignum.h"
#include <assert.h>

#include <limits>
#include <boost/assign/list_of.hpp>

using namespace std;
using namespace boost::assign;

struct SeedSpec6 {
    uint8_t addr[16];
    uint16_t port;
};

#include "chainparamsseeds.h"

/**
 * Main network
 */

//! Convert the pnSeeds6 array into usable address objects.
static void convertSeed6(std::vector<CAddress>& vSeedsOut, const SeedSpec6* data, unsigned int count)
{
    // It'll only connect to one or two seed nodes because once it connects,
    // it'll get a pile of addresses with newer timestamps.
    // Seed nodes are given a random 'last seen time' of between one and two
    // weeks ago.
    const int64_t nOneWeek = 7 * 24 * 60 * 60;
    for (unsigned int i = 0; i < count; i++) {
        struct in6_addr ip;
        memcpy(&ip, data[i].addr, sizeof(ip));
        CAddress addr(CService(ip, data[i].port));
        addr.nTime = GetTime() - GetRand(nOneWeek) - nOneWeek;
        vSeedsOut.push_back(addr);
    }
}

//   What makes a good checkpoint block?
// + Is surrounded by blocks with reasonable timestamps
//   (no blocks before with a timestamp after, none after with
//    timestamp before)
// + Contains no strange transactions
static Checkpoints::MapCheckpoints mapCheckpoints = 
boost::assign::map_list_of
(0,uint256("0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd"))
(10000,uint256("ac81af6de342c16de0b4cc25a0e6f3cf809eb78281d9436778cfd24cbd5fd13c"))
(20000,uint256("60c40b879f9706086fd4dd4dd319aa01d013544b3c067b6d121dc0e38d422717"))
(30000,uint256("5743b924d3e9261723fc19d3190b2ae609bb3aac0ee9704508c2505418cc711a"))
(40000,uint256("6eab55484ade0cc92873623ecdf8cf9170aea4b0d917d772bce24f1c679fab4a"))
(50000,uint256("f53cb8d1e9bc91b557fe9a0eb9f97c0368623de1016593880e2b2b955bda6b3a"))
(80000,uint256("6cf1ec04cdef31344bf8f21156de2b770326afdb049d3fc525b41af658a0c42f"))
(100000,uint256("77bd1cabf80229bb7e5c4e59cb51e8b7a72d3ec5c93e083682e55df76d25ca20"))
(120000,uint256("64ec817c98d70951cd1962079d5d340f25f5ba5de8b76de04133840e434bb806"))
(140000,uint256("31f0701ac4747287f94d7e08beb2d86bffd46ae225e40e0e9189338f38b93b1d"))
(150000,uint256("ae49cc17b7eb7c2974eb75203ee3c77ca68f241f7bdc6730fe4701f47e10339a"))
(160000,uint256("ea6a8e9b2ce3e3cdbbe3772501b3460a0ce091cad32107e7eb789a72ff61f731"))
(170000,uint256("2d466072ef75f7acf11f6af4306d8577b7346d0a0e57b2e099b6aff55494d355"))
(180000,uint256("a28341f962b3cca6ab33879b196d12a5f18e15ea2c208949d180346535269de0"))
(190000,uint256("5495c4528d6d9892bc724a8cf9df0133418c17c163218593c861759f11aae338"))
(200000,uint256("006184858a3bdebf55fc2e50933aa7f52b1e6b063be1d8afde1543ca30de5ff8"))
(210000,uint256("c189cc15bf90899ddc25990d9ce82a22b9dd30938307101a36289d53add58918"))
(220000,uint256("4bd6999b5feefeb255bac4e6651f99d961b422e942af963f1d2575b2f89d3336"))
(230000,uint256("c063c978716d6d0d8ca56708dcac28e323bc503c50a16f4b95aca9f0e21f3409"))
(240000,uint256("57c0e1a7168fca9e032a8d129fcaa7996cd216d4124b054d261b23c4a4f778db"))
(250000,uint256("9e82fc0e7498d76d6fbfe515312f9a378f349635f772688b81f7859e74685561"))
(270000,uint256("cb2737887b9d0f11fd01c124c7a34feff9d449a0913caadce43b334730623d79"))
(260000,uint256("365125f6a678f30fbacd077624fdaef572d032209a50cefa0c1fc91041a86283"))
(280000,uint256("6197c6d354a016309ac154174fe6d39cb0f52847a80953e4e09cff700549400a"))
(290000,uint256("1ab6ec19e478e7de7c14493ff3d11a0f3119417fc257141f644683279b5ed6f4"))
(300000,uint256("3daa4a3c0de0c207a8a2c9e6b26739d84ea69ca0aa45a2da1c0e429c80387268"))
(310000,uint256("4fdfdd03a3c7f5426337b516c5a56760d3b6a750281f275ce5d1a183fa2ad7b0"))
(320000,uint256("9f9a5c11067a9fc1a859e9f27ad3bf31e9a36904656b4c7088ef92d2ed37e1ef"))
(330000,uint256("9c5be3b995e6c22bdc3b2b99f543fe2e8dc4948131c447dfc2723ea8c76f1dfc"))
(340000,uint256("5ffd44994a771d40ad23459e424ede1dd7fbc17b95c5c9d95ced5f26d8e6d823"))
(350000,uint256("b655f7fda3ede41707b5904eeec5380b2c8c693fd5956879b29ebdca141dbb49"))
(360000,uint256("9235801f18365e0763b416f2ce545f549d469779eb9a8d09c202bc75c355cb5b"))
(370000,uint256("cee1d759bcba7cef98e3986a24070118d5f76a7716dbc7da52d0c2b846df4721"))
(380000,uint256("0376178f6e903e052e074ca9d5ea8f3f5e596fe1560c907f4149fa7a8a44ff68"))
(390000,uint256("381a36dfaecef98e92954c28516ee4125981ae50f679f70496e7b1c1bc7c0978"))
(400000,uint256("8fbb45882855e92cf566660e0d19ce2839471746a8dc7adf3635a3beab16b2f6"))
(410000,uint256("411062e905ff43aa206f39190d56b80ab185249ddd5c84476299ee46d17b1efa"))
(420000,uint256("f28783187740f000444bcfe25a735134c33db8151e2beb3d71fe885ad2eb6479"))
(430000,uint256("6010a6ff83d3445d770958928e58a3002433664c3d80530e775d8b8a38f03f56"))
(440000,uint256("9f6c767a680b867e2c7a23bfc94a055151578fc358f7a2577793e9c4410c54bb"))
(450000,uint256("2be93df511f570b29e1f221029a71860f8ae3b9d8797ca42902d3a6f8dd4af4b"))
(460000,uint256("1b17ce2b106bbe0a5abad3e2ab23a44b2d5c974fbdae1a408926730110b60301"))
(470000,uint256("b86b52483089e932ecd0bf8fddd2c88a1966de7156425293131bf63f8b22f09e"))
(480000,uint256("035be7137990635bf6d6f3d423e0dd1c56c1f4bcad2f112a903c04dfe03074fe"))
(487000,uint256("aa731180ad024c84d127fa424e28f8c64f6af16a01e1a48558b225f8a51e1da2"));
static const Checkpoints::CCheckpointData data = {
&mapCheckpoints,
1587796767,// * UNIX timestamp of last checkpoint block
1027987,    // * total number of transactions between genesis and last checkpoint
              //   (the tx=... number in the SetBestChain debug.log lines)
2000       // * estimated number of transactions per day after checkpoint
};
static Checkpoints::MapCheckpoints mapCheckpointsTestnet =
    boost::assign::map_list_of
    (0, uint256("0x41577c87741784ac470def77dac139b0cf08a3b65d2955273f3cbc0cb17f49c0"));
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1588158840,
    0,
    250};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest =
    boost::assign::map_list_of(0, uint256("0x0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd"));
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1558130910,
    0,
    100};

libzerocoin::ZerocoinParams* CChainParams::Zerocoin_Params(bool useModulusV1) const
{
    assert(this);
    static CBigNum bnHexModulus = 0;
    if (!bnHexModulus)
        bnHexModulus.SetHex(zerocoinModulus);
    static libzerocoin::ZerocoinParams ZCParamsHex = libzerocoin::ZerocoinParams(bnHexModulus);
    static CBigNum bnDecModulus = 0;
    if (!bnDecModulus)
        bnDecModulus.SetDec(zerocoinModulus);
    static libzerocoin::ZerocoinParams ZCParamsDec = libzerocoin::ZerocoinParams(bnDecModulus);

    if (useModulusV1)
        return &ZCParamsHex;

    return &ZCParamsDec;
}

bool CChainParams::HasStakeMinAgeOrDepth(const int contextHeight, const uint32_t contextTime, const int utxoFromBlockHeight, const uint32_t utxoFromBlockTime) const
{
    // before stake modifier V2, the age required was 60 * 60 (1 hour). Not required for regtest
    if (!IsStakeModifierV2(contextHeight))
        return NetworkID() == CBaseChainParams::REGTEST || (utxoFromBlockTime + nStakeMinAge <= contextTime);

    // after stake modifier V2, we require the utxo to be nStakeMinDepth deep in the chain
    return(contextHeight - utxoFromBlockHeight >= nStakeMinDepth);
}

int CChainParams::FutureBlockTimeDrift(const int nHeight) const
{
    if (IsTimeProtocolV2(nHeight))
        // PoS (TimeV2): 14 seconds
        return TimeSlotLength() - 1;

    // PoS (TimeV1): 3 minutes
    // PoW: 2 hours
    return (nHeight > LAST_POW_BLOCK()) ? nFutureTimeDriftPoS : nFutureTimeDriftPoW;
}

bool CChainParams::IsValidBlockTimeStamp(const int64_t nTime, const int nHeight) const
{
    // Before time protocol V2, blocks can have arbitrary timestamps
    if (!IsTimeProtocolV2(nHeight))
        return true;

    // Time protocol v2 requires time in slots
    return (nTime % TimeSlotLength()) == 0;
}

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        networkID = CBaseChainParams::MAIN;
	//vTreasuryRewardAddress="DKv8dUifgBKkWM1nwjad7yNasQ41yA9ntR";
        strNetworkID = "main";
        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0xa0;
        pchMessageStart[1] = 0x43;
        pchMessageStart[2] = 0x16;
        pchMessageStart[3] = 0x19;
        vAlertPubKey = ParseHex("04e70ca66d0bc8bd6c105952488fcdbd9f809d459af257646e35c5ec36f5e03158c916442aaa9592e63eeca8afa9660e505b160ee599c8efcc0a5f111058ba8c74");
        nDefaultPort = 56740;
        bnProofOfWorkLimit = ~uint256(0) >> 20; // dogecash starting difficulty is 1 / 2^12
        bnProofOfStakeLimit = ~uint256(0) >> 24;
        bnProofOfStakeLimit_V2 = ~uint256(0) >> 20; // 60/4 = 15 ==> use 2**4 higher limit
        nSubsidyHalvingInterval = 210000;
        nMaxReorganizationDepth = 100;
        nEnforceBlockUpgradeMajority = 8100; // 75%
        nRejectBlockOutdatedMajority = 10260; // 95%
        nToCheckBlockUpgradeMajority = 10800; // Approximate expected amount of blocks in 7 days (1440*7.5)
        nMinerThreads = 0;
        nTargetSpacing = 1 * 60;                        // 1 minute
        nTargetTimespan = 40 * 60;                      // 40 minutes
        nTimeSlotLength = 15;                           // 15 seconds
        nTargetTimespan_V2 = 2 * nTimeSlotLength * 60;  // 30 minutes
        nMaturity = 100;
        nStakeMinAge = 60 * 60;                         // 1 hour
        nStakeMinDepth = 100;
        nFutureTimeDriftPoW = 7200;
        nFutureTimeDriftPoS = 180;
        nMaturity = 30;
        nMasternodeCountDrift = 20;
        nMasternodeCollateralLimit = 5000; //MN collateral
        nStakeCollateralMin = 100 * COIN;
        nMaxMoneyOut = 21000000 * COIN; //21 mill
        nMinColdStakingAmount = 1 * COIN;
        nTimeSlotLength = 15;           // 15 seconds

        /** Height or Time Based Activations **/
        nLastPOWBlock = 200;
        nZerocoinStartHeight = INT_MAX;
        nZerocoinStartTime = INT_MAX; // October 17, 2017 4:30:00 AM
        nBlockEnforceSerialRange = 100; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = INT_MAX; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = INT_MAX; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = INT_MAX; //Last valid accumulator checkpoint
        nBlockEnforceInvalidUTXO = 902850; //Start enforcing the invalid UTXO's
        //nInvalidAmountFiltered = 268200*COIN; //Amount of invalid coins filtered through exchanges, that should be considered valid
        nBlockZerocoinV2 = INT_MAX; //!> The block that zerocoin v2 becomes active - roughly Tuesday, May 8, 2018 4:00:00 AM GMT
        nBlockDoubleAccumulated = 1050010;
        nEnforceNewSporkKey = 1566860400; //!> Sporks signed after Monday, August 26, 2019 11:00:00 PM GMT must use the new spork key
        nRejectOldSporkKey = 1569538800; //!> Fully reject old spork key after Thursday, September 26, 2019 11:00:00 PM GMT
        nBlockStakeModifierlV2 = 1967000;
        nBIP65ActivationHeight = 1808634;
        nBlockTimeProtocolV2 = 299700;

        // New P2P messages signatures
        nBlockEnforceNewMessageSignatures = nBlockStakeModifierlV2 + 10;

        // New P2P messages signatures

        // Fake Serial Attack
        nFakeSerialBlockheightEnd = 1686229;
        /**
         * Build the genesis block. Note that the output of the genesis coinbase cannot
         * be spent as it did not originally exist in the database.
         *
         * CBlock(hash=00000ffd590b14, ver=1, hashPrevBlock=00000000000000, hashMerkleRoot=e0028e, nTime=1390095618, nBits=1e0ffff0, nNonce=28917698, vtx=1)
         *   CTransaction(hash=e0028e, ver=1, vin.size=1, vout.size=1, nLockTime=0)
         *     CTxIn(COutPoint(000000, -1), coinbase 04ffff001d01044c5957697265642030392f4a616e2f3230313420546865204772616e64204578706572696d656e7420476f6573204c6976653a204f76657273746f636b2e636f6d204973204e6f7720416363657074696e6720426974636f696e73)
         *     CTxOut(nValue=50.00000000, scriptPubKey=0xA9037BAC7050C479B121CF)
         *   vMerkleTree: e0028e
         */
        const char* pszTimestamp = "DogeCash Repowered Launch - akshaynexus - Liquid369";
        CMutableTransaction txNew;
        txNew.vin.resize(1);
        txNew.vout.resize(1);
        txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
        txNew.vout[0].nValue = 0 * COIN;
        txNew.vout[0].scriptPubKey = CScript() << ParseHex("047a7df379bd5e6b93b164968c10fcbb141ecb3c6dc1a5e181c2a62328405cf82311dd5b40bf45430320a4f30add05c8e3e16dd56c52d65f7abe475189564bf2b1") << OP_CHECKSIG; 
        genesis.vtx.push_back(txNew);
        genesis.hashPrevBlock = 0;
        genesis.hashMerkleRoot = BlockMerkleRoot(genesis);
        genesis.nVersion = 1;
        genesis.nTime = 1558130910;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 5510938;
        hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd"));
        assert(genesis.hashMerkleRoot == uint256("0x7c3f1b5874e38c421d07fc20ce79ddb3bbaad19cdbad903a0b185070d6005b8c"));

	    vFixedSeeds.clear();
        vSeeds.clear();
	    vSeeds.push_back(CDNSSeedData("seeds.dogec.io", "seeds.dogec.io")); //Primary DNS Seeder test
        vSeeds.push_back(CDNSSeedData("x9.seeds.dogec.io", "x9.seeds.dogec.io")); // Single node address


    	base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 30);
	    base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 19);
	    base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 122);
	    base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x02)(0x2D)(0x25)(0x33).convert_to_container<std::vector<unsigned char> >();
	    base58Prefixes[EXT_SECRET_KEY] = list_of(0x02)(0x21)(0x31)(0x2B).convert_to_container<std::vector<unsigned char> >();
        base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 63);     // starting with 'S'

        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        nExtCoinType = 385;

        convertSeed6(vFixedSeeds, pnSeed6_main, ARRAYLEN(pnSeed6_main));

        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fSkipProofOfWorkCheck = true;
        fTestnetToBeDeprecatedFieldRPC = false;
        fHeadersFirstSyncingActive = false;

        nPoolMaxTransactions = 3;
        nBudgetCycleBlocks = 43200; //!< Amount of blocks in a months period of time (using 1 minutes per) = (60*24*30)
        strSporkPubKey = "047a7df379bd5e6b93b164968c10fcbb141ecb3c6dc1a5e181c2a62328405cf82311dd5b40bf45430320a4f30add05c8e3e16dd56c52d65f7abe475189564bf2b1";
        strObfuscationPoolDummyAddress = "DKv8dUifgBKkWM1nwjad7yNasQ41yA9ntR";
        nStartMasternodePayments = 1403728576; //Wed, 25 Jun 2014 20:36:16 GMT

        /** Zerocoin */
        zerocoinModulus = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
            "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
            "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
            "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
            "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
            "31438167899885040445364023527381951378636564391212010397122822120720357";
        nMaxZerocoinSpendsPerTransaction = 7; // Assume about 20kb each
        nMinZerocoinMintFee = 1 * CENT; //high fee required for zerocoin mints
        nMintRequiredConfirmations = 20; //the maximum amount of confirmations until accumulated in 19
        nRequiredAccumulation = 1;
        nDefaultSecurityLevel = 100; //full security level for accumulators
        nZerocoinHeaderVersion = INT_MAX; //Block headers must be this version once zerocoin is active
        nZerocoinRequiredStakeDepth = 200; //The required confirmations for a zdogec to be stakable

        nBudget_Fee_Confirmations = 6; // Number of confirmations for the finalization fee
        nProposalEstablishmentTime = 60 * 60 * 24; // Proposals must be at least a day old to make it into a budget
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }
};
static CMainParams mainParams;

/**
 * Testnet (v3)
 */
class CTestNetParams : public CMainParams
{
public:
    CTestNetParams()
    {
        networkID = CBaseChainParams::TESTNET;
        strNetworkID = "test";
        pchMessageStart[0] = 0x90;
        pchMessageStart[1] = 0x43;
        pchMessageStart[2] = 0x16;
        pchMessageStart[3] = 0x19;
        vAlertPubKey = ParseHex("047a7df379bd5e6b93b164968c10fcbb141ecb3c6dc1a5e181c2a62328405cf82311dd5b40bf45430320a4f30add05c8e3e16dd56c52d65f7abe475189564bf2b1");
        nDefaultPort = 41001;
        nEnforceBlockUpgradeMajority = 4320; // 75%
        nRejectBlockOutdatedMajority = 5472; // 95%
        nToCheckBlockUpgradeMajority = 5760; // 4 days
        nMinerThreads = 0;
        nLastPOWBlock = 200;
        nPivxBadBlockTime = 1489001494; // Skip nBit validation of Block 259201 per PR #915
        nPivxBadBlocknBits = 0x1e0a20bd; // Skip nBit validation of Block 201 per PR #915
        nMaturity = 15;
        nStakeMinDepth = 50;
        nMasternodeCountDrift = 4;
        nStakeCollateralMin = 10;
        nModifierUpdateBlock = 125; 
        nMaxMoneyOut = 21000000 * COIN;
        nZerocoinStartHeight = INT_MAX;
        nZerocoinStartTime = INT_MAX;
        nBlockEnforceSerialRange = INT_MAX; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = INT_MAX; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = INT_MAX; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = INT_MAX; //Last valid accumulator checkpoint
        nBlockEnforceInvalidUTXO = INT_MAX; //Start enforcing the invalid UTXO's
        nInvalidAmountFiltered = 0; //Amount of invalid coins filtered through exchanges, that should be considered valid
        nBlockZerocoinV2 = INT_MAX; //!> The block that zerocoin v2 becomes active
        nEnforceNewSporkKey = 1521604800; //!> Sporks signed after Wednesday, March 21, 2018 4:00:00 AM GMT must use the new spork key
        nRejectOldSporkKey = 1522454400; //!> Reject old spork key after Saturday, March 31, 2018 12:00:00 AM GMT
        nBlockStakeModifierlV2 = 1214000;
        nBlockTimeProtocolV2 = 2214000;
        nBIP65ActivationHeight = 851019;

        // New P2P messages signatures
        nBlockEnforceNewMessageSignatures = 1;

        // Fake Serial Attack
        nFakeSerialBlockheightEnd = -1;
        nSupplyBeforeFakeSerial = 0;

        //! Modify the testnet genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1588158840;
        genesis.nBits = 0x1e0ffff0;
        genesis.nNonce = 1145254;

	    hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x41577c87741784ac470def77dac139b0cf08a3b65d2955273f3cbc0cb17f49c0"));
        assert(genesis.hashMerkleRoot == uint256("0x7c3f1b5874e38c421d07fc20ce79ddb3bbaad19cdbad903a0b185070d6005b8c"));

        vFixedSeeds.clear();
        vSeeds.clear();
        //vSeeds.push_back(CDNSSeedData("80.240.21.159", "80.240.21.159"));         // Single node address
        //vSeeds.push_back(CDNSSeedData("96.30.194.130", "96.30.194.130"));       // Single node address
        //vSeeds.push_back(CDNSSeedData("45.77.251.179", "45.77.251.179"));
	base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 30);
	base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 19);
	base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 122);
    base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 73);     // starting with 'W'
	base58Prefixes[EXT_PUBLIC_KEY] = list_of(0x02)(0x2D)(0x25)(0x33).convert_to_container<std::vector<unsigned char> >();
	base58Prefixes[EXT_SECRET_KEY] = list_of(0x02)(0x21)(0x31)(0x2B).convert_to_container<std::vector<unsigned char> >();
        // 	BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        nExtCoinType = 1;
	//convertSeed6(vFixedSeeds, pnSeed6_test, ARRAYLEN(pnSeed6_test));

        fMiningRequiresPeers = true;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = false;
        fRequireStandard = true;
        fMineBlocksOnDemand = false;
        fTestnetToBeDeprecatedFieldRPC = true;

        nPoolMaxTransactions = 2;
        nBudgetCycleBlocks = 144; //!< Ten cycles per day on testnet
	strSporkPubKey = "04fc640bba80713c0666acda4d3ffce670307a55f90b703995c830a1e9110b07244508724b7106395f8336c78d3691ae5ba05abe3840f3a7e18d6b95acdd0de71d";
        strObfuscationPoolDummyAddress = "xp87cG8UEQgzs1Bk67Yk884C7pnQfAeo7q";
        nStartMasternodePayments = 1520837558; //Fri, 09 Jan 2015 21:05:58 GMT
        nBudget_Fee_Confirmations = 3; // Number of confirmations for the finalization fee. We have to make this very short
                                       // here because we only have a 8 block finalization window on testnet

        nProposalEstablishmentTime = 60 * 5; // Proposals must be at least 5 mns old to make it into a test budget
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};
static CTestNetParams testNetParams;

/**
 * Regression test
 */
class CRegTestParams : public CTestNetParams
{
public:
    CRegTestParams()
    {
        networkID = CBaseChainParams::REGTEST;
        strNetworkID = "regtest";
        pchMessageStart[0] = 0x10;
        pchMessageStart[1] = 0x43;
        pchMessageStart[2] = 0x16;
        pchMessageStart[3] = 0x19;
        nDefaultPort = 51436;
        nSubsidyHalvingInterval = 150;
        nEnforceBlockUpgradeMajority = 750;
        nRejectBlockOutdatedMajority = 950;
        nToCheckBlockUpgradeMajority = 1000;
        nMinerThreads = 1;
        nTargetSpacing = 1 * 60;        // dogecash: 1 minutes
        bnProofOfWorkLimit = ~uint256(0) >> 1;
        nLastPOWBlock = 250;
        nMaturity = 100;
        nStakeMinAge = 0;
        nStakeMinDepth = 0;
        nTimeSlotLength = 1;            // time not masked on RegNet
        nMasternodeCountDrift = 4;
        nModifierUpdateBlock = 0;       //approx Mon, 17 Apr 2017 04:00:00 GMT
        nMaxMoneyOut = 21000000 * COIN;
        nZerocoinStartHeight = INT_MAX;
        nStakeCollateralMin = 0;
        nBlockZerocoinV2 = 300;
        nZerocoinStartTime = INT_MAX;
        nBlockEnforceSerialRange = 1; //Enforce serial range starting this block
        nBlockRecalculateAccumulators = 999999999; //Trigger a recalculation of accumulators
        nBlockFirstFraudulent = 999999999; //First block that bad serials emerged
        nBlockLastGoodCheckpoint = 999999999; //Last valid accumulator checkpoint
        nBlockStakeModifierlV2 = 255;
        nBlockTimeProtocolV2 = 999999999;

        // New P2P messages signatures
        nBlockEnforceNewMessageSignatures = 1;

        // Fake Serial Attack
        nFakeSerialBlockheightEnd = -1;

        //! Modify the regtest genesis block so the timestamp is valid for a later start.
        genesis.nTime = 1558130910; 
        genesis.nBits = 0x1e0ffff0;
      	genesis.nNonce = 5510938;


	hashGenesisBlock = genesis.GetHash();
        assert(hashGenesisBlock == uint256("0x0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd"));
        assert(genesis.hashMerkleRoot == uint256("0x7c3f1b5874e38c421d07fc20ce79ddb3bbaad19cdbad903a0b185070d6005b8c"));

        vFixedSeeds.clear(); //! Testnet mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Testnet mode doesn't have any DNS seeds.
        fMiningRequiresPeers = false;
        fAllowMinDifficultyBlocks = true;
        fDefaultConsistencyChecks = true;
        fRequireStandard = false;
        fMineBlocksOnDemand = true;
        fSkipProofOfWorkCheck = true;
        fTestnetToBeDeprecatedFieldRPC = false;
    }
    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};
static CRegTestParams regTestParams;

/**
 * Unit test
 */
class CUnitTestParams : public CMainParams, public CModifiableParams
{
public:
    CUnitTestParams()
    {
        networkID = CBaseChainParams::UNITTEST;
        strNetworkID = "unittest";
        nDefaultPort = 51478;
        vFixedSeeds.clear(); //! Unit test mode doesn't have any fixed seeds.
        vSeeds.clear();      //! Unit test mode doesn't have any DNS seeds.

        fMiningRequiresPeers = false;
        fDefaultConsistencyChecks = true;
        fAllowMinDifficultyBlocks = false;
        fMineBlocksOnDemand = true;
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        // UnitTest share the same checkpoints as MAIN
        return data;
    }

    //! Published setters to allow changing values in unit test cases
    virtual void setSubsidyHalvingInterval(int anSubsidyHalvingInterval) { nSubsidyHalvingInterval = anSubsidyHalvingInterval; }
    virtual void setEnforceBlockUpgradeMajority(int anEnforceBlockUpgradeMajority) { nEnforceBlockUpgradeMajority = anEnforceBlockUpgradeMajority; }
    virtual void setRejectBlockOutdatedMajority(int anRejectBlockOutdatedMajority) { nRejectBlockOutdatedMajority = anRejectBlockOutdatedMajority; }
    virtual void setToCheckBlockUpgradeMajority(int anToCheckBlockUpgradeMajority) { nToCheckBlockUpgradeMajority = anToCheckBlockUpgradeMajority; }
    virtual void setDefaultConsistencyChecks(bool afDefaultConsistencyChecks) { fDefaultConsistencyChecks = afDefaultConsistencyChecks; }
    virtual void setAllowMinDifficultyBlocks(bool afAllowMinDifficultyBlocks) { fAllowMinDifficultyBlocks = afAllowMinDifficultyBlocks; }
    virtual void setSkipProofOfWorkCheck(bool afSkipProofOfWorkCheck) { fSkipProofOfWorkCheck = afSkipProofOfWorkCheck; }
};
static CUnitTestParams unitTestParams;


static CChainParams* pCurrentParams = 0;

CModifiableParams* ModifiableParams()
{
    assert(pCurrentParams);
    assert(pCurrentParams == &unitTestParams);
    return (CModifiableParams*)&unitTestParams;
}

const CChainParams& Params()
{
    assert(pCurrentParams);
    return *pCurrentParams;
}

CChainParams& Params(CBaseChainParams::Network network)
{
    switch (network) {
    case CBaseChainParams::MAIN:
        return mainParams;
    case CBaseChainParams::TESTNET:
        return testNetParams;
    case CBaseChainParams::REGTEST:
        return regTestParams;
    case CBaseChainParams::UNITTEST:
        return unitTestParams;
    default:
        assert(false && "Unimplemented network");
        return mainParams;
    }
}

void SelectParams(CBaseChainParams::Network network)
{
    SelectBaseParams(network);
    pCurrentParams = &Params(network);
}

bool SelectParamsFromCommandLine()
{
    CBaseChainParams::Network network = NetworkIdFromCommandLine();
    if (network == CBaseChainParams::MAX_NETWORK_TYPES)
        return false;

    SelectParams(network);
    return true;
}
