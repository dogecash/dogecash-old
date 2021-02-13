// Copyright (c) 2010 Satoshi Nakamoto
// Copyright (c) 2009-2015 The Bitcoin developers
// Copyright (c) 2014-2015 The Dash developers
// Copyright (c) 2015-2020 The PIVX developers
// Copyright (c) 2018-2021 The DogeCash developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include "chainparams.h"

#include "chainparamsseeds.h"
#include "consensus/merkle.h"
#include "tinyformat.h"
#include "utilstrencodings.h"

#include <assert.h>

static CBlock CreateGenesisBlock(const char* pszTimestamp, const CScript& genesisOutputScript, uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    CMutableTransaction txNew;
    txNew.nVersion = 1;
    txNew.vin.resize(1);
    txNew.vout.resize(1);
    txNew.vin[0].scriptSig = CScript() << 486604799 << CScriptNum(4) << std::vector<unsigned char>((const unsigned char*)pszTimestamp, (const unsigned char*)pszTimestamp + strlen(pszTimestamp));
    txNew.vout[0].nValue = genesisReward;
    txNew.vout[0].scriptPubKey = genesisOutputScript;

    CBlock genesis;
    genesis.vtx.push_back(std::make_shared<const CTransaction>(std::move(txNew)));
    genesis.hashPrevBlock.SetNull();
    genesis.nVersion = nVersion;
    genesis.nTime    = nTime;
    genesis.nBits    = nBits;
    genesis.nNonce   = nNonce;
    genesis.hashMerkleRoot = BlockMerkleRoot(genesis);
    return genesis;
}

void CChainParams::UpdateNetworkUpgradeParameters(Consensus::UpgradeIndex idx, int nActivationHeight)
{
    assert(IsRegTestNet()); // only available for regtest
    assert(idx > Consensus::BASE_NETWORK && idx < Consensus::MAX_NETWORK_UPGRADES);
    consensus.vUpgrades[idx].nActivationHeight = nActivationHeight;
}

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
static CBlock CreateGenesisBlock(uint32_t nTime, uint32_t nNonce, uint32_t nBits, int32_t nVersion, const CAmount& genesisReward)
{
    const char* pszTimestamp = "DogeCash Repowered Launch - akshaynexus - Liquid369";
    const CScript genesisOutputScript = CScript() << ParseHex("047a7df379bd5e6b93b164968c10fcbb141ecb3c6dc1a5e181c2a62328405cf82311dd5b40bf45430320a4f30add05c8e3e16dd56c52d65f7abe475189564bf2b1") << OP_CHECKSIG;
    return CreateGenesisBlock(pszTimestamp, genesisOutputScript, nTime, nNonce, nBits, nVersion, genesisReward);
}

/**
 * Main network
 */
/**
 * What makes a good checkpoint block?
 * + Is surrounded by blocks with reasonable timestamps
 *   (no blocks before with a timestamp after, none after with
 *    timestamp before)
 * + Contains no strange transactions
 */
static Checkpoints::MapCheckpoints mapCheckpoints = {
{ 0,uint256S("0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd")},
{ 10000,uint256S("ac81af6de342c16de0b4cc25a0e6f3cf809eb78281d9436778cfd24cbd5fd13c")},
{ 20000,uint256S("60c40b879f9706086fd4dd4dd319aa01d013544b3c067b6d121dc0e38d422717")},
{ 30000,uint256S("5743b924d3e9261723fc19d3190b2ae609bb3aac0ee9704508c2505418cc711a")},
{ 40000,uint256S("6eab55484ade0cc92873623ecdf8cf9170aea4b0d917d772bce24f1c679fab4a")},
{ 50000,uint256S("f53cb8d1e9bc91b557fe9a0eb9f97c0368623de1016593880e2b2b955bda6b3a")},
{ 80000,uint256S("6cf1ec04cdef31344bf8f21156de2b770326afdb049d3fc525b41af658a0c42f")},
{ 100000,uint256S("77bd1cabf80229bb7e5c4e59cb51e8b7a72d3ec5c93e083682e55df76d25ca20")},
{ 120000,uint256S("64ec817c98d70951cd1962079d5d340f25f5ba5de8b76de04133840e434bb806")},
{ 140000,uint256S("31f0701ac4747287f94d7e08beb2d86bffd46ae225e40e0e9189338f38b93b1d")},
{ 150000,uint256S("ae49cc17b7eb7c2974eb75203ee3c77ca68f241f7bdc6730fe4701f47e10339a")},
{ 160000,uint256S("ea6a8e9b2ce3e3cdbbe3772501b3460a0ce091cad32107e7eb789a72ff61f731")},
{ 170000,uint256S("2d466072ef75f7acf11f6af4306d8577b7346d0a0e57b2e099b6aff55494d355")},
{ 180000,uint256S("a28341f962b3cca6ab33879b196d12a5f18e15ea2c208949d180346535269de0")},
{ 190000,uint256S("5495c4528d6d9892bc724a8cf9df0133418c17c163218593c861759f11aae338")},
{ 200000,uint256S("006184858a3bdebf55fc2e50933aa7f52b1e6b063be1d8afde1543ca30de5ff8")},
{ 210000,uint256S("c189cc15bf90899ddc25990d9ce82a22b9dd30938307101a36289d53add58918")},
{ 220000,uint256S("4bd6999b5feefeb255bac4e6651f99d961b422e942af963f1d2575b2f89d3336")},
{ 230000,uint256S("c063c978716d6d0d8ca56708dcac28e323bc503c50a16f4b95aca9f0e21f3409")},
{ 238620,uint256S("4e83603994564be49ef250f0f724e197b2abbaee9ae662b531285003d428ad31")},
{ 238621,uint256S("6b9c0cf87ea802a8f5aa60461bb71934736b2085ca4f0aee9694c2d9c748770f")},
{ 240000,uint256S("57c0e1a7168fca9e032a8d129fcaa7996cd216d4124b054d261b23c4a4f778db")},
{ 250000,uint256S("9e82fc0e7498d76d6fbfe515312f9a378f349635f772688b81f7859e74685561")},
{ 270000,uint256S("cb2737887b9d0f11fd01c124c7a34feff9d449a0913caadce43b334730623d79")},
{ 260000,uint256S("365125f6a678f30fbacd077624fdaef572d032209a50cefa0c1fc91041a86283")},
{ 280000,uint256S("6197c6d354a016309ac154174fe6d39cb0f52847a80953e4e09cff700549400a")},
{ 290000,uint256S("1ab6ec19e478e7de7c14493ff3d11a0f3119417fc257141f644683279b5ed6f4")},
{ 300000,uint256S("3daa4a3c0de0c207a8a2c9e6b26739d84ea69ca0aa45a2da1c0e429c80387268")},
{ 310000,uint256S("4fdfdd03a3c7f5426337b516c5a56760d3b6a750281f275ce5d1a183fa2ad7b0")},
{ 320000,uint256S("9f9a5c11067a9fc1a859e9f27ad3bf31e9a36904656b4c7088ef92d2ed37e1ef")},
{ 330000,uint256S("9c5be3b995e6c22bdc3b2b99f543fe2e8dc4948131c447dfc2723ea8c76f1dfc")},
{ 340000,uint256S("5ffd44994a771d40ad23459e424ede1dd7fbc17b95c5c9d95ced5f26d8e6d823")},
{ 350000,uint256S("b655f7fda3ede41707b5904eeec5380b2c8c693fd5956879b29ebdca141dbb49")},
{ 360000,uint256S("9235801f18365e0763b416f2ce545f549d469779eb9a8d09c202bc75c355cb5b")},
{ 370000,uint256S("cee1d759bcba7cef98e3986a24070118d5f76a7716dbc7da52d0c2b846df4721")},
{ 380000,uint256S("0376178f6e903e052e074ca9d5ea8f3f5e596fe1560c907f4149fa7a8a44ff68")},
{ 390000,uint256S("381a36dfaecef98e92954c28516ee4125981ae50f679f70496e7b1c1bc7c0978")},
{ 400000,uint256S("8fbb45882855e92cf566660e0d19ce2839471746a8dc7adf3635a3beab16b2f6")},
{ 410000,uint256S("411062e905ff43aa206f39190d56b80ab185249ddd5c84476299ee46d17b1efa")},
{ 420000,uint256S("f28783187740f000444bcfe25a735134c33db8151e2beb3d71fe885ad2eb6479")},
{ 430000,uint256S("6010a6ff83d3445d770958928e58a3002433664c3d80530e775d8b8a38f03f56")},
{ 440000,uint256S("9f6c767a680b867e2c7a23bfc94a055151578fc358f7a2577793e9c4410c54bb")},
{ 450000,uint256S("2be93df511f570b29e1f221029a71860f8ae3b9d8797ca42902d3a6f8dd4af4b")},
{ 460000,uint256S("1b17ce2b106bbe0a5abad3e2ab23a44b2d5c974fbdae1a408926730110b60301")},
{ 470000,uint256S("b86b52483089e932ecd0bf8fddd2c88a1966de7156425293131bf63f8b22f09e")},
{ 480000,uint256S("035be7137990635bf6d6f3d423e0dd1c56c1f4bcad2f112a903c04dfe03074fe")},
{ 490000,uint256S("a70946367a65b1fb360406a03be33cb64722ac311107812ee06e9a6f7122688d")},
{ 500000,uint256S("47dc6caac180fdbf900ab4e3dec45e6ba93e1eb9b7596f58b3fdd3fc425a6510")},
{ 510000,uint256S("45afc45bd1765c4e3bcbf97ac7ea6ba7465b9c5bbb1e735e948dcf1d42e39201")},
{ 520000,uint256S("f1ce2eb26e478b06d80b1b320f514017b444a00a1fd822a5697deb4cd0bfd8e8")},
{ 530000,uint256S("3d80df51b71a434b1149b34eb172635ab0e437fed1fed1013c2c89b396f5ac7b")},
{ 540000,uint256S("b225698083f4a077490dbb8ed7d73c6ad3696c7fda820fb81ee289c84a277869")},
{ 550000,uint256S("18fa071492467696ecd34c8f7c95980216e4ee961e452873cb6a824e427f5411")},
{ 560000,uint256S("fbd89a525344ee3829ee22f69125099010ea6f311da246fe602b2a0a66af8844")},
{ 570000,uint256S("74687dbc5671933f53704345a0863d62cbce67c004c69707bd545fced2ef8279")},
};
static const Checkpoints::CCheckpointData data = {
&mapCheckpoints,
1593088525,// * UNIX timestamp of last checkpoint block
1206799,    // * total number of transactions between genesis and last checkpoint
              //   (the tx=... number in the SetBestChain debug.log lines)
2000       // * estimated number of transactions per day after checkpoint
};

static Checkpoints::MapCheckpoints mapCheckpointsTestnet = {
    { 0, uint256S("0x41577c87741784ac470def77dac139b0cf08a3b65d2955273f3cbc0cb17f49c0")},
    };
static const Checkpoints::CCheckpointData dataTestnet = {
    &mapCheckpointsTestnet,
    1588158840,
    0,
    250};

static Checkpoints::MapCheckpoints mapCheckpointsRegtest = {
    { 0, uint256S("0x0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd")},
    };
static const Checkpoints::CCheckpointData dataRegtest = {
    &mapCheckpointsRegtest,
    1558130910,
    0,
    100};

class CMainParams : public CChainParams
{
public:
    CMainParams()
    {
        strNetworkID = "main";

        genesis = CreateGenesisBlock(1558130910, 5510938, 0x1e0ffff0, 1, 0 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x0000093cfce0a5a3cecea522e2c13bdf055d65c559fd2222730ba6f0d18dd2cd"));
        assert(genesis.hashMerkleRoot == uint256S("0x7c3f1b5874e38c421d07fc20ce79ddb3bbaad19cdbad903a0b185070d6005b8c"));

        consensus.fPowAllowMinDifficultyBlocks = false;
        consensus.powLimit   = ~UINT256_ZERO >> 20;   // PIVX starting difficulty is 1 / 2^12
        consensus.posLimitV1 = ~UINT256_ZERO >> 24;
        consensus.posLimitV2 = ~UINT256_ZERO >> 20;
        consensus.nBudgetCycleBlocks = 43200;       // approx. 1 every 30 days
        consensus.nBudgetFeeConfirmations = 6;      // Number of confirmations for the finalization fee
        consensus.nCoinbaseMaturity = 30;
        consensus.nFutureTimeDriftPoW = 7200;
        consensus.nFutureTimeDriftPoS = 180;
        consensus.nMasternodeCountDrift = 20;       // num of MN we allow the see-saw payments to be off by
        consensus.nMaxMoneyOut = 21000000 * COIN;
        consensus.nPoolMaxTransactions = 3;
        consensus.nProposalEstablishmentTime = 60 * 60 * 24;    // must be at least a day old to make it into a budget
        consensus.nStakeMinAge = 60 * 60;
        consensus.nStakeMinDepth = 600;
        consensus.nTargetTimespan = 40 * 60;
        consensus.nTargetTimespanV2 = 30 * 60;
        consensus.nTargetSpacing = 1 * 60;
        consensus.nTimeSlotLength = 15;
        consensus.nMaxProposalPayments = 6;

        // spork keys
        consensus.strSporkPubKey = "04fc640bba80713c0666acda4d3ffce670307a55f90b703995c830a1e9110b07244508724b7106395f8336c78d3691ae5ba05abe3840f3a7e18d6b95acdd0de71d"; //We only have one spork key
        consensus.strSporkPubKeyOld = "04fc640bba80713c0666acda4d3ffce670307a55f90b703995c830a1e9110b07244508724b7106395f8336c78d3691ae5ba05abe3840f3a7e18d6b95acdd0de71d";
        consensus.nTime_EnforceNewSporkKey = 1608512400;    //!> December 21, 2020 01:00:00 AM GMT
        consensus.nTime_RejectOldSporkKey = 1614560400;     //!> March 1, 2021 01:00:00 AM GMT

        // height-based activations
        consensus.height_last_ZC_AccumCheckpoint = INT_MAX;
        consensus.height_last_ZC_WrappedSerials = INT_MAX;
        consensus.height_start_InvalidUTXOsCheck = INT_MAX;
        consensus.height_start_ZC_InvalidSerials = INT_MAX;
        consensus.height_start_ZC_SerialRangeCheck = INT_MAX;
        consensus.height_ZC_RecalcAccumulators = INT_MAX;

        // validation by-pass
        consensus.nPivxBadBlockTime = 1593294062;    // Skip nBit validation of Block 259201 per PR #915
        consensus.nPivxBadBlockBits = 0x1d19b36d;    // Skip nBit validation of Block 259201 per PR #915

        // Zerocoin-related params
        consensus.ZC_Modulus = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
            "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
            "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
            "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
            "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
            "31438167899885040445364023527381951378636564391212010397122822120720357";
        consensus.ZC_MaxPublicSpendsPerTx = 637;    // Assume about 220 bytes each input
        consensus.ZC_MaxSpendsPerTx = 7;            // Assume about 20kb each input
        consensus.ZC_MinMintConfirmations = 20;
        consensus.ZC_MinMintFee = 1 * CENT;
        consensus.ZC_MinStakeDepth = 200;
        consensus.ZC_TimeStart = INT_MAX;        // October 17, 2017 4:30:00 AM

        // Network upgrades
        consensus.vUpgrades[Consensus::BASE_NETWORK].nActivationHeight =
                Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_TESTDUMMY].nActivationHeight =
                Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;
        consensus.vUpgrades[Consensus::UPGRADE_POS].nActivationHeight           = 201;
        consensus.vUpgrades[Consensus::UPGRADE_POS_V2].nActivationHeight        = 615800;
        consensus.vUpgrades[Consensus::UPGRADE_ZC].nActivationHeight            = INT_MAX;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight         = INT_MAX;
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].nActivationHeight         = 1;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].nActivationHeight     = INT_MAX;
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].nActivationHeight          = 261028;
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].nActivationHeight          = 575000;
        consensus.vUpgrades[Consensus::UPGRADE_V5_0].nActivationHeight          = 2700500;

        consensus.vUpgrades[Consensus::UPGRADE_ZC].hashActivationBlock =
                uint256S("0x0");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].hashActivationBlock =
                uint256S("0x0");
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].hashActivationBlock =
                uint256S("0x00000ae6d22cf38ad8bb55538f508bcf84c0ace873e87ef4cc200e366e848412");
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].hashActivationBlock =
                uint256S("0x0");
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].hashActivationBlock =
                uint256S("0xa9d36583a0624e091e225054f56c8f4fd14ac82c4b40aee97ad0a118bbe8f2cf");
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].hashActivationBlock =
                uint256S("0x5f41e0d5725835f4550e626747059b5c233d2a358157418c3488bd1ff86a64fc");

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0xa0;
        pchMessageStart[1] = 0x43;
        pchMessageStart[2] = 0x16;
        pchMessageStart[3] = 0x19;
        nDefaultPort = 56740;

        // Note that of those with the service bits flag, most only support a subset of possible options
        vSeeds.emplace_back("seeds.dogec.io", "seeds.dogec.io", true);     // Primary DNS Seeder from Fuzzbawls
        vSeeds.emplace_back("x9.seeds.dogec.io", "x9.seeds.dogec.io", true);    // Secondary DNS Seeder from Fuzzbawls

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 30);
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 19);
        base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 63);     // starting with 'S'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 122);
        base58Prefixes[EXT_PUBLIC_KEY] = {0x02, 0x2D, 0x25, 0x33};
        base58Prefixes[EXT_SECRET_KEY] = {0x02, 0x21, 0x31, 0x2B};
        // BIP44 coin type is from https://github.com/satoshilabs/slips/blob/master/slip-0044.md
        base58Prefixes[EXT_COIN_TYPE] = {0x80, 0x00, 0x01, 0x81};

        vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_main, pnSeed6_main + ARRAYLEN(pnSeed6_main));

        // Sapling
        bech32HRPs[SAPLING_PAYMENT_ADDRESS]      = "ps";
        bech32HRPs[SAPLING_FULL_VIEWING_KEY]     = "pviews";
        bech32HRPs[SAPLING_INCOMING_VIEWING_KEY] = "pivks";
        bech32HRPs[SAPLING_EXTENDED_SPEND_KEY]   = "p-secret-spending-key-main";
        bech32HRPs[SAPLING_EXTENDED_FVK]         = "pxviews";
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return data;
    }

};

/**
 * Testnet (v5)
 */
class CTestNetParams : public CChainParams
{
public:
    CTestNetParams()
    {
        strNetworkID = "test";

        genesis = CreateGenesisBlock(1454124731, 2402015, 0x1e0ffff0, 1, 250 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S(""));
        assert(genesis.hashMerkleRoot == uint256S("0x1b2ef6e2f28be914103a277377ae7729dcd125dfeb8bf97bd5964ba72b6dc39b"));

        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.powLimit   = ~UINT256_ZERO >> 20;   // PIVX starting difficulty is 1 / 2^12
        consensus.posLimitV1 = ~UINT256_ZERO >> 24;
        consensus.posLimitV2 = ~UINT256_ZERO >> 20;
        consensus.nBudgetCycleBlocks = 144;         // approx 10 cycles per day
        consensus.nBudgetFeeConfirmations = 3;      // (only 8-blocks window for finalization on testnet)
        consensus.nCoinbaseMaturity = 30;
        consensus.nFutureTimeDriftPoW = 7200;
        consensus.nFutureTimeDriftPoS = 180;
        consensus.nMasternodeCountDrift = 20;       // num of MN we allow the see-saw payments to be off by
        consensus.nMaxMoneyOut = 21000000 * COIN;
        consensus.nPoolMaxTransactions = 3;
        consensus.nProposalEstablishmentTime = 60 * 5;  // at least 5 min old to make it into a budget
        consensus.nStakeMinAge = 60 * 60;
        consensus.nStakeMinDepth = 100;
        consensus.nTargetTimespan = 40 * 60;
        consensus.nTargetTimespanV2 =  2 * consensus.nTimeSlotLength * 60;
        consensus.nTargetSpacing = 1 * 60;
        consensus.nTimeSlotLength = 15;
        consensus.nMaxProposalPayments = 20;

        // spork keys
        consensus.strSporkPubKey = "04677c34726c491117265f4b1c83cef085684f36c8df5a97a3a42fc499316d0c4e63959c9eca0dba239d9aaaf72011afffeb3ef9f51b9017811dec686e412eb504";
        consensus.strSporkPubKeyOld = "04E88BB455E2A04E65FCC41D88CD367E9CCE1F5A409BE94D8C2B4B35D223DED9C8E2F4E061349BA3A38839282508066B6DC4DB72DD432AC4067991E6BF20176127";
        consensus.nTime_EnforceNewSporkKey = 1608512400;    //!> December 21, 2020 01:00:00 AM GMT
        consensus.nTime_RejectOldSporkKey = 1614560400;     //!> March 1, 2021 01:00:00 AM GMT

        // height based activations
        consensus.height_last_ZC_AccumCheckpoint = -1;
        consensus.height_last_ZC_WrappedSerials = -1;
        consensus.height_start_InvalidUTXOsCheck = 999999999;
        consensus.height_start_ZC_InvalidSerials = 999999999;
        consensus.height_start_ZC_SerialRangeCheck = 1;
        consensus.height_ZC_RecalcAccumulators = 999999999;

        // Zerocoin-related params
        consensus.ZC_Modulus = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
                "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
                "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
                "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
                "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
                "31438167899885040445364023527381951378636564391212010397122822120720357";
        consensus.ZC_MaxPublicSpendsPerTx = 637;    // Assume about 220 bytes each input
        consensus.ZC_MaxSpendsPerTx = 7;            // Assume about 20kb each input
        consensus.ZC_MinMintConfirmations = 20;
        consensus.ZC_MinMintFee = 1 * CENT;
        consensus.ZC_MinStakeDepth = 200;
        consensus.ZC_TimeStart = 1508214600;        // October 17, 2017 4:30:00 AM

        // Network upgrades
        consensus.vUpgrades[Consensus::BASE_NETWORK].nActivationHeight =
                Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_TESTDUMMY].nActivationHeight =
                Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;
        consensus.vUpgrades[Consensus::UPGRADE_POS].nActivationHeight           = 201;
        consensus.vUpgrades[Consensus::UPGRADE_POS_V2].nActivationHeight        = 201;
        consensus.vUpgrades[Consensus::UPGRADE_ZC].nActivationHeight            = 201;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight         = 201;
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].nActivationHeight         = 201;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].nActivationHeight     = 201;
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].nActivationHeight          = 201;
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].nActivationHeight          = 201;
        consensus.vUpgrades[Consensus::UPGRADE_V5_0].nActivationHeight          = 201;

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0xf5;
        pchMessageStart[1] = 0xe6;
        pchMessageStart[2] = 0xd5;
        pchMessageStart[3] = 0xca;
        nDefaultPort = 51474;

        // nodes with support for servicebits filtering should be at the top
        vSeeds.emplace_back("fuzzbawls.pw", "pivx-testnet.seed.fuzzbawls.pw", true);
        vSeeds.emplace_back("fuzzbawls.pw", "pivx-testnet.seed2.fuzzbawls.pw", true);

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 139); // Testnet pivx addresses start with 'x' or 'y'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 19);  // Testnet pivx script addresses start with '8' or '9'
        base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 73);     // starting with 'W'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 239);     // Testnet private keys start with '9' or 'c' (Bitcoin defaults)
        // Testnet pivx BIP32 pubkeys start with 'DRKV'
        base58Prefixes[EXT_PUBLIC_KEY] = {0x3a, 0x80, 0x61, 0xa0};
        // Testnet pivx BIP32 prvkeys start with 'DRKP'
        base58Prefixes[EXT_SECRET_KEY] = {0x3a, 0x80, 0x58, 0x37};
        // Testnet pivx BIP44 coin type is '1' (All coin's testnet default)
        base58Prefixes[EXT_COIN_TYPE] = {0x80, 0x00, 0x00, 0x01};

        vFixedSeeds = std::vector<SeedSpec6>(pnSeed6_test, pnSeed6_test + ARRAYLEN(pnSeed6_test));

        // Sapling
        bech32HRPs[SAPLING_PAYMENT_ADDRESS]      = "ptestsapling";
        bech32HRPs[SAPLING_FULL_VIEWING_KEY]     = "pviewtestsapling";
        bech32HRPs[SAPLING_INCOMING_VIEWING_KEY] = "pivktestsapling";
        bech32HRPs[SAPLING_EXTENDED_SPEND_KEY]   = "p-secret-spending-key-test";
        bech32HRPs[SAPLING_EXTENDED_FVK]         = "pxviewtestsapling";
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataTestnet;
    }
};

/**
 * Regression test
 */
class CRegTestParams : public CChainParams
{
public:
    CRegTestParams()
    {
        strNetworkID = "regtest";

        genesis = CreateGenesisBlock(1454124731, 2402015, 0x1e0ffff0, 1, 250 * COIN);
        consensus.hashGenesisBlock = genesis.GetHash();
        assert(consensus.hashGenesisBlock == uint256S("0x0"));
        assert(genesis.hashMerkleRoot == uint256S("0x1b2ef6e2f28be914103a277377ae7729dcd125dfeb8bf97bd5964ba72b6dc39b"));

        consensus.fPowAllowMinDifficultyBlocks = true;
        consensus.powLimit   = ~UINT256_ZERO >> 20;   // PIVX starting difficulty is 1 / 2^12
        consensus.posLimitV1 = ~UINT256_ZERO >> 24;
        consensus.posLimitV2 = ~UINT256_ZERO >> 20;
        consensus.nBudgetCycleBlocks = 144;         // approx 10 cycles per day
        consensus.nBudgetFeeConfirmations = 3;      // (only 8-blocks window for finalization on regtest)
        consensus.nCoinbaseMaturity = 100;
        consensus.nFutureTimeDriftPoW = 7200;
        consensus.nFutureTimeDriftPoS = 180;
        consensus.nMasternodeCountDrift = 20;        // num of MN we allow the see-saw payments to be off by
        consensus.nMaxMoneyOut = 43199500 * COIN;
        consensus.nPoolMaxTransactions = 2;
        consensus.nProposalEstablishmentTime = 60 * 5;  // at least 5 min old to make it into a budget
        consensus.nStakeMinAge = 0;
        consensus.nStakeMinDepth = 2;
        consensus.nTargetTimespan = 40 * 60;
        consensus.nTargetTimespanV2 = 30 * 60;
        consensus.nTargetSpacing = 1 * 60;
        consensus.nTimeSlotLength = 15;
        consensus.nMaxProposalPayments = 20;

        /* Spork Key for RegTest:
        WIF private key: 932HEevBSujW2ud7RfB1YF91AFygbBRQj3de3LyaCRqNzKKgWXi
        private key hex: bd4960dcbd9e7f2223f24e7164ecb6f1fe96fc3a416f5d3a830ba5720c84b8ca
        Address: yCvUVd72w7xpimf981m114FSFbmAmne7j9
        */
        consensus.strSporkPubKey = "043969b1b0e6f327de37f297a015d37e2235eaaeeb3933deecd8162c075cee0207b13537618bde640879606001a8136091c62ec272dd0133424a178704e6e75bb7";
        consensus.strSporkPubKeyOld = "";
        consensus.nTime_EnforceNewSporkKey = 0;
        consensus.nTime_RejectOldSporkKey = 0;

        // height based activations
        consensus.height_last_ZC_AccumCheckpoint = 310;     // no checkpoints on regtest
        consensus.height_last_ZC_WrappedSerials = -1;
        consensus.height_start_InvalidUTXOsCheck = 999999999;
        consensus.height_start_ZC_InvalidSerials = 999999999;
        consensus.height_start_ZC_SerialRangeCheck = 300;
        consensus.height_ZC_RecalcAccumulators = 999999999;

        // Zerocoin-related params
        consensus.ZC_Modulus = "25195908475657893494027183240048398571429282126204032027777137836043662020707595556264018525880784"
                "4069182906412495150821892985591491761845028084891200728449926873928072877767359714183472702618963750149718246911"
                "6507761337985909570009733045974880842840179742910064245869181719511874612151517265463228221686998754918242243363"
                "7259085141865462043576798423387184774447920739934236584823824281198163815010674810451660377306056201619676256133"
                "8441436038339044149526344321901146575444541784240209246165157233507787077498171257724679629263863563732899121548"
                "31438167899885040445364023527381951378636564391212010397122822120720357";
        consensus.ZC_MaxPublicSpendsPerTx = 637;    // Assume about 220 bytes each input
        consensus.ZC_MaxSpendsPerTx = 7;            // Assume about 20kb each input
        consensus.ZC_MinMintConfirmations = 10;
        consensus.ZC_MinMintFee = 1 * CENT;
        consensus.ZC_MinStakeDepth = 10;
        consensus.ZC_TimeStart = 0;                 // not implemented on regtest

        // Network upgrades
        consensus.vUpgrades[Consensus::BASE_NETWORK].nActivationHeight =
                Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_TESTDUMMY].nActivationHeight =
                Consensus::NetworkUpgrade::NO_ACTIVATION_HEIGHT;
        consensus.vUpgrades[Consensus::UPGRADE_POS].nActivationHeight           = 251;
        consensus.vUpgrades[Consensus::UPGRADE_POS_V2].nActivationHeight        = 251;
        consensus.vUpgrades[Consensus::UPGRADE_ZC].nActivationHeight            = 300;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_V2].nActivationHeight         = 300;
        consensus.vUpgrades[Consensus::UPGRADE_BIP65].nActivationHeight         =
                Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_ZC_PUBLIC].nActivationHeight     = 400;
        consensus.vUpgrades[Consensus::UPGRADE_V3_4].nActivationHeight          = 251;
        consensus.vUpgrades[Consensus::UPGRADE_V4_0].nActivationHeight          =
                Consensus::NetworkUpgrade::ALWAYS_ACTIVE;
        consensus.vUpgrades[Consensus::UPGRADE_V5_0].nActivationHeight          = 300;

        /**
         * The message start string is designed to be unlikely to occur in normal data.
         * The characters are rarely used upper ASCII, not valid as UTF-8, and produce
         * a large 4-byte int at any alignment.
         */
        pchMessageStart[0] = 0xa1;
        pchMessageStart[1] = 0xcf;
        pchMessageStart[2] = 0x7e;
        pchMessageStart[3] = 0xac;
        nDefaultPort = 51476;

        base58Prefixes[PUBKEY_ADDRESS] = std::vector<unsigned char>(1, 139); // Testnet pivx addresses start with 'x' or 'y'
        base58Prefixes[SCRIPT_ADDRESS] = std::vector<unsigned char>(1, 19);  // Testnet pivx script addresses start with '8' or '9'
        base58Prefixes[STAKING_ADDRESS] = std::vector<unsigned char>(1, 73);     // starting with 'W'
        base58Prefixes[SECRET_KEY] = std::vector<unsigned char>(1, 239);     // Testnet private keys start with '9' or 'c' (Bitcoin defaults)
        // Testnet pivx BIP32 pubkeys start with 'DRKV'
        base58Prefixes[EXT_PUBLIC_KEY] = {0x3a, 0x80, 0x61, 0xa0};
        // Testnet pivx BIP32 prvkeys start with 'DRKP'
        base58Prefixes[EXT_SECRET_KEY] = {0x3a, 0x80, 0x58, 0x37};
        // Testnet pivx BIP44 coin type is '1' (All coin's testnet default)
        base58Prefixes[EXT_COIN_TYPE] = {0x80, 0x00, 0x00, 0x01};

        // Sapling
        bech32HRPs[SAPLING_PAYMENT_ADDRESS]      = "ptestsapling";
        bech32HRPs[SAPLING_FULL_VIEWING_KEY]     = "pviewtestsapling";
        bech32HRPs[SAPLING_INCOMING_VIEWING_KEY] = "pivktestsapling";
        bech32HRPs[SAPLING_EXTENDED_SPEND_KEY]   = "p-secret-spending-key-test";
        bech32HRPs[SAPLING_EXTENDED_FVK]         = "pxviewtestsapling";
    }

    const Checkpoints::CCheckpointData& Checkpoints() const
    {
        return dataRegtest;
    }
};

static std::unique_ptr<CChainParams> globalChainParams;

const CChainParams &Params()
{
    assert(globalChainParams);
    return *globalChainParams;
}

std::unique_ptr<CChainParams> CreateChainParams(const std::string& chain)
{
    if (chain == CBaseChainParams::MAIN)
        return std::unique_ptr<CChainParams>(new CMainParams());
    else if (chain == CBaseChainParams::TESTNET)
        return std::unique_ptr<CChainParams>(new CTestNetParams());
    else if (chain == CBaseChainParams::REGTEST)
        return std::unique_ptr<CChainParams>(new CRegTestParams());
    throw std::runtime_error(strprintf("%s: Unknown chain %s.", __func__, chain));
}

void SelectParams(const std::string& network)
{
    SelectBaseParams(network);
    globalChainParams = CreateChainParams(network);
}

void UpdateNetworkUpgradeParameters(Consensus::UpgradeIndex idx, int nActivationHeight)
{
    globalChainParams->UpdateNetworkUpgradeParameters(idx, nActivationHeight);
}
