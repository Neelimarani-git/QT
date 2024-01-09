#include <QCoreApplication>
<<<<<<< HEAD

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

=======
#include "remote_television.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Remote remoteObject;
    Television tvObject;

    QObject::connect(&remoteObject, SIGNAL(channelChanged(int)), &tvObject, SLOT(changeChannel(int)));

    remoteObject.buttonPressed(10);

>>>>>>> 7103f812a8df75608c3f579f17c24ad426ec6e7c
    return a.exec();
}
