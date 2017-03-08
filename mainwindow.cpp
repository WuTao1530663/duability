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
    ToolBar = addToolBar(tr("大气碳化"));
    ToolBar->addAction(firstDialogAction);
    ToolBar->addAction(secondDialogAction);
    ToolBar->addAction(thirdDialogAction);
    ToolBar->addAction(forthDialogAction);
    ToolBar->addAction(fifthDialogAction);


}

void MainWindow::createActions(){
    firstDialogAction = new QAction(QStringLiteral("大气碳化"),this);
    connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    secondDialogAction = new QAction(QStringLiteral("氯盐侵蚀"),this);
   // connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    thirdDialogAction = new QAction(QStringLiteral("冻融循环"),this);
 //   connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    forthDialogAction = new QAction(QStringLiteral("承载力计算"),this);
  //  connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
    fifthDialogAction = new QAction(QStringLiteral("刚度计算"),this);
  //  connect(firstDialogAction,SIGNAL(triggered()),this,SLOT(showFirstDialog()));
}
