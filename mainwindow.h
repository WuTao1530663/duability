#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<QTextCodec>
#include"firstdialog.h"
#include"firstform.h"
#include"form.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_FirstButton_clicked();
    void showFirstDialog();
private:
    void createToolBars();

    void createActions();

private:
    Form *mainWindow;
    Ui::MainWindow *ui;
    FirstDialog *firstDialog;
    QString title;
    QToolBar *ToolBar;
    FirstForm *firstForm;
    QAction *firstDialogAction; 
    QAction *secondDialogAction;
    QAction *thirdDialogAction;
    QAction *forthDialogAction;
    QAction *fifthDialogAction;
};

#endif // MAINWINDOW_H
