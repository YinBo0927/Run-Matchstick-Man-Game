#include "dialog.h"
#include "ui_dialog.h"
#include<QFile>
#include<QMessageBox>
//#include"dofile.h"
#include<QByteArray>
#include<QString>
#include<QDebug>
#define title ":/new/prefix1/image/game.png"
//#include"reg.h"
//#include"ui_reg.h"
//#include"reg.h"
Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Run Matchstick Man");
    this->setWindowIcon(QPixmap(title)); //设置应用图标
//    QSound *startsound=new QSound(back_sound,this);
//    startsound->play();//播放bgm
//    startsound->setLoops(-1); //设置单曲循环
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_okButton_clicked()
{
    static int count = 0;
    QString name = ui->usrlineEdit->text();
    QString pass = ui->pwdlineEdit->text();

    if((name!=NULL) && (pass!=NULL))
    {
        FILE * fp;            //定义一个文件流指针
        if((fp = fopen("usrinformation","r+"))==NULL)
        {
            perror("fail to open!");
        }
        char temp[300];
        while(fgets(temp,300,fp) != NULL)//从fp中读取一行存到temp里
        {
             qDebug()<<"正在检查是否是否有匹配的id和密码";
             QString dtn = QString(strtok(temp,":"));//按“：”进行分解，即账号位置
             QString dtp = QString(strtok(NULL,"\n"));//密码位置
             qDebug()<<dtn<<"  "<<dtp;
             if((dtn == name ) && (dtp == pass))
             {
                 accept();
                 count++;
             }
        }
        if(count == 0)
        {
            QMessageBox::critical(this,"错误！","密码或账号有误！");
        }
        fclose(fp);
    }
    else
    {
        QMessageBox::critical(this,"错误！","密码为空");
    }

}



void Dialog::on_regButton_clicked()
{
    regDialog *reg=new regDialog(this);
    reg->show();
}
