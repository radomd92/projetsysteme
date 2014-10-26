#-------------------------------------------------
#
# Project created by QtCreator 2014-10-26T15:17:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MoteurBDClefValeur
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
        moteurbd.cpp \
    JSONLib2/cJSON/cJSON.c \
    cJSON/test.c \
    cJSON/cJSON.c

HEADERS  += mainwindow.h \
    moteurbd.h \
    JSONLib2/cJSON/cJSON.h \
    cJSON/cJSON.h

FORMS    += mainwindow.ui
