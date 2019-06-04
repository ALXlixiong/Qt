#include "mainwindow.h"
#include <QApplication> //Qt头文件



//快速注释：ctrl + /
//查找：ctrl + f
//自动对齐：ctrl + i
//同名之间的.h和.cpp之间切换：F4
//帮助文档：选中F1，再按F1全屏，ESC退出



int main(int argc, char *argv[])
{
    //a 是一个应用程序对象，在Qt中，应用程序对象只能有一个
    QApplication a(argc, argv);
    //创建一个窗口对象
    MainWindow w;
    //窗口对象只有调用show函数，才可以显示界面
    w.show();//默认是顶层弹出，也就是单独弹出一个窗口

    return a.exec();//进入消息循环机制，不会一闪而过，相如system("pause");
}

