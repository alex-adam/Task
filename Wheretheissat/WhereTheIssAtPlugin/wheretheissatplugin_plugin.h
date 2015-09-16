#ifndef WHERETHEISSATPLUGIN_PLUGIN_H
#define WHERETHEISSATPLUGIN_PLUGIN_H

#include <QQmlExtensionPlugin>

class WhereTheIssAtPluginPlugin : public QQmlExtensionPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID "org.qt-project.Qt.QQmlExtensionInterface")

public:
    void registerTypes(const char *uri);
};

#endif // WHERETHEISSATPLUGIN_PLUGIN_H

