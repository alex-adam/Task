#ifndef ISS_H
#define ISS_H

#include <QQuickItem>
#include <QStringListModel>


class Iss : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(Iss)

    Q_PROPERTY(QStringListModel* test READ test NOTIFY testChanged)

public:
    Iss(QQuickItem *parent = 0);
    ~Iss();

    QStringListModel* test() ;


signals:
    void testChanged();

};

#endif // ISS_H

