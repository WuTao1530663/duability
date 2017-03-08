#ifndef FIRSTDIALOG_H
#define FIRSTDIALOG_H

#include <QDialog>

namespace Ui {
class FirstDialog;
}

class FirstDialog : public QDialog
{
    Q_OBJECT

public:
    explicit FirstDialog(QWidget *parent = 0);
    ~FirstDialog();

private slots:
    void on_radioButton_19_clicked(bool checked);

private:
    Ui::FirstDialog *ui;
};

#endif // FIRSTDIALOG_H
