![ssheven box](http://www.cy384.com/media/img/ssheven_box_front_small.png)

ssheven
-------
A modern SSH client for Mac OS 7/8/9.

Project status: as of 0.8.0 ([see github releases](https://github.com/cy384/ssheven/releases)), fairly secure and usable, but without a polished UX or all planned features.  Versions prior to 1.0.0 should be considered alpha/beta quality.

![ssheven screenshot](http://www.cy384.com/media/img/ssheven-0.8.8.png)

system requirements
-------------------
* CPU: Any PPC processor, or at least a 68030 (68040 strongly recommended).
* RAM: 2MB.
* Disk space: fits on a floppy.
* System 7.1 or later. Versions below 7.5 require the Thread Manager extension.
* Open Transport networking required, latest version possible highly recommended.

roadmap
-------
0.9.0
* basic scp file transfer
* general code cleanup

1.0.0 (first "real" release)
* configurable terminal string
* configurable/auto-choosing SSH buffer size (improves feel for faster machines)
* nicer error presentation for more failure cases
* add `known_hosts` reset option
* read Apple HIG and clean up UI/UX
* all license info in an about box type thing
* finish and upload papercraft box, floppy sticker artwork, icon/logo svg

known problems
* drawing the screen is somewhat slow
* input latency feels high because redrawing the screen is slow (along with all the encryption, which is also slow)
* receiving a large amount of data may break the channel or cause lockups (e.g. `cat /dev/zero`)
* non-US keyboard input may or may not have issues

possible upcoming features
* more complete color support (currently uses the default Mac 8 color palette)
* keyboard-interactive authentication

build
-----
Uses Retro68 and cmake.

Requires mbedtls, libssh2, and libvterm, see my (cy384's) ports of those libraries for details.  Note that you need to build/install each for both platforms (m68k and PPC).

To build a fat binary, edit `build-ssheven.bash` with the path to your Retro68 build, and then run it.

license
-------
Licensed under the BSD 2 clause license, see `LICENSE` file.

