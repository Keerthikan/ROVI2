TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

LIBS += `pkg-config opencv --libs`

SOURCES += main.cpp

