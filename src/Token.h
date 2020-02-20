//
// Created by vladimir on 21.02.2020.
//

#ifndef CPP_COMPILER_TOKEN_H
#define CPP_COMPILER_TOKEN_H

#include <iostream>
#include "TokenType.h"

using namespace std;

class Token {
private:
    string text;
    TokenType tokenType;
};


#endif //CPP_COMPILER_TOKEN_H
