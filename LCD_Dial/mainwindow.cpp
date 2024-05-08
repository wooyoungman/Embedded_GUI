#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QDebug"

bool flag=false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    onBtn = new QPushButton("ON");
    offBtn = new QPushButton("OFF");
    connect(onBtn,SIGNAL(clicked()),this,SLOT(clickOn()));
    connect(offBtn,SIGNAL(clicked()),this,SLOT(clickOff()));

    lcdNumber = new QLCDNumber();

    dial = new QDial();
    connect(dial, SIGNAL(valueChanged(int)), this, SLOT(setValue(int)));

    Grid = new QGridLayout();
    Grid->addWidget(onBtn);
    Grid->addWidget(offBtn);
    Grid->addWidget(lcdNumber);
    Grid->addWidget(dial);

    mainWidget = new QWidget();
    mainWidget->setLayout(Grid);
    this->setCentralWidget(mainWidget);
}

void MainWindow::clickOn(){
    flag=true;
    qDebug()<<"ON";
}

void MainWindow::clickOff(){
    flag=false;
    qDebug()<<"OFF";
}

void MainWindow::setValue(int val){
    if(flag){
        this->lcdNumber->display(val);
    }
    else{
        this->lcdNumber->display("OFF");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
