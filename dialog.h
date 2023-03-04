#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include"regbag.h"
#include"regdialog.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Dialog; }
QT_END_NAMESPACE

class Dialog : public QDialog
{
    Q_OBJECT

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();

private slots:
    //void on_pushButton_clicked();

    void on_okButton_clicked();

    //void on_pushButton_2_clicked();

    //void on_regpushButton_clicked();

    void on_regButton_clicked();

private:
    Ui::Dialog *ui;
    regDialog *reg;
};
#endif // DIALOG_H
