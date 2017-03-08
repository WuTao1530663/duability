#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    firstDialog(NULL)

{

    createActions();
    createToolBars();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void
MainWindow::showFirstDialog(){
    /*if(!firstDialog){
    firstDialog = new FirstDialog(this);

    }


firstDialog->exec();
firstDialog->raise();
firstDialog->activateWindow();*/
    firstForm = new FirstForm(this);
    setCentralWidget(firstForm);

}
void MainWindow::on_FirstButton_clicked()
{
    showFirstDialog();
}

void MainWindow::createToolBars(){
    ToolBar = addToolBar(tr("����̼��"));
    ToolBar->addAction(firstDialogAction);
    ToolBar->addAction(secondDialogAction);
    ToolBar->addAction(thirdDialogAction);
    ToolBar->addAction(forthDialogAction);
    ToolBar->addAction(fifthDialogAction);


}

void MainWindow::createActions(){
    firstDialogAction = new QAction(QStringLiteral("����̼��"),this);
    connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    secondDialogAction = new QAction(QStringLiteral("������ʴ"),this);
   // connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    thirdDialogAction = new QAction(QStringLiteral("����ѭ��"),this);
 //   connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    forthDialogAction = new QAction(QStringLiteral("����������"),this);
  //  connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    fifthDialogAction = new QAction(QStringLiteral("�նȼ���"),this);
  //  connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
}
