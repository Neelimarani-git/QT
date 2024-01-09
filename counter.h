#ifndef COUNTER_H
#define COUNTER_H

#include <QObject>
#include<QDebug>
#include<QThread>
#include<QRunnable>
#include<QRandomGenerator>


class Counter : public QRunnable
{
public:
    Counter();

public:
    void run(); //QRunnable interface
};

#endif // COUNTER_H
