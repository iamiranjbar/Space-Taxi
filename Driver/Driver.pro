#-------------------------------------------------
#
# Project created by QtCreator 2017-05-27T00:50:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Driver
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    client_socket.cpp \
    tools.cpp \
    register_form.cpp \
    control_form.cpp \
    set_status_form.cpp \
    trip_management_form.cpp

HEADERS  += mainwindow.h \
    client_socket.h \
    tools.h \
    network_exception.h \
    register_form.h \
    control_form.h \
    set_status_form.h \
    trip_management_form.h

FORMS    += mainwindow.ui \
    register_form.ui \
    control_form.ui \
    set_status_form.ui \
    trip_management_form.ui
