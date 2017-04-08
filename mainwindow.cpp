#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->mainPlainTextEdit->setEnabled(false);
    ui->mainPlainTextEdit->setReadOnly(true);
    ui->mainPlainTextEdit->appendHtml("<strong>NATLAN: </strong>Hello there.");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_GOtoolbtn_clicked()
{
    QString inputText = "<strong>YOU: </strong>";
    if(ui->mainLineEdit->text()!=NULL){
        inputText += ui->mainLineEdit->text();
        ui->mainPlainTextEdit->appendHtml(inputText);
        ui->mainLineEdit->clear();
    }
}


void MainWindow::on_mainLineEdit_returnPressed()
{
    on_GOtoolbtn_clicked();
}
