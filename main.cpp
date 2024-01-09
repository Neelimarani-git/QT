#include <QCoreApplication>
#include "remote_television.h"

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    Remote remoteObject;
    Television tvObject;

    QObject::connect(&remoteObject, SIGNAL(channelChanged(int)), &tvObject, SLOT(changeChannel(int)));

    remoteObject.buttonPressed(10);

    return a.exec();
}
