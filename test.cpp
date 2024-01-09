#include "test.h"

Test::Test(QObject *parent): QThread(parent)
{

}

void Test::run()
{

    m_timer.singleShot(3000,this,&Test::test);
    test();
}

void Test::test()
{
    //this runs last
    qInfo() << "Testing" << currentThread();

    terminate();

    //bad things goingo t happend here.

}
