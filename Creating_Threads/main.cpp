<<<<<<< HEAD
#include <QCoreApplication>
#include<QDebug>
#include<QThread>
#include<QThreadPool>
#include<QMutex>
#include "counter.h"
=======
//Multi threading
//ASyncronous_code

#include <QCoreApplication>
#include <QThread>
#include <QTimer>

void test()
{
    qInfo() << "Testing" << QThread::currentThread();
}
>>>>>>> 275ca0400f7c7ed12f1abc4450cb9ab9c2a98662


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

<<<<<<< HEAD
    QThread::currentThread()->setObjectName("Main");
    QThreadPool* pool = QThreadPool::globalInstance();

    QMutex mutex;
    int value =0;

    qInfo()<< pool->maxThreadCount() <<" Threads ";

    for(int i=0; i <100; i++)
    {
        Counter* c =new Counter(&mutex,&value);
        c->setAutoDelete(true);
        pool-> start(c);
    }
=======
    QThread::currentThread()->setObjectName("Main Thread");

    qInfo() << "Starting" << QThread::currentThread();
    QTimer timer;
    timer.singleShot(3000,&test);
    qInfo() << "Finished" << QThread::currentThread();

>>>>>>> 275ca0400f7c7ed12f1abc4450cb9ab9c2a98662
    return a.exec();
}
