#include "regdialog.h"
#include "ui_regdialog.h"
#include<QDebug>
#include<QMessageBox>
#define title ":/new/prefix1/image/game.png"
regDialog::regDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::regDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Run Matchstick Man");
    this->setWindowIcon(QPixmap(title)); //设置应用图标
}

regDialog::~regDialog()
{
    delete ui;
}

void regDialog::on_pushButton_clicked()
{
    QString name = ui->usrlineEdit->text();
    QString pass = ui->pwdlineEdit->text();
    QString pass2 = ui->pwdlineEdit2->text();
    if((name != "")&&(pass != "")&&(pass2 != "") )
    {
       if(pass == pass2)
       {
          qDebug()<<"格式正确";
          FILE * fp;            //定义一个文件流指针
          if((fp = fopen("usrinformation","r+"))==NULL)
          {
              perror("fail to open!");
          }
          char temp[300];
          while(fgets(temp,300,fp) != NULL)
          {
               qDebug()<<"正在检查是否重名";
               QString dtn = QString(strtok(temp,":"));
               if(dtn == name)
               {
                   QMessageBox::critical(this,"错误","该用户名已经存在");
                   return ;
               }
          }
          fclose(fp);

          FILE * fp1;
          if((fp1 = fopen("usrinformation","a+"))==NULL)
          {
              perror("fail to fopen");
          }
          else
          {
               QByteArray qtname = ui->usrlineEdit->text().toLatin1();
               QByteArray qtpass = ui->pwdlineEdit->text().toLatin1();
               char * tn = qtname.data();
               char * tp = qtpass.data();
               fputs(tn,fp);
               fputs(":",fp);
               fputs(tp,fp);
               fputs("\n",fp);
               qDebug()<<" 写入文件成功";
               QMessageBox::information(this,"恭喜","注册成功！");

          }
          fclose(fp1);
       }
       else
       {
           QMessageBox::critical(this,"错误","两次输入的密码不一致！");
       }
    }
    else
    {
        QMessageBox::critical(this,"错误","密码或账号为空！");
    }
}
