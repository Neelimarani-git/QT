#include "counter.h"

counter::counter(QObject *parent) : QObject(parent)
{
    qInfo() << this << "Constructor";
}

counter::~counter()
{
    qInfo() << this << "Destructor";
}

void counter::start()
{
    for(int i =0; i < 20; i ++)
    {
        qInfo() << QThread::currentThread()->objectName() << " = " << i;

        auto value = static_cast<unsigned long>(QRandomGenerator::global()->bounded(500));
        QThread::currentThread()->msleep(value);

        qInfo() << QThread::currentThread()->objectName() << "Complete";
    }

    qInfo() << this << "completed!!!!!!!!";

    deleteLater(); //destructor will call

    QThread::currentThread()->quit(); //finish function will call.
}
