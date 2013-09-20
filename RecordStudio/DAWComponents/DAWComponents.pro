#-------------------------------------------------
#
# Project created by QtCreator 2013-08-28T20:59:55
#
#-------------------------------------------------

QT       -= gui

TARGET = DAWComponents
TEMPLATE = lib

DEFINES += DAWCOMPONENTS_LIBRARY

SOURCES += \
    dawinput.cpp \
    fileinput.cpp \
    dawerror.cpp

HEADERS +=\
        DAWComponents_global.h \
    dawinput.h \
    fileinput.h \
    dawerror.h \
    bass.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
