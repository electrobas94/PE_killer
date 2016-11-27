#-------------------------------------------------
#
# Project created by QtCreator 2016-11-27T13:53:11
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PE_kiler
TEMPLATE = app


SOURCES += main.cpp\
        pekillerwin.cpp \
    datareader.cpp \
    pe_item.cpp \
    info_container.cpp

HEADERS  += pekillerwin.h \
    datareader.h \
    pe_item.h \
    info_container.h

FORMS    += pekillerwin.ui
