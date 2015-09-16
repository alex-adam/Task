#ifndef MAINPROGRAMMPLUGIN_PLUGIN_H
#define MAINPROGRAMMPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class MainProgrammPluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // MAINPROGRAMMPLUGIN_PLUGIN_H

