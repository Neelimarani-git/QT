#ifndef FIRSTCODE_H
#define FIRSTCODE_H

#include <QObject>

class firstcode : public QObject
{
    Q_OBJECT
public:
    explicit firstcode(QObject *parent = nullptr);

signals:
};

#endif // FIRSTCODE_H
