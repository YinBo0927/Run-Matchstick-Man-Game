/********************************************************************************
** Form generated from reading UI file 'regdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGDIALOG_H
#define UI_REGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_regDialog
{
public:
    QFrame *frame;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *usrlineEdit;
    QLineEdit *pwdlineEdit;
    QLineEdit *pwdlineEdit2;

    void setupUi(QDialog *regDialog)
    {
        if (regDialog->objectName().isEmpty())
            regDialog->setObjectName(QString::fromUtf8("regDialog"));
        regDialog->resize(576, 403);
        regDialog->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(regDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(-1, -7, 581, 411));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:sold 10px rgba(0,0,0);\n"
"background-image: url(:/new/prefix1/image/background1.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(180, 270, 91, 41));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(224,0,0);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(320, 270, 91, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background:#ced1d8;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}\n"
"QPushButton:pressed{\n"
"background-color:rgb(224,0,0);\n"
"border-style:inset;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        usrlineEdit = new QLineEdit(frame);
        usrlineEdit->setObjectName(QString::fromUtf8("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(180, 113, 231, 41));
        usrlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:30px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        pwdlineEdit = new QLineEdit(frame);
        pwdlineEdit->setObjectName(QString::fromUtf8("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(180, 160, 231, 41));
        pwdlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:30px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        pwdlineEdit->setEchoMode(QLineEdit::Password);
        pwdlineEdit2 = new QLineEdit(frame);
        pwdlineEdit2->setObjectName(QString::fromUtf8("pwdlineEdit2"));
        pwdlineEdit2->setGeometry(QRect(180, 210, 231, 41));
        pwdlineEdit2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:30px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        pwdlineEdit2->setEchoMode(QLineEdit::Password);

        retranslateUi(regDialog);
        QObject::connect(pushButton_2, SIGNAL(clicked()), regDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(regDialog);
    } // setupUi

    void retranslateUi(QDialog *regDialog)
    {
        regDialog->setWindowTitle(QCoreApplication::translate("regDialog", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("regDialog", "OK", nullptr));
        pushButton_2->setText(QCoreApplication::translate("regDialog", "EXit", nullptr));
        usrlineEdit->setPlaceholderText(QCoreApplication::translate("regDialog", "Username", nullptr));
        pwdlineEdit->setPlaceholderText(QCoreApplication::translate("regDialog", "Password", nullptr));
        pwdlineEdit2->setPlaceholderText(QCoreApplication::translate("regDialog", "Password again", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regDialog: public Ui_regDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGDIALOG_H
