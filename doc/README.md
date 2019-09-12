DogeCash Core
=============

Setup
---------------------
[DogeCash Core](http://dogec.io/wallet) is the original DogeCash client and it builds the backbone of the network. However, it downloads and stores the entire history of DogeCash transactions; depending on the speed of your computer and network connection, the synchronization process can take anywhere from a few hours to a day or more. Thankfully you only have to do this once.

Running
---------------------
The following are some helpful notes on how to run DogeCash Core on your native platform.

### Unix

Unpack the files into a directory and run:

- `bin/dogecash-qt` (GUI) or
- `bin/dogecashd` (headless)

### Windows

Unpack the files into a directory, and then run dogecash-qt.exe.

### OSX

Drag DogeCash-Qt to your applications folder, and then run DogeCash-Qt.

### Need Help?

* See the documentation at the [DogeCash Wiki](https://github.com/DogeCash-Project/DogeCash/wiki)
for help and more information.
* Ask for help on [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or on the [DogeCash Forum](http://forum.dogec.io/).
* Join our Discord server [Discord Server](https://discord.dogec.io)

Building
---------------------
The following are developer notes on how to build DogeCash Core on your native platform. They are not complete guides, but include notes on the necessary libraries, compile flags, etc.

- [OSX Build Notes](build-osx.md)
- [Unix Build Notes](build-unix.md)
- [Gitian Building Guide](gitian-building.md)

Development
---------------------
The DogeCash repo's [root README](/README.md) contains relevant information on the development process and automated testing.

- [Developer Notes](developer-notes.md)
- [Multiwallet Qt Development](multiwallet-qt.md)
- [Release Notes](release-notes.md)
- [Release Process](release-process.md)
- [Source Code Documentation (External Link)](https://www.fuzzbawls.pw/dogecash/doxygen/)
- [Translation Process](translation_process.md)
- [Unit Tests](unit-tests.md)
- [Unauthenticated REST Interface](REST-interface.md)
- [Dnsseed Policy](dnsseed-policy.md)

### Resources
* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or the [DogeCash](http://forum.dogec.io/) forum.
* Join the [DogeCash Discord](https://discord.dogec.io).

* Discuss on the [BitcoinTalk](https://bitcointalk.org/index.php?topic=1262920.0) or the [dogecash](http://forum.dogec.io/) forum.
* Join the [dogecash-Dev](https://dogecash-dev.slack.com/) Slack group ([Sign-Up](https://dogecash-dev.herokuapp.com/)).

### Miscellaneous
- [Assets Attribution](assets-attribution.md)
- [Files](files.md)
- [Tor Support](tor.md)
- [Init Scripts (systemd/upstart/openrc)](init.md)

License
---------------------
Distributed under the [MIT/X11 software license](http://www.opensource.org/licenses/mit-license.php).
This product includes software developed by the OpenSSL Project for use in the [OpenSSL Toolkit](https://www.openssl.org/). This product includes
cryptographic software written by Eric Young ([eay@cryptsoft.com](mailto:eay@cryptsoft.com)), and UPnP software written by Thomas Bernard.
