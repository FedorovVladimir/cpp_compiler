//
// Created by vladimir on 20.02.2020.
//

#ifndef CPP_COMPILER_READER_H
#define CPP_COMPILER_READER_H

#include <fstream>

using namespace std;

class Reader {
private:
    int numberRow = 1;
    int numberCol = 1;
    int numberSymbol = 0;
    string text;
public:
    explicit Reader(const string& text);
};


#endif //CPP_COMPILER_READER_H
