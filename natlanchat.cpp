#include "natlanchat.h"
#include "ui_natlanchat.h"
#include <QString>
NatlanChat::NatlanChat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::NatlanChat)
{
    ui->setupUi(this);

    ui->plainTextEdit->setDisabled(true);
}

NatlanChat::~NatlanChat()
{
    delete ui;
}

void NatlanChat::on_pushButton_clicked()
{
    QString inputText = "YOU: ";
    if(ui->lineEdit->text()!=NULL){
        inputText = ui->lineEdit->text();
        ui->plainTextEdit->appendPlainText(inputText);
        ui->lineEdit->clear();
    }
}
