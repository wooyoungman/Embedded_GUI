#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowTitle("LCD Dial PJ");
    w.setGeometry(0,0,300,600);
    w.show();
    return a.exec();
}
