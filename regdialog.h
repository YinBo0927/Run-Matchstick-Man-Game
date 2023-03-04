#ifndef REGDIALOG_H
#define REGDIALOG_H

#include <QDialog>

namespace Ui {
class regDialog;
}

class regDialog : public QDialog
{
    Q_OBJECT

public:
    explicit regDialog(QWidget *parent = nullptr);
    ~regDialog();

private slots:
    void on_pushButton_clicked();

private:
    Ui::regDialog *ui;
};

#endif // REGDIALOG_H
