#-------------------------------------------------
#
# Project created by QtCreator 2017-05-25T17:39:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Passenger
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
        passenger.cpp \
    client_socket.cpp \
    tools.cpp \
    register_form.cpp \
    control_form.cpp \
    charge_acc_form.cpp \
    get_discode_form.cpp \
    req_trip_form.cpp \
    rate_form.cpp

HEADERS  += passenger.h \
    client_socket.h \
    tools.h \
    network_exception.h \
    register_form.h \
    control_form.h \
    charge_acc_form.h \
    get_discode_form.h \
    req_trip_form.h \
    rate_form.h

FORMS    += passenger.ui \
    register_form.ui \
    control_form.ui \
    charge_acc_form.ui \
    get_discode_form.ui \
    req_trip_form.ui \
    rate_form.ui
