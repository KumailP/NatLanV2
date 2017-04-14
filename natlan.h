#ifndef NATLAN_H
#define NATLAN_H


namespace Ui {
class Natlan;
}


class Natlan{
private:
    QString inputText;
public:
    Natlan(QString);
    void executeNatlan(MainWindow * const & w2);
    std::string preprocessInput(std::string preInput);
};

#endif // NATLAN_H
