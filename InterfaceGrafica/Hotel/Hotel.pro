#-------------------------------------------------
#
# Project created by QtCreator 2018-09-23T15:46:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Hotel
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
    login.cpp \
    cadastrar.cpp \
    menupainel.cpp

HEADERS += \
    login.h \
    cadastrar.h \
    menupainel.h \
    Pessoa.hpp \
    ../../Quarto.hpp \
    cadastro.hpp \
    Fila.hpp \
    Item.hpp \
    LDE.hpp \
    No.hpp \
    Senha.hpp \
    LDE.hpp \
    Fila.hpp \
    Pilha.hpp \
    Money.hpp \
    Caracteristicas.hpp

FORMS += \
    login.ui \
    cadastrar.ui \
    menupainel.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    arquivosrecurso.qrc
