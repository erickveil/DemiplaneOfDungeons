#-------------------------------------------------
#
# Project created by QtCreator 2018-07-25T13:28:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DemiplaneOfDungeons
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    monster.cpp \
    monsterfamily.cpp \
    encountergrouping.cpp

HEADERS  += mainwindow.h \
    monster.h \
    monsterfamily.h \
    encountergrouping.h

FORMS    += mainwindow.ui
