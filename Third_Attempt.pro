TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    person.cpp \
    bystroustrup.cpp \
    different_functions.cpp \
    my_math.cpp \
    student.cpp \
    teacher.cpp \
    lab_one.cpp \
    course.cpp \
    MMath.cpp

HEADERS += \
    person.h \
    bystroustrup.h \
    different_functions.h \
    my_math.h \
    namespaceexample.h \
    student.h \
    teacher.h \
    lab_one.h \
    course.h \
    MMath.h

#use it with win7 only with russian keyboards
#QMAKE_EXTRA_TARGETS += before_build makefilehook

#makefilehook.target = $(MAKEFILE)
#makefilehook.depends = .beforebuild

#PRE_TARGETDEPS += .beforebuild

#before_build.target = .beforebuild
#before_build.depends = FORCE
#before_build.commands = chcp 1251
