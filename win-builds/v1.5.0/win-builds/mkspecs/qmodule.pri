CONFIG +=  cross_compile system-sqlite qpa sse2 sse3 ssse3 sse4_1 sse4_2 avx avx2
QT_BUILD_PARTS += libs
QT_NO_DEFINES =  ALSA CUPS EGL EGLFS EGL_X11 EVDEV EVENTFD FONTCONFIG FREETYPE GETIFADDRS GLIB ICONV IMAGEFORMAT_JPEG INOTIFY IPV6IFNAME MREMAP NIS OPENVG POSIX_FALLOCATE PULSEAUDIO STYLE_GTK XRENDER ZLIB
QT_QCONFIG_PATH = 
host_build {
    QT_CPU_FEATURES.x86_64 =  mmx sse sse2
} else {
    QT_CPU_FEATURES.x86_64 =  mmx sse sse2
}
QT_COORD_TYPE = double
QT_CFLAGS_SQLITE   = -I/opt/windows_64/include  
QT_LFLAGS_SQLITE   = -L/opt/windows_64/lib64 -lsqlite3  
QT_LFLAGS_ODBC   = -lodbc
QMAKE_CFLAGS = -O2
QMAKE_CXXFLAGS = -O2
styles += mac fusion windows
styles += windowsxp windowsvista
DEFINES += QT_NO_MTDEV
QMAKE_CFLAGS_LIBPNG = -I/opt/windows_64/include/libpng14  
QMAKE_LIBS_LIBPNG = -L/opt/windows_64/lib64 -lpng14  
QT_CFLAGS_DBUS = -I/opt/windows_64/include/dbus-1.0 -I/opt/windows_64/lib64/dbus-1.0/include  
QT_LIBS_DBUS = -L/opt/windows_64/lib64 -ldbus-1  
DEFINES += QT_NO_LIBUDEV
DEFINES += QT_NO_EVDEV
QMAKE_X11_PREFIX = /usr
sql-drivers = 
sql-plugins =  odbc sqlite
