#configuration
CONFIG +=  cross_compile shared qpa rtti no_mocdepend release qt_no_framework
host_build {
    QT_ARCH = x86_64
    QT_TARGET_ARCH = x86_64
} else {
    QT_ARCH = x86_64
    QMAKE_DEFAULT_LIBDIRS = /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/lib64/gcc/x86_64-w64-mingw32/4.8.3 /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/lib64/gcc /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/x86_64-w64-mingw32/lib /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/mingw/lib
    QMAKE_DEFAULT_INCDIRS = /opt/windows_64/include /usr/lib64/qt/include /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/x86_64-w64-mingw32/include/c++/4.8.3 /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/x86_64-w64-mingw32/include/c++/4.8.3/x86_64-w64-mingw32 /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/x86_64-w64-mingw32/include/c++/4.8.3/backward /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/lib64/gcc/x86_64-w64-mingw32/4.8.3/include /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/lib64/gcc/x86_64-w64-mingw32/4.8.3/include-fixed /home/adrien/projects/win-builds-1.5/opt/cross_toolchain_64/x86_64-w64-mingw32/include
}
QT_CONFIG +=  minimal-config small-config medium-config large-config full-config libpng c++11 accessibility opengl shared qpa reduce_relocations clock-gettime clock-monotonic getaddrinfo system-jpeg system-png png no-freetype system-harfbuzz system-zlib dbus openssl icu concurrent audio-backend release

#versioning
QT_VERSION = 5.3.1
QT_MAJOR_VERSION = 5
QT_MINOR_VERSION = 3
QT_PATCH_VERSION = 1

#namespaces
QT_LIBINFIX = 
QT_NAMESPACE = 

# pkgconfig
PKG_CONFIG_SYSROOT_DIR = 
PKG_CONFIG_LIBDIR = /opt/windows_64/lib64/pkgconfig

QT_GCC_MAJOR_VERSION = 4
QT_GCC_MINOR_VERSION = 8
QT_GCC_PATCH_VERSION = 3
