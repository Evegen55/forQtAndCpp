TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    person.cpp \
    bystroustrup.cpp \
    different_functions.cpp \
    my_math.cpp \
    student.cpp

HEADERS += \
    person.h \
    bystroustrup.h \
    different_functions.h \
    my_math.h \
    namespaceexample.h \
    student.h
