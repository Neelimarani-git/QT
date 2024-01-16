#include "counter.h"



Counter::Counter(QMutex *mutex, int *value)
{
    m_value = value;
    m_mutex = mutex;
}


void Counter::run()
{
    //wait untill we do stuff

    m_mutex->lock();  //WE WILL WAIT utill unlock


    //Our code here
    QThread::currentThread()->msleep(500);
    *m_value = *m_value +1;

    qInfo() <<*m_value << QThread::currentThread();



    m_mutex->unlock();  // other threads can lock


}
