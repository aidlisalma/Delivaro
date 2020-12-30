QT       += core gui sql multimedia network charts serialport printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    carac_trajet.cpp \
    carac_voiture.cpp \
    colis.cpp \
    connection.cpp \
    main.cpp \
    delivaro.cpp \
    partenaire.cpp \
    publicite.cpp \
    qcustomplot.cpp \
    reclamation.cpp \
    statistique.cpp \
    trajets.cpp \
    voitures.cpp

HEADERS += \
    carac_trajet.h \
    carac_voiture.h \
    colis.h \
    connection.h \
    delivaro.h \
    partenaire.h \
    publicite.h \
    qcustomplot.h \
    reclamation.h \
    statistique.h \
    trajets.h \
    voitures.h

FORMS += \
    delivaro.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
