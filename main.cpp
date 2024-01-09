//Wait for finished.

#include <QCoreApplication>
#include<QThread>
#include <QtConcurrent>
#include<QFuture>

void test(QString name, int max)
{
    for(int i=0; i< max; i++)
    {
        qInfo() << name << i << QThread::currentThread();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QString name ="name";
    QFuture<void> future =QtConcurrent::run(test,name,6);

    qInfo() <<"Do stuff here";

    future.waitForFinished();

    qInfo() << "END" ;  //Block.

    return a.exec();
}
