#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "natlan.h"
#include <iostream>
#include <windows.h>
#include <QString>
#include <string>

Natlan::Natlan(QString inputText2) :
    inputText(inputText2)
{}

void Natlan::executeNatlan(MainWindow * const & w2){
    //QString qstr = QString::fromStdString(str);
    //String sometihng = qs.toStdString();
    std::string input = inputText.toStdString();
    input = preprocessInput(input);
    size_t found = input.find("hello");
    if(found!=std::string::npos){
        w2->appendLine("Hey there ;)", "output");
    }
}

std::string Natlan::preprocessInput(std::string preInput){
    for(int i=0; i<preInput.size(); i++){
        preInput[i] = tolower(preInput[i]);
    }
    return preInput;
}
