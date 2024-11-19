QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    about.cpp \
    authentication.cpp \
    author.cpp \
    db.cpp \
    dictionaryClaim.cpp \
    dictionaryNom.cpp \
    main.cpp \
    mainMenu.cpp \
    newuser.cpp \
    solution1.cpp \
    solution2.cpp \
    task1.cpp \
    task2.cpp \
    task3.cpp \
    task4.cpp

HEADERS += \
    about.h \
    authentication.h \
    author.h \
    db.h \
    dictionaryClaim.h \
    dictionaryNom.h \
    mainMenu.h \
    newuser.h \
    solution1.h \
    solution2.h \
    task1.h \
    task2.h \
    task3.h \
    task4.h

FORMS += \
    about.ui \
    authentication.ui \
    author.ui \
    dictionaryClaim.ui \
    dictionaryNom.ui \
    mainMenu.ui \
    newuser.ui \
    solution1.ui \
    solution2.ui \
    task1.ui \
    task2.ui \
    task3.ui \
    task4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
