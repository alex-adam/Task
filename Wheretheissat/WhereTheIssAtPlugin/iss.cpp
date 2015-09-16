#include "iss.h"
#include <QDir>
#include <QStringListModel>

Iss::Iss(QQuickItem *parent):
    QQuickItem(parent)
{
    // By default, QQuickItem does not draw anything. If you subclass
    // QQuickItem to create a visual item, you will need to uncomment the
    // following line and re-implement updatePaintNode()

    // setFlag(ItemHasContents, true);
}

QStringListModel* Iss::test() {

    QStringList fileNames;
    QDir dir("/Users/adaalex/Pictures/");
    dir.setFilter(QDir::Files | QDir::NoSymLinks);

    fileNames = dir.entryList();

    QStringListModel *model = new QStringListModel(fileNames, this) ;
    return model;
}




Iss::~Iss()
{
}

