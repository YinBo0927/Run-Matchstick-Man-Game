#include "dialog.h"
#include"mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);   //固定语句，定义一个应用类

    Dialog login;                  //定义登录窗
    if(login.exec()==QDialog::Accepted)      //接收Accepted信号
    {
        MainWindow w;                      //定义主窗口
        w.show();                              //显示w窗口，即主窗口
        return a.exec();                    //固定语句，返回事件循环
    }
    else  return 0;
}
