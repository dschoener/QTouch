TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    MenuItem.cpp \
    MenuSettings.cpp \
    MenuExit.cpp \
    MenuController.cpp \
    MenuModel.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    MenuItem.hpp \
    MenuSettings.hpp \
    MenuExit.hpp \
    MenuController.hpp \
    MenuModel.hpp

DISTFILES += \
    MainMenu.qml
