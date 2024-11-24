QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    finderdialog.cpp \
    main.cpp \
    mainwindow.cpp \
    tabledialog.cpp \
    fioitemalex.cpp \
    fioitemslava.cpp \
    formsdialog.cpp \
    grapheditwidget.cpp \
    graphscene.cpp \
    movingdog.cpp \
    movingcar.cpp

HEADERS += \
    finderdialog.h \
    mainwindow.h \
    tabledialog.h \
    fioitemalex.h \
    fioitemslava.h \
    formsdialog.h \
    grapheditwidget.h \
    graphscene.h \
    movingdog.h \
    movingcar.h

FORMS += \
    finderdialog.ui \
    mainwindow.ui \
    tabledialog.ui \
    formsdialog.ui \
    grapheditwidget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
