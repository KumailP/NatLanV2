#ifndef NATLANCHAT_H
#define NATLANCHAT_H

#include <QMainWindow>

namespace Ui {
class NatlanChat;
}

class NatlanChat : public QMainWindow
{
    Q_OBJECT

public:
    explicit NatlanChat(QWidget *parent = 0);
    ~NatlanChat();

private slots:

    void on_pushButton_clicked();

    void on_lineEdit_returnPressed();

private:
    Ui::NatlanChat *ui;
};

#endif // NATLANCHAT_H
