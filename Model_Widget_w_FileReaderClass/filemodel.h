#ifndef FILEMODEL_H
#define FILEMODEL_H

#include <QString>
#include <QAbstractItemModel>

//Holds the Data of the files
class FileModel : public QAbstractItemModel
{
    Q_OBJECT

private:
    QStringList selected_files;

public:
    FileModel(QObject *parent = 0);

    virtual QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
    virtual QModelIndex index(int row, int column, const QModelIndex &parent) const;
    virtual QModelIndex parent(const QModelIndex &index) const;
    virtual int rowCount(const QModelIndex &parent = QModelIndex()) const;
    virtual int columnCount(const QModelIndex &parent = QModelIndex()) const;
    void set_data(const QStringList&);

signals:

public slots:
};

#endif // FILEMODEL_H
