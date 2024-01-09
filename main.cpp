// for multiple reuasable threads // fully multi threaded application
// highly memory  efficient , we don"t have to worry about memory management
//not creating millions of thread.
//QThreadpool and QRunnable

//let threadpool do the work for you.

#include <QCoreApplication>
#include<QDebug>
#include<QThread>
#include<QThreadPool>
#include "counter.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main"); //main thread

    QThreadPool* pool = QThreadPool::globalInstance();
    qInfo() << pool ->maxThreadCount() << "Threads";

    for(int i = 0; i < 100; i++)
    {
        Counter* c = new Counter();
        c->setAutoDelete(true);
        pool-> start(c);

    }

    return a.exec();
}
