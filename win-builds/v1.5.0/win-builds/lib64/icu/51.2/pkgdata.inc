GENCCODE_ASSEMBLY_TYPE=-a gcc-mingw64
SO=dll
SOBJ=dll
A=a
LIBPREFIX=lib
LIB_EXT_ORDER=51.dll
COMPILE=x86_64-w64-mingw32-gcc   -DHAVE_DLOPEN=0 -DU_HAVE_MMAP=0  -DU_ATTRIBUTE_DEPRECATED= -O2 -Wall -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads -c
LIBFLAGS=-I/opt/windows_64/include -DPIC 
GENLIB=x86_64-w64-mingw32-gcc -O2 -Wall -std=c99 -pedantic -Wshadow -Wpointer-arith -Wmissing-prototypes -Wwrite-strings -mthreads  -shared -Wl,-Bsymbolic -Wl,--enable-auto-import -Wl,--out-implib=./all.dll.a
LDICUDTFLAGS=
LD_SONAME=
RPATH_FLAGS=
BIR_LDFLAGS=
AR=x86_64-w64-mingw32-ar
ARFLAGS=r
RANLIB=x86_64-w64-mingw32-ranlib
INSTALL_CMD=/usr/bin/ginstall -c
