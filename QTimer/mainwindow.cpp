#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tm = new QTimer(this);
    tm->setInterval(30);
    connect(tm, &QTimer::timeout, this, &MainWindow::go);

}

void MainWindow::run(){
    num++;
    if(num>100){
        tm->stop();
    }
    ui->bar->setValue(num);
}

void MainWindow::go(){
    tm->start();
    run();
}

void MainWindow::pause(){
    tm->stop();
}

void MainWindow::reset(){
    num=0;
    ui->bar->setValue(num);
}

MainWindow::~MainWindow()
{
    delete ui;
}
