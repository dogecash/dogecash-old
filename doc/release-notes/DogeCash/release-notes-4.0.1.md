DogeCash Core version *4.0.1* is now available from:  <https://github.com/dogecash/dogecash/releases>

This is a new minor version release, including various bug fixes and performance improvements, as well as updated translations.

Please report bugs using the issue tracker at github: <https://github.com/dogecash/dogecash/issues>


Minor Update
==============

DogeCash Core v4.0.1 is a **Minor update** for all block creators, masternodes, and integrated services (exchanges).

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


Minor New Features
------

Disabling of appNap during sync process that will help with power consumption on mac devices!
DNS Seeder addition, making for much better initial sync and less clogging up of initial seednodes.
 
GUI Changes
------

Many small GUI changes implemented based on the missed items from the 4.0.0 release. ListView is now properly fixed. A small ToolTip bug was found and fixed based on some issues in reliance of CSS items without borders specified in QT. A much more readable interface for input and text edit boxes will be noticed. Additional color fixes added into Governance page to make more readable.

Miscellaneous Changes
------

Readjusting the supply calculation methods in RPC to adjust for Burnt Coin Supplies.

*4.0.1* Change log
==============

Detailed release notes follow. This overview includes changes that affect behavior, not code moves, refactors and string updates. For convenience in locating the code changes and accompanying discussion, both the pull request and git merge commit are mentioned.

### GUI

- 0255742  [QT] Fix ToolTip Bug
- 04683cb  [QT] Tree View
- ff10e46  [QT] ListView Update
- c8a2f5c  [QT] TransactionSum to Grey
- 0ff640c  [QT] TextLabel Fixes  
- 06bde1c  [QT] Calendar and Combo Boxs
- 4336a7a  [QT] Arrow Colors
- 7946315  [QT] Making Consistent Schemes
- 3defdbf  [Qt] Add antialiasing to traffic graph widget

### Miscellaneous
 
- 0c741bc  macOS: disable AppNap during sync
- ca1c899  [Supply] Calc burnt/unspendable coins and subtract from nmoneysupply
- 0c66893  [P2P] DNS Seeder addition to hard seeds

## Credits

Thanks to everyone who directly contributed to this release:

- Fuzzbawls
- Mrs-X
- Pieter Wuille
- presstab
- random-zebra
- warrows
- akshaynexus
- Daniel Halford
- Liquid369
