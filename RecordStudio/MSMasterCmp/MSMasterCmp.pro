#-------------------------------------------------
#
# Project created by QtCreator 2013-08-13T18:47:47
#
#-------------------------------------------------

QT       -= gui

TARGET = MSMasterCmp
TEMPLATE = lib

DEFINES += MSMASTERCMP_LIBRARY

SOURCES += msmastercmp.cpp \
    msmastererror.cpp

LIBS += C:/Users/Torsten/Documents/QtProjects/RecordStudio/MSMasterCmp/bass.lib
LIBS += C:/Users/Torsten/Documents/QtProjects/RecordStudio/MSMasterCmp/bassmix.lib

HEADERS += msmastercmp.h\
        MSMasterCmp_global.h \
    bassmix.h \
    bass.h \
    msmastererror.h

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/lib
    }
    INSTALLS += target
}
