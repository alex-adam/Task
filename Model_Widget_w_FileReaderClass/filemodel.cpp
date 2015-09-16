#include "filemodel.h"

FileModel::FileModel(QObject *parent) : QAbstractItemModel(parent)
{

}


QVariant FileModel::data(const QModelIndex &index, int role) const {

    if (role == Qt::DisplayRole)
    {
        return selected_files.at(index.row());
    }
    else
    {
        return QVariant();
    }

}


QModelIndex FileModel::index(int row, int column, const QModelIndex &/* parent*/) const
{
      return createIndex(row,column);
}

QModelIndex FileModel::parent(const QModelIndex & index) const
{
    //TODO: Use index? For what...?
    return QModelIndex();
}

int FileModel::rowCount(const QModelIndex & /*parent*/) const
{
      return selected_files.count();
}



int FileModel::columnCount(const QModelIndex & /*parent*/) const
{
      return 1;
}


void FileModel::set_data(const QStringList &data)
{
    beginResetModel();
    selected_files = data;
    endResetModel();
}
