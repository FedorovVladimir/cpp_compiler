//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
#include "Reader.h"
#include "../logger/Logger.h"

using namespace std;

Reader::Reader(const string& text) {
    this->text = text;
}

void Reader::ignoringSymbols() {
    bool canScanner = false;
    while (!canScanner) {
        canScanner = true;
        while (isspace(text[numberSymbol])) {
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

bool isIdSymbol(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || c == '$' || c == '_';
}

Token Reader::nextScanner() {
    ignoringSymbols();

    if (isIdSymbol(text[numberSymbol])) {
        string str(1, text[numberSymbol]);
        addNumberSymbol();
        while (isIdSymbol(text[numberSymbol]) || isdigit(text[numberSymbol])) {
            str += text[numberSymbol];
            addNumberSymbol();
        }
        if (str == "double")
            return Token(DOUBLE);
        if (str == "int")
            return Token(INT);
        if (str == "char")
            return Token(CHAR);
        if (str == "string")
            return Token(STRING);
        if (str == "void")
            return Token(VOID);
        if (str == "while")
            return Token(WHILE);
        return Token(ID, str);
    }
    if (tokenCompareSymbols.find(text[numberSymbol]) != 4294967295) {
        int index = tokenCompareSymbols.find(text[numberSymbol]);
        addNumberSymbol();
        if (text[numberSymbol] == '=') {
            addNumberSymbol();
            return Token(tokenCompareEquallyMass[index]);
        } else
            return Token(tokenCompareMass[index]);
    }
    if (text[numberSymbol] == '\'') {
        addNumberSymbol();
        if(text[numberSymbol + 1] == '\'') {
            numberSymbol += 2;
            string str(1, text[numberSymbol - 2]);
            return Token(TYPE_CHAR, str);
        } else {
            error("Read error TYPE_CHAR");
            return Token(ERROR);
        }
    }
    if (text[numberSymbol] == '\"') {
        addNumberSymbol();
        string str;
        while (text[numberSymbol] != '\"' && text[numberSymbol] != '\n') {
            str += text[numberSymbol];
            addNumberSymbol();
        }
        if (text[numberSymbol] == '\"') {
            addNumberSymbol();
            return Token(TYPE_STRING, str);
        } else {
            error("Read error TYPE_STRING");
            return Token(ERROR);
        }
    }
    if (isdigit(text[numberSymbol])) {
        string str(1, text[numberSymbol]);
        addNumberSymbol();
        while (isdigit(text[numberSymbol])) {
            str += text[numberSymbol];
            addNumberSymbol();
        }
        if (text[numberSymbol] == '.') {
            str += text[numberSymbol];
            addNumberSymbol();
            while (isdigit(text[numberSymbol])) {
                str += text[numberSymbol];
                addNumberSymbol();
            }
            try {
                stod(str);
                return Token(TYPE_DOUBLE, str);
            } catch (...) {
                error("Read error TYPE_DOUBLE");
                return Token(ERROR);
            }
        } else {
            try {
                stoi(str);
                return Token(TYPE_INT, str);
            } catch (...) {
                error("Read error TYPE_INT");
                return Token(ERROR);
            }
        }
    }
    if (tokenMathSymbols.find(text[numberSymbol]) != 4294967295) {
        int index = tokenMathSymbols.find(text[numberSymbol]);
        addNumberSymbol();
        return Token(tokenMathMass[index]);
    }
    if (text[numberSymbol] == '\0')
        return Token(EOFILE);
    else {
        char ch = text[numberSymbol];
        addNumberSymbol();
        string s(1, ch);
        error("Unknown character \'" + s + "\'");
        return Token(ERROR);
    }
}
