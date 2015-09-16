#include "wheretheissatplugin_plugin.h"
#include "iss.h"

#include <qqml.h>

void WhereTheIssAtPluginPlugin::registerTypes(const char *uri)
{
    // @uri WhereTheIssAt
    qmlRegisterType<Iss>(uri, 1, 0, "Iss");
    qmlRegisterType<QStringListModel>(uri, 1, 0, "QStringLM");

}


