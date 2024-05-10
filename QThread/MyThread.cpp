#include "MyThread.h"

MyThread::MyThread(QObject *parent)
    :QThread(parent)
{
    qDebug()<<"Hello Thread";
}
MyThread::~MyThread(){
    qDebug()<<"Bye Thread";
}

void MyThread::run(){
    flag=true;
    while(flag){
        emit mySignal(num++);
        qDebug()<<"Thread : Emit!";
        QThread::sleep(1);
    }
}
void MyThread::stop(){
    flag=false;
    qDebug()<<"Thread Stop";
}
