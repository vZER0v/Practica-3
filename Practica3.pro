TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        CuentaCorriente.cpp \
        FileManager.cpp \
        MessageCoder.cpp \
        MovieManager.cpp \
        TextSearcher.cpp \
        main.cpp

HEADERS += \
    CuentaCorriente.h \
    FileManager.h \
    MessageCoder.h \
    Movie.h \
    MovieManager.h \
    TextSearcher.h
