//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
#include "Reader.h"

using namespace std;

Reader::Reader(const string& text) {
    this->text = text;
}

void Reader::ignoringSymbols() {
    bool canScanner = false;
    while (!canScanner) {
        canScanner = true;
        while (text[numberSymbol] == ' ' ||
               text[numberSymbol] == '\t' ||
               text[numberSymbol] == '\n' ||
               text[numberSymbol] == '\r') {
            addNumberSymbol();
            canScanner = false;
        }
        while (text[numberSymbol] == '/' && text[numberSymbol + 1] == '/') {
            while (text[numberSymbol] != '\n')
                addNumberSymbol();
            addNumberSymbol();
            canScanner = false;
        }
    }
}

void Reader::addNumberSymbol() {
    numberCol++;
    if(text[numberSymbol] == '\n') {
        numberRow++;
        numberCol = 1;
    }
    numberSymbol++;
}
