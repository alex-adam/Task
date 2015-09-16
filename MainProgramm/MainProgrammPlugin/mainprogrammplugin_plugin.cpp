#include "mainprogrammplugin_plugin.h"
#include "filem.h"

#include <qqml.h>

void MainProgrammPluginPlugin::registerTypes(const char *uri)
{
    // @uri MainProgramm
    qmlRegisterType<FileM>(uri, 1, 0, "FileM");
}


