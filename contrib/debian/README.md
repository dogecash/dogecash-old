
Debian
====================
This directory contains files used to package DogeCashd/DogeCash-qt
for Debian-based Linux systems. If you compile DogeCashd/DogeCash-qt yourself, there are some useful files here.

## DogeCash: URI support ##


DogeCash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install DogeCash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your DogeCashqt binary to `/usr/bin`
and the `../../share/pixmaps/DogeCash128.png` to `/usr/share/pixmaps`

DogeCash-qt.protocol (KDE)

