/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QGridLayout *gridLayout;
    QFrame *frame;
    QLineEdit *usrlineEdit;
    QPushButton *okButton;
    QLineEdit *pwdlineEdit;
    QPushButton *regButton;
    QFrame *frame_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(1280, 720);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Dialog->sizePolicy().hasHeightForWidth());
        Dialog->setSizePolicy(sizePolicy);
        Dialog->setMinimumSize(QSize(1280, 720));
        Dialog->setMaximumSize(QSize(16777215, 16777215));
        Dialog->setBaseSize(QSize(4, 0));
        Dialog->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(Dialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(Dialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
"border:sold 10px rgba(0,0,0);\n"
"background-image: url(:/new/prefix1/image/background0.png);\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        usrlineEdit = new QLineEdit(frame);
        usrlineEdit->setObjectName(QString::fromUtf8("usrlineEdit"));
        usrlineEdit->setGeometry(QRect(710, 270, 421, 81));
        usrlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:30px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        usrlineEdit->setEchoMode(QLineEdit::Password);
        okButton = new QPushButton(frame);
        okButton->setObjectName(QString::fromUtf8("okButton"));
        okButton->setGeometry(QRect(710, 370, 421, 51));
        okButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 75 15pt \"Fixedsys\";\n"
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
        pwdlineEdit = new QLineEdit(frame);
        pwdlineEdit->setObjectName(QString::fromUtf8("pwdlineEdit"));
        pwdlineEdit->setGeometry(QRect(710, 180, 421, 81));
        pwdlineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"color:#8d98a1;\n"
"background-color:#405361;\n"
"font-size:30px;\n"
"border-style:outset;\n"
"border-radius:10px;\n"
"font-style:MingLiU-ExtB;\n"
"}"));
        regButton = new QPushButton(frame);
        regButton->setObjectName(QString::fromUtf8("regButton"));
        regButton->setGeometry(QRect(710, 440, 421, 51));
        regButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font: 75 15pt \"Fixedsys\";\n"
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
        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(110, 130, 431, 411));
        frame_2->setStyleSheet(QString::fromUtf8("image: url(:/new/prefix1/image/game.png);\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout->addWidget(frame, 0, 0, 1, 1);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        usrlineEdit->setInputMask(QString());
        usrlineEdit->setPlaceholderText(QCoreApplication::translate("Dialog", "Password", nullptr));
        okButton->setText(QCoreApplication::translate("Dialog", "Login", nullptr));
        pwdlineEdit->setPlaceholderText(QCoreApplication::translate("Dialog", "Username", nullptr));
        regButton->setText(QCoreApplication::translate("Dialog", "Register", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
