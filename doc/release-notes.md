(note: this is a temporary file, to be added-to by anybody, and moved to release-notes at release time)

DogeCash Core version *version* is now available from:  <https://github.com/dogecash-project/dogecash/releases>

This is a new major version release, including various bug fixes and performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github: <https://github.com/dogecash-project/dogecash/issues>


Mandatory Update
==============


How to Upgrade
==============

If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/DogeCash-Qt (on Mac) or dogecashd/dogecash-qt (on Linux).


Compatibility
==============

DogeCash Core is extensively tested on multiple operating systems using the Linux kernel, macOS 10.10+, and Windows 7 and later.

Microsoft ended support for Windows XP on [April 8th, 2014](https://www.microsoft.com/en-us/WindowsForBusiness/end-of-xp-support), No attempt is made to prevent installing or running the software on Windows XP, you can still do so at your own risk but be aware that there are known instabilities and issues. Please do not report issues about Windows XP to the issue tracker.

Apple released it's last Mountain Lion update August 13, 2015, and officially ended support on [December 14, 2015](http://news.fnal.gov/2015/10/mac-os-x-mountain-lion-10-8-end-of-life-december-14/). DogeCash Core software starting with v3.2.0 will no longer run on MacOS versions prior to Yosemite (10.10). Please do not report issues about MacOS versions prior to Yosemite to the issue tracker.

DogeCash Core should also work on most other Unix-like systems but is not frequently tested on them.

 
Notable Changes
==============

Minimum Supported MacOS Version
------

The minimum supported version of MacOS (OSX) has been moved from 10.8 Mountain Lion to 10.10 Yosemite. Users still running a MacOS version prior to Yosemite will need to upgrade their OS if they wish to continue using the latest version(s) of the DogeCash Core wallet.

Attacks, Exploits, and Mitigations
------

### Fake Stake

On Janurary 22 2019, Decentralized Systems Lab out of the University of Illinois published a study entitled “[‘Fake Stake’ attacks on chain-based Proof-of-Stake cryptocurrencies](https://medium.com/@dsl_uiuc/fake-stake-attacks-on-chain-based-proof-of-stake-cryptocurrencies-b8b05723f806)”, which outlined a type of Denial of Service attack that could take place on a number of Proof of Stake based networks by exhausting a client's RAM or Disk resources.

A full report provided by dogecash developers is available on the [dogecash Website](https://dogec.io/fake-stake-official-dogecash-report/), which includes additional findings, mitigation details, and resources for testing. This type of attack has no risk to users' privacy and does not affect their holdings.

### Wrapped Serials

On March 6th 2019, an attack was detected on the dogecash network zerocoin protocol, or zdogec. The vulnerability allows an attacker to fake serials accepted by the network and thus to spend zerocoins that have never been minted. As severe as it is, it does not harm users’ privacy and does not affect their holdings directly.

As a result of this, all zdogec functionality was disabled via one of our sporks shortly after verification of this exploit. A full report, detailing how this attack was performed, as well as investigation results and mitigation methods is available [On Medium](https://medium.com/@dev.dogecash/report-wrapped-serials-attack-5f4bf7b51701).

zdogec functions will be restored after v3.2.0 is pushed out and the majority of the network has upgraded.

Major New Features
------

### BIP65 (CHECKLOCKTIMEVERIFY) Soft-Fork

DogeCash Core v3.2.0 introduces new consensus rules for scripting pathways to support the [BIP65](https://github.com/bitcoin/bips/blob/master/bip-0065.mediawiki) standard. This is being carried out as a soft-fork in order to provide ample time for stakers to update their wallet version.

### Automint Addresses

A new "Automint Addresses" feature has been added to the wallet that allows for the creation of new addresses who's purpose is to automatically convert any DOGEC funds received by such addresses to zdogec. The feature as a whole can be enabled/disabled either at runtime using the `-enableautoconvertaddress` option, via RPC/Console with the `enableautomintaddress` command, or via the GUI's options dialog, with the default being enabled.

Creation of these automint addresses is currently only available via the RPC/Console `createautomintaddress` command, which takes no additional arguments. The command returns a new dogecash address each time, but addresses created by this command can be re-used if desired.

### In-wallet Proposal Voting

A new UI wallet tab has been introduced that allows users to view the current budget proposals, their vote counts, and vote on proposals if the wallet is acting as a masternode controller. The visual design is to be considered temporary, and will be undergoing further design and display improvements in the future.

### Zerocoin Lite Node Protocol

Support for the ZLN Protocol has been added, which allows for a node to opt-in to providing extended network services for the protocol. By default, this functionality is disabled, but can be enabled by using the `-peerbloomfilterszc` runtime option.

A full technical writeup of the protocol can be found [Here](https://dogec.io/wp-content/uploads/2018/11/Zerocoin_Light_Node_Protocol.pdf).

### Precomputed Zerocoin Proofs

This introduces the ability to do most of the heavy computation required for zdogec spends **before** actually initiating the spend. A new thread, `ThreadPrecomputeSpends`, is added which constantly runs in the background.

`ThreadPrecomputeSpends`' purpose is to monitor the wallet's zdogec mints and perform partial witness accumulations up to `nHeight - 20` blocks from the chain's tip (to ensure that it only ever computes data that is at least 2 accumulator checkpoints deep), retaining the results in memory.

Additionally, a file based cache is introduced, `precomputes.dat`, which serves as a place to store any precomputed data between sessions, or when the in-memory cache size is exhausted. Swapping data between memory and disk file is done as needed, and periodic cache flushes to the disk are routine.

This also introduces 2 new runtime configuration options:

* `-precompute` is a binary boolean option (`1` or `0`) that determines wither or not pre-computation should be activated at runtime (default value is to activate, `1`).
* `-precomputecachelength` is a numeric value between `500` and `2000` that tells the precompute thread how many blocks to include during each pass (default is `1000`).

A new RPC command, `clearspendcache`, has been added that allows for the clearing/resetting of the precompute cache (both memory and disk). This command takes no additional arguments.

Finally, the "security level" option for spending zdogec has been completely removed, and all zdogec spends now spend at what was formerly "security level" `100`. This change has been reflected in any RPC command that previously took a security level argument, as well as in the GUI's Privacy section for spending zdogec.

### Regression Test Suite

The RegTest network mode has been re-worked to once again allow for the generation of on-demand PoW and PoS blocks. Additionally, many of the existing functional test scripts have been adapted for use with dogecash, and we now have a solid testing base for highly customizable tests to be written.

With this, the old `setgenerate` RPC command no longer functions in regtest mode, instead a new `generate` command has been introduced that is more suited for use in regtest mode.

GUI Changes
------

### Console Security Warning

Due to an increase in social engineering attacks/scams that rely on users relaying information from console commands, a new warning message has been added to the Console window's initial welcome message.

### Optional Hiding of Orphan Stakes

The options dialog now contains a checkbox option to hide the display of orphan stakes from both the overview and transaction history sections. Further, a right-click context menu option has been introduced in the transaction history tab to achieve the same effect.

**Note:** This option only affects the visual display of orphan stakes, and will not prevent them nor remove them from the underlying wallet database.

### Transaction Type Recoloring

The color of various transaction types has been reworked to provide better visual feedback. Staking and masternode rewards are now purple, orphan stakes are now light gray, other rejected transactions are in red, and normal receive/send transactions are black.

### Receive Tab Changes

The address to be used when creating a new payment request is now automatically displayed in the form. This field is not user-editable, and will be updated as needed by the wallet.

A new button has been added below the payment request form, "Receiving Addresses", which allows for quicker access to all the known receiving addresses. This one-click button is the same as using the `File->Receiving Addresses...` menu command, and will open up the Receiving Addresses UI dialog.

Historical payment requests now also display the address used for the request in the history table. While this information was already available when clicking the "Show" button, it was an extra step that shouldn't have been necessary.

### Privacy Tab Changes

The entire right half of the privacy tab can now be toggled (shown/hidden) via a new UI button. This was done to reduce "clutter" for users that may not wish to see the detailed information regarding individual denomination counts.

RPC Changes
------

### Backupwallet Sanity

The `backupwallet` RPC command no longer allows for overwriting the currently in use wallet.dat file. This was done to avoid potential file corruption caused by multiple conflicting file access operations.


- "isPublicSpend" boolean (optional) input parameter is removed from the following commands:
 - `createrawzerocoinspend`
 - `spendzerocoin`
 - `spendzerocoinmints`
 - `spendrawzerocoin`

The `securitylevel` argument has been removed from the `spendzerocoin` RPC command.


- "mintchange" and "minimizechange" boolean input parameters are removed from the following commands:
 - `spendzerocoin`

Introduce the `spendzerocoinmints` RPC call to enable spending specific zerocoins, provided as an array of hex strings (serial hashes).


- `setstakesplitthreshold` now accepts decimal amounts. If the provided value is `0`, split staking gets disabled. `getstakesplitthreshold` returns a double.

When calling `getreceivedbyaddress` with a non-wallet address, return a proper error code/message instead of just `0`

- The output of `getstakingstatus` was reworked. It now shows the following information:
  ```
  {
     "staking_status": true|false,       (boolean) whether the wallet is staking or not
     "staking_enabled": true|false,      (boolean) whether staking is enabled/disabled in pivx.conf
     "coldstaking_enabled": true|false,  (boolean) whether cold-staking is enabled/disabled in pivx.conf
     "haveconnections": true|false,      (boolean) whether network connections are present
     "mnsync": true|false,               (boolean) whether masternode data is synced
     "walletunlocked": true|false,       (boolean) whether the wallet is unlocked
     "stakeablecoins": n,                (numeric) number of stakeable UTXOs
     "stakingbalance": d,                (numeric) PIV value of the stakeable coins (minus reserve balance, if any)
     "stakesplitthreshold": d,           (numeric) value of the current threshold for stake split
     "lastattempt_age": n,               (numeric) seconds since last stake attempt
     "lastattempt_depth": n,             (numeric) depth of the block on top of which the last stake attempt was made
     "lastattempt_hash": xxx,            (hex string) hash of the block on top of which the last stake attempt was made
     "lastattempt_coins": n,             (numeric) number of stakeable coins available during last stake attempt
     "lastattempt_tries": n,             (numeric) number of stakeable coins checked during last stake attempt
   }
   ```


### Removed commands

`validateaddress` now has the ability to return more (non-critical or identifying) details about P2SH (multisig) addresses by removing the needless check against ISMINE_NO.

### Listmintedzerocoins Additional Options

Add a `fVerbose` boolean optional argument (default=false) to `listmintedzerocoins` call to have a more detailed output.

If `fVerbose` is specified as first argument, then a second optional boolean argument `fMatureOnly` (default=false) can be used to filter-out immature mints.

### Getblock & Getblockheader

A minor change to these two RPC commands to now display the `mediantime`, used primarialy during functional tests.

### Getwalletinfo

The `getwalletinfo` RPC command now outputs the configured transaction fee (`paytxfee` field).

Build System Changes
------

### Completely Disallow Qt4

Compiling the DogeCash Core wallet against Qt4 hasn't been supported for quite some time now, but the build system still recognized Qt4 as a valid option if Qt5 couldn't be found. This has now been remedied and Qt4 will no longer be considered valid during the `configure` pre-compilation phase.

### Further OpenSSL Deprecation

Up until now, the zerocoin library relied exclusively on OpenSSL for it's bignum implementation. This has now been changed with the introduction of GMP as an arithmetic operator and the bignum implementation has now been redesigned around GMP. Users can still opt to use OpenSSL for bignum by passing `--with-zerocoin-bignum=openssl` to the `configure` script, however such configuration is now deprecated.

**Note:** This change introduces a new dependency on GMP (libgmp) by default.

### RISC-V Support

Support for the new RISC-V 64bit processors has been added, though still experimental. Pre-compiled binaries for this CPU architecture are available for linux, and users can self-compile using gitian, depends, or an appropriate host system natively.

### New Gitian Build Script

The previous `gitian-build.sh` shell script has been replaced with a more feature rich python version; `gitian-build.py`. This script now supports the use of a docker container in addition to LXC or KVM virtualization, as well as the ability to build against a pull request by number.

*version* Change log
==============

Detailed release notes follow. This overview includes changes that affect behavior, not code moves, refactors and string updates. For convenience in locating the code changes and accompanying discussion, both the pull request and git merge commit are mentioned.

### Core Features

### Build System
 
### P2P Protocol and Network Code

### GUI
 
### RPC/REST

### Wallet
 
### Miscellaneous
 
 
## Credits

Thanks to everyone who directly contributed to this release:


As well as everyone that helped translating on [Transifex](https://www.transifex.com/projects/p/dogecash-project-translations/), the QA team during Testing and the Node hosts supporting our Testnet.
