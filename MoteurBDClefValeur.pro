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
    JSONLib/json_st.cc \
    JSONLib/test.cc

HEADERS  += mainwindow.h \
    moteurbd.h \
    JSONLib/json_st.hh \
    JSONLib/json.hh

FORMS    += mainwindow.ui
