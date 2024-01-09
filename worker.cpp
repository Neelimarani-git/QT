#include "worker.h"

worker::worker(QObject *parent) : QObject(parent)
{

}

void worker::work()
{

    for(int i = 0; i<10; i++)
    {
        qInfo() << "work" << i << QThread::currentThread();
        QThread::currentThread()-> msleep(1000);
    }

}
