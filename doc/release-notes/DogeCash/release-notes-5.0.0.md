DogeCash Core version *5.0.0* is now available from: https://github.com/dogecash/dogecash/releases
 
This is a new major version release, including various bug fixes and performance improvements, as well as updated translations.
 
Please report bugs using the issue tracker at github: https://github.com/dogecash/dogecash/issues
 
Major Update
==============
DogeCash Core v5.0.0 is a *Major* update for all block creators, masternodes, and integrated services (exchanges).

The difference between *5.0.0* and *4.1.0* is the interface. 
 
How to Upgrade
If you are running an older version, shut it down. Wait until it has completely shut down (which might take a few minutes for older versions), then run the installer (on Windows) or just copy over /Applications/DogeCash-Qt (on Mac) or dogecashd/dogecash-qt (on Linux).
 
Compatibility
==============
 
DogeCash Core is extensively tested on multiple operating systems using the Linux kernel, macOS 10.10+, and Windows 7 and later.
 
DogeCash Core should also work on most other Unix-like systems but is not frequently tested on them.
 
 
*5.0.0* Change log
==============
Detailed release notes follow. This overview includes changes that affect behavior, not code moves, refactors and string updates. For convenience in locating the code changes and accompanying discussion, both the pull request and git merge commit are mentioned.
 
 
Notable Changes
==============
Major New Features
------
[GUI] New Interface - df12a3033cdb635d2f7af6fcdf98ebd7e2f6b806
[Core][StakeMod] New Stake Modiferv2 - 3f87fb708af3db6a2d4a8cf19e21ebfef2360cb4
[Core][Tests][Build] HD Wallet CMake Build support - a57ff19f0f8784699d6840b1c65fbb9868069155
Cold Staking - 5f4a626edde1abd7be35647d38a9da2a9c6083dc
Fix OOM when deserializing UTXO entries with invalid length - 96760031dd74f6ef0d61e1d0f8c1b7be2ffe8f02
 
Minor New Features
------
Various Wallet Improvements - 102d4844358d0cb0583f247fab234816ea816daa
Spork Overhaul - a5ec24712fe46668eb6243fe5458acb4efaec624
New Network Messages - 20cf71eb0b9aa750cced51cba8c527b6ea735b94
Prevent Overpayment Masternodes - eb9719b40710ec8b187cdfa2619b364fd38c73f1
Multi Split Func to Staking - cc3136af9bbd74f4782b32e6a3160e8dc9c46bcc
[Concensus] Remove old message format in CMasternodeBroadcast - 95807caca391e403cd4b401429dca301f632e761
 
GUI Changes
------
New Interface - Major Overhaul
Minor Text Fixes
 
## Credits
 
Thanks to everyone who directly or indirectly contributed to this release:
 
- Fuzzbawls
- presstab
- furzy
- random-zebra
- warrows
- akshaynexus
- Daniel Halford
- Liquid369
 
##SHA 256 Checksums
```

```
