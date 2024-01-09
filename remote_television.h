#ifndef REMOTE_TELEVISION_H
#define REMOTE_TELEVISION_H

#include <QObject>
#include <iostream>

class Remote : public QObject {
    Q_OBJECT

public:
    explicit Remote(QObject *parent = nullptr);
    void buttonPressed(int channel);

signals:
    void channelChanged(int channel);
};

class Television : public QObject {
    Q_OBJECT

public:
    explicit Television(QObject *parent = nullptr);

public slots:
    void changeChannel(int channel);
};

#endif // REMOTE_TELEVISION_H
