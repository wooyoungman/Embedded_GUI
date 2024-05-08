#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGridLayout>
#include <QPushButton>
#include <QDial>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

    QGridLayout *Grid;
    QPushButton *onBtn;
    QPushButton *offBtn;
    QLCDNumber *lcdNumber;
    QDial *dial;
    QWidget *mainWidget;

public slots:
    void clickOn();
    void clickOff();
    void setValue(int);

};
#endif // MAINWINDOW_H
