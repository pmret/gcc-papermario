To build the 32-bit static cc1 in the [papermario](https://github.com/ethteck/papermario) repo on Ubuntu, use:

> Install dependencies:
> ```bash
> apt-get update
> apt-get install build-essential bison file gcc-multilib gperf
> ```
> Configure:
> ```bash
> ./configure --target=mips-nintendo-nu64 --prefix=/opt/cross --disable-gprof --disable-gdb --disable-werror --host=i386-pc-linux --build=i386-pc-linux
> ```
> Make:
> ```bash
> make CFLAGS="-std=gnu89 -m32 -static"
> ```
> The `make` stage may fail, but this is fine as long as the `cc1` binary is created successfully.

To build the 64-bit cc1 for macOS, use:
> Configure:
> ```bash
> ./configure --target=mips-nintendo-nu64 --prefix=/opt/cross --disable-gprof --disable-gdb --disable-werror --host=i386-apple-darwin --build=i386-apple-darwin
> ```
> Make:
> ```bash
> make CFLAGS="-std=gnu89 -Wno-return-type -Wno-error -Wno-implicit-function-declaration"
> ```
> The `make` stage may fail, but this is fine as long as the `cc1` binary is created successfully.

