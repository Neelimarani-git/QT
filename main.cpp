#include <QCoreApplication>
#include<QThread>
#include "worker.h"
#include"test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setObjectName("Main thread");

    Test thread;
    thread.setObjectName("Thread 1");

    worker work;
    work.moveToThread(&thread);


    QObject::connect(&thread,&QThread::started,&work,&worker::work);
    thread.start();
    return a.exec();
}
