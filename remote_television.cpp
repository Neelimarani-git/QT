#include "remote_television.h"

Remote::Remote(QObject *parent) : QObject(parent) {}

void Remote::buttonPressed(int channel) {
    std::cout << "Remote sends a signal to change the channel" << std::endl;
    emit channelChanged(channel);
}

Television::Television(QObject *parent) : QObject(parent) {}

void Television::changeChannel(int channel) {
    std::cout << "TV Switches to channel " << channel << std::endl;
}
