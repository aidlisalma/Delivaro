QT       += core gui sql multimedia network charts serialport printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    colis.cpp \
    connection.cpp \
    main.cpp \
    delivaro.cpp \
    partenaire.cpp \
    qcustomplot.cpp

HEADERS += \
    colis.h \
    connection.h \
    delivaro.h \
    partenaire.h \
    qcustomplot.h

FORMS += \
    delivaro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
