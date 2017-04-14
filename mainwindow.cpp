#include "mainwindow.h"
#include <iostream>
#include "ui_mainwindow.h"
#include "natlan.h"
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
    QString inputText;
    if(ui->mainLineEdit->text()!=NULL){
        inputText = ui->mainLineEdit->text();

        appendLine(inputText, "input");
        ui->mainLineEdit->clear();
        Natlan newInput(inputText);
        newInput.executeNatlan(this);
    }
}

void MainWindow::appendLine(QString inputLine, std::string io){
    QString output;
    if(io=="output"){
        output = "<strong>NATLAN: </strong>";
    }else{
        output = "<strong>ME: </strong>";
    }
    output += inputLine;
    ui->mainPlainTextEdit->appendHtml(output);
}

void MainWindow::on_mainLineEdit_returnPressed()
{
    on_GOtoolbtn_clicked();
}

void MainWindow::on_actionExit_triggered()
{
    close();
}
