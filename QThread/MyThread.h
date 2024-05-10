#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QDebug>
class MyThread: public QThread{
    Q_OBJECT
public:
    MyThread(QObject* parent= nullptr);
    ~MyThread();
    void stop();
    void run();
private:
    bool flag;
    int num=0;
signals:
    void mySignal(int);
};

#endif // MYTHREAD_H
