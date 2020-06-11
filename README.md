# GNU Toolchain for Windows

This repository is a collection of binaries to create your own GNU Toolchain usable in Windows. The trunk of the master
branch contains the sum of the latest versions of all binaries.

Binaries are provided for the following programs:
* GCC 7
* GCC 8
* GCC 9
* GCC 10
* GCC Trunk (11)
* make
* binutils
* gdb
* MinGW

All binaries are 64 bit but the toolchain and debugger can produce and debug 32 Bit code as well

Executable without a prefix produce and handle 64 Bit Code.
Executables with the prefix i686-w64-mingw32 produce and handle 32 Bit Code.

Features compiled in are:
* GCC:
    * Shared and static versions of runtime libraries such as libstdc++. By default programs are linked against shared 
    versions. use the -static flag to compile against the static versions
    * Link Time Optimization support
    * C, C++, Fortran, ObjC and ObjC++
    * OpenMP support
    * Quad Precision Math support
    * C++11 Threading using pthreads
    * Version specific runtimes: Allows multiple GCC installations to live next to each other. This is done using version
    prefixes to runtime folders as well as version suffixes for each program. E.g. Executable of GCC 9 is called gcc-9.
    To create a symlink for the default version of gcc you want to use run one of the **make-gcc-\*-\*-default.bat** 
    which will create symlinks such as gcc.exe and others.
* binutils:
    * Plugin support (needed for LTO)
* gdb:
    * Support for Python 2.7 required for pretty printers. **To use gdb please download a 64 Bit version of Python 2.7
    from pythons official website and add it to the PATH or it will fail to run.**
    * gdbserver
    * multi-arch support allowing debugging any target supported by gdb when remote debugging
* MinGW:
    * Posix Threading
    * Default windows version of 0x601 (Windows 7)
    * MSVCRT Runtime instead of ucrt (Needed by e.g. Golang compiler)
    * Builds of winpthreads and winstorecompat

All binaries are either fully relocatable or only have a dependency on libwinpthread-1.dll.
For GCC to function it requires the folder it's located in (the bin folder) to be in the system PATH.

Trunk version of this repository currently contains following versions:
GCC 7.5.0
GCC 8.4.1
GCC 9.3.1
GCC 10.1.1
GCC Trunk (11.0.0)
GDB Trunk (10.0.50)
Binutils Trunk (2.34.50)
MinGW Trunk (8.0.0)
Make Trunk (4.3.90)

For repositories, configure options and commit revisions see BUILDINFO.txt
