#-------------------------------------------------
#
# Project created by QtCreator 2014-10-27T15:32:57
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = radomd92-projetsysteme
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    moteurbd.cpp \
    cJSON/test.c \
    cJSON/cJSON.c \
    supprimerdonnee.cpp

HEADERS  += mainwindow.h \
    moteurbd.h \
    cJSON/cJSON.h \
    structures.h

FORMS    += mainwindow.ui
