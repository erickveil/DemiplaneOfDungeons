#-------------------------------------------------
#
# Project created by QtCreator 2018-07-25T13:28:32
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DemiplaneOfDungeons
TEMPLATE = app

CONFIG += c++14


SOURCES += main.cpp\
        mainwindow.cpp \
    monster.cpp \
    monsterfamily.cpp \
    encountergrouping.cpp \
    dice.cpp \
    tableentry.cpp \
    randomtable.cpp \
    monsterfactory.cpp \
    familyfactory.cpp

HEADERS  += mainwindow.h \
    monster.h \
    monsterfamily.h \
    encountergrouping.h \
    dice.h \
    tableentry.h \
    randomtable.h \
    monsterfactory.h \
    familyfactory.h

FORMS    += mainwindow.ui
