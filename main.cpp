#include <QCoreApplication>
#include<QDebug>
#include<QThread>
#include "manager.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QThread::currentThread()->setObjectName("Main");

    manager m= new manager();
    m.start();

    return a.exec();
}


