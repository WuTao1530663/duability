#-------------------------------------------------
#
# Project created by QtCreator 2017-01-02T11:32:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = durability
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    firstform.cpp

HEADERS  += mainwindow.h \
    firstform.h

FORMS    += mainwindow.ui \
    firstform.ui

DISTFILES += \
    resource/basic.png \
    resource/environ.png \
    resource/material.png \
    resource/envi.bmp

RESOURCES += \
    image.qrc
