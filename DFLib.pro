TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Exception.cpp \
    Object.cpp \
    SeqList.cpp \
    StaticList.cpp \
    DynamicList.cpp

HEADERS += \
    Exception.h \
    Object.h \
    List.h \
    Smartpointer.h \
    StaticList.h \
    DynamicList.h \
    SeqList.h \
    Array.h

