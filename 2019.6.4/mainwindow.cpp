#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    QPushButton *button = new QPushButton;
//    button->show();
//    button->setParent(this);//让依赖MainWindow
//    //让按钮显示文本
//    button->setText("按钮");
    QPushButton *button = new QPushButton("按钮",this);
    resize(600,400);
    button->move(100,100);

    //设置窗口标题
    setWindowTitle("first");
    //禁止窗口拖拽大小
    setFixedSize(600,400);
}

MainWindow::~MainWindow()
{
    delete ui;
}

