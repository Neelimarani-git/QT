#ifndef TEST_H
#define TEST_H

#include<QObject>
#include<QThread>
#include<QTimer>
#include<QDebug>


class Test : public QThread
{
    Q_OBJECT
public:
    explicit Test(QObject *parent = nullptr);

signals:

protected:
    void run();

private:
    void test();
    QTimer m_timer;


};

#endif // TEST_H
