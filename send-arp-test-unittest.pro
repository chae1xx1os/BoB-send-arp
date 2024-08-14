QT += core testlib
QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle
CONFIG += warn_on
CONFIG += thread

TEMPLATE = app

SOURCES += \
    tests/main_test.cpp \
    src/arphdr.cpp \
    src/ethhdr.cpp \
    src/ip.cpp \
    src/mac.cpp

HEADERS += \
    include/arphdr.h \
    include/ethhdr.h \
    include/ip.h \
    include/mac.h

INCLUDEPATH += include
LIBS += -lpcap
