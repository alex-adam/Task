TEMPLATE = app

QT += qml quick
CONFIG += c++11
CONFIG -= app_bundle

SOURCES += main.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH = /USERS/adaalex/Development/QT_Test/Task/MainProgramm/MainProgrammPlugin/ #./MainProgrammPlugin/

# Default rules for deployment.
include(deployment.pri)

