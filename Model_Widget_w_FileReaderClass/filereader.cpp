#include "filereader.h"
#include <QString>
#include <QDir>



FileReader::FileReader()
{
    //FileModel *model_ = new FileModel(parent);
}

void FileReader::fill_model(QString path_)
{
    QStringList fileNames;
    QDir dir(path_);
    dir.setFilter(QDir::Files | QDir::NoSymLinks);

    fileNames = dir.entryList();


    model_.set_data(fileNames);
}
