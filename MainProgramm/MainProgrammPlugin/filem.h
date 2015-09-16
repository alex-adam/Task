#ifndef FILEM_H
#define FILEM_H

#include <QQuickItem>

class FileM : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(FileM)

public:
    FileM(QQuickItem *parent = 0);
    ~FileM();
};

#endif // FILEM_H

