#ifndef WORKER_H
#define WORKER_H

#include<QSemaphore>
#include<QList>
#include<QDebug>
#include<QThread>
#include<QRandomGenerator>
#include <QObject>

class Worker : public QObject
{
    Q_OBJECT
public:
    explicit Worker(QSemaphore *sema, QList<int>*values,QObject* parent = nullptr);

signals:

public slots:
    void run();

private:
    QSemaphore *m_sema;
    QList<int> *m_values;
};

#endif // WORKER_H
