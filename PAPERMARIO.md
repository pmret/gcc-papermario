The 32-bit cc1 in the papermario repo was built with CFLAGS="-m32 -static"

The 64-bit cc1 can be built with the following commands:
`./configure --target=mips-nintendo-nu64 --host=i386-apple-darwin --prefix=/opt/cross --disable-gprof --disable-gdb`
`make CFLAGS="-std=gnu89 -Wno-return-type -Wno-error -Wno-implicit-function-declaration"`
