#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    th=new MyThread();
    QObject::connect(th,&MyThread::mySignal,this,&MainWindow::counting);
}

void MainWindow::counting(int num){

    ui->lcdNumber->display(num * (-1));
    ui->lcdNumber_2->display(num);

}

void MainWindow::start(){
    th->start();
    qDebug()<<"start";
}

void MainWindow::stop(){
    th->stop();
    qDebug()<<"stop";
}

MainWindow::~MainWindow()
{
    th->stop();
    delete ui;
}
