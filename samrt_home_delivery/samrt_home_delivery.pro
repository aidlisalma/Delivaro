QT       += core gui sql serialport printsupport network charts multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arduino.cpp \
    colis.cpp \
    connection.cpp \
    email.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    partenaire.cpp \
    publicite.cpp \
    qcustomplot.cpp \
    reclamation.cpp \
    smtp.cpp \
    statistique.cpp

HEADERS += \
    arduino.h \
    colis.h \
    connection.h \
    email.h \
    login.h \
    mainwindow.h \
    partenaire.h \
    publicite.h \
    qcustomplot.h \
    reclamation.h \
    smtp.h \
    statistique.h

FORMS += \
    email.ui \
    mainwindow.ui

TRANSLATIONS = samrt_home_delivery_en.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
