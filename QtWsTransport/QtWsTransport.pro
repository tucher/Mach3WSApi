#-------------------------------------------------
#
# Project created by QtCreator 2017-06-01T22:19:35
#
#-------------------------------------------------

QT       += network websockets

QT       -= gui

TARGET = QtWsTransport
TEMPLATE = lib

DEFINES += QTWSTRANSPORT_LIBRARY


SOURCES += QtWsTransport.cpp \
    Helper.cpp

HEADERS += QtWsTransport.h\
    Helper.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}
DESTDIR = ../build
