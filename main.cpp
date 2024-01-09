//Multi threading
//Syncronous_code

#include <QCoreApplication>
#include<QThread>


void test()
{
    qInfo() << "Testing" << QThread::currentThread();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread::currentThread()->setObjectName("Main Thread");
    qInfo() << "Starting"<< QThread::currentThread();
    test();
    qInfo()<< "Finishing" <<QThread::currentThread();
    return a.exec();
}
