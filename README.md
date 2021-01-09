![ssheven box](http://www.cy384.com/media/img/ssheven_box_front_small.png)

ssheven
-------
A modern SSH client for Mac OS 7/8/9.

Project status: as of 0.8.0 ([see github releases](https://github.com/cy384/ssheven/releases)), a functional SSH client with color terminal emulation, able to login via key or password.  See roadmap below for upcoming work (i.e., things that aren't done yet).

![ssheven screenshot](http://www.cy384.com/media/img/ssheven-0.6.1-screenshot.png)

system requirements
-------------------
* CPU: Any PPC processor, or at least a 25 MHz 68040/68LC040.  Presently, all 68030 and 68020 CPUs are too slow.
* RAM: 2MB.
* Disk space: 1MB for the fat binary.
* System 7.5 or later, possibly earlier System 7 with the Thread Manager extension.
* Open Transport networking required, latest version possible highly recommended.

feature/bug-fix roadmap
-----------------------
0.9.0
* clean up network ops (write fn, read safety)
* fix preferences loading/saving, include key stuff, add `known_hosts` reset option
* general ssheven code cleanup
* text selection + copy

1.0.0 (first "real" release)
* nicer error presentation for more failure cases
* read Apple HIG and obsessively optimize placement of all GUI elements
* license info in an about box type thing
* finish and upload papercraft box, floppy sticker artwork, icon/logo svg

known bugs
* initial key exchange is too slow for 68030 and 68020 systems (improve `mbedtls_mpi_exp_mod` and maybe the assembly BN code?)
* input latency feels high? related to draw speed/frequency? (maybe try to use an "offscreen graphics world" framebuffer? big refactor)
* receiving a large amount of data breaks the channel (e.g. `cat /dev/zero`)
* hook scrolling into vterm to reduce redraws/blanking

possible upcoming features
* font face and size options
* scp file transfer
* more complete color support (will need to use color quickdraw, currently uses an 8-color hack for traditional quickdraw)
* keyboard-interactive authentication

build
-----
Uses Retro68 and cmake.

Requires mbedtls, libssh2, and libvterm, see my (cy384's) ports of those libraries for details.  Note that you need to build/install each for both platforms (m68k and PPC).

To build a fat binary, edit `build-ssheven.bash` with the path to your Retro68 build, and then run it.

license
-------
Licensed under the BSD 2 clause license, see LICENSE file.

