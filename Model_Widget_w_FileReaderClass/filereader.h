#ifndef FILEREADER_H
#define FILEREADER_H
#include <QString>
#include <filemodel.h>

class FileReader
{
public:
    FileReader();

    void fill_model(QString path);
    FileModel model_;

signals:

public slots:
};

#endif // FILEREADER_H
