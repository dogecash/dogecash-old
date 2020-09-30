
Debian
====================
This directory contains files used to package dogecashd/dogecash-qt
for Debian-based Linux systems. If you compile dogecashd/dogecash-qt yourself, there are some useful files here.

## dogecash: URI support ##


dogecash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install dogecash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your dogecash-qt binary to `/usr/bin`
and the `../../share/pixmaps/dogecash128.png` to `/usr/share/pixmaps`

dogecash-qt.protocol (KDE)

