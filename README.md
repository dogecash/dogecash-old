PIVX Core integration/staging repository
=====================================

[![master Actions Status](https://github.com/PIVX-Project/PIVX/workflows/CI%20Actions%20for%20PIVX/badge.svg)](https://github.com/PIVX-Project/PIVX/actions)
[![GitHub release (latest by date)](https://img.shields.io/github/v/release/PIVX-Project/pivx?color=%235c4b7d&cacheSeconds=3600)](https://github.com/PIVX-Project/PIVX/releases)
[![GitHub Release Date](https://img.shields.io/github/release-date/PIVX-Project/pivx?color=%235c4b7d&cacheSeconds=3600)](https://github.com/PIVX-Project/PIVX/releases)

## What is PIVX?

PIVX is an open source community-driven cryptocurrency, focused on five main aspects:

(1) User Data Protection: Through the use of SHIELD, a zk-SNARKs based privacy protocol.

(2) Low environmental footprint and network participation equality: Through the use of a highly developed Proof of Stake protocol.

(3) Decentralized Governance System: A DAO built on top of the tier two Masternodes network, enabling a monthly community treasury, proposals submission and decentralized voting.

(4) Fast Transactions: Through the use of fast block times and the tier two network, PIVX is committed to continue researching new and better instant transactions mechanisms.

(5) Ease of Use: PIVX is determined to offer the best possible graphical interface for a core node/wallet. A full featured graphical product for new and advanced users.

A lot more information and specs at [PIVX.org](https://www.pivx.org/). Join the community at [PIVX Discord](https://discordapp.com/invite/jzqVsJd).

## License
PIVX Core is released under the terms of the MIT license. See [COPYING](https://github.com/PIVX-Project/PIVX/blob/master/COPYING) for more information or see https://opensource.org/licenses/MIT.

## Development Process

The master branch is regularly built (see doc/build-*.md for instructions) and tested, but it is not guaranteed to be completely stable. [Tags](https://github.com/PIVX-Project/PIVX/tags) are created regularly from release branches to indicate new official, stable release versions of PIVX Core.

The contribution workflow is described in [CONTRIBUTING.md](https://github.com/PIVX-Project/PIVX/blob/master/CONTRIBUTING.md) and useful hints for developers can be found in [doc/developer-notes.md](https://github.com/PIVX-Project/PIVX/blob/master/doc/developer-notes.md).

## Testing

Testing and code review is the bottleneck for development; we get more pull requests than we can review and test on short notice. Please be patient and help out by testing other people's pull requests, and remember this is a security-critical project where any mistake might cost people a lot of money.

## Automated Testing

Developers are strongly encouraged to write [unit tests](https://github.com/PIVX-Project/PIVX/blob/master/src/test/README.md) for new code, and to submit new unit tests for old code. Unit tests can be compiled and run (assuming they weren't disabled in configure) with: make check. Further details on running and extending unit tests can be found in [/src/test/README.md](https://github.com/PIVX-Project/PIVX/blob/master/src/test/README.md).

There are also regression and integration tests, written in Python. These tests can be run (if the test dependencies are installed) with: test/functional/test_runner.py`

The CI (Continuous Integration) systems make sure that every pull request is built for Windows, Linux, and macOS, and that unit/sanity tests are run automatically.

## Manual Quality Assurance (QA) Testing

Changes should be tested by somebody other than the developer who wrote the code. This is especially important for large or high-risk changes. It is useful to add a test plan to the pull request description if testing the changes is not straightforward.

## Translations

Changes to translations as well as new translations can be submitted to PIVX Core's Transifex page.

Translations are periodically pulled from Transifex and merged into the git repository. See the [translation process](https://github.com/PIVX-Project/PIVX/blob/master/doc/translation_process.md) for details on how this works.

Important: We do not accept translation changes as GitHub pull requests because the next pull from Transifex would automatically overwrite them again.
