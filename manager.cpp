#include "manager.h"

manager::manager(QObject *parent)
    : QObject{parent}
{
    for(int i=0; i < 5; i++)
    {
        QThread* thread = new QThread(this);
        thread ->setObjectName("Thread" + QString::number(i));
        qInfo() << "Created: " << thread->objectName();

        connect(thread,&QThread::started,this, &manager::started);
        connect(thread,&QThread::finished,this, &manager::finished);

        threads.append(thread);
    }
}

void manager::start()
{
    qInfo()<< "Starting...";

    foreach(QThread* thread, threads)
    {
        qInfo() <<"starting: " <<thread->objectName();
        counter* c = new counter(); // raw pointer!! not good all sources for memory leaks.
        c->moveToThread(thread);

        connect(thread,&QThread::started, c, &counter::start);

        thread ->start();
    }
}

void manager::started()
{
    qInfo() <<"started" << sender();
    QThread* thread = qobject_cast<QThread*>(sender());
    if(!thread)
        return;

    qInfo() << " started " << thread->objectName();

}

void manager::finished()
{
    qInfo() <<" finishing " << sender();
    QThread* thread = qobject_cast<QThread*>(sender());

    if(!thread)
        return;

    qInfo()<< " children " << thread->children().length();
    qInfo() << "finished" << thread->objectName();

    threads.removeAll(thread); //dangling pointer solution (Manager object is deleting so it"s child object becomes dangling pointer)
    delete thread;

}
