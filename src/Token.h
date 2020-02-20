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

public:
    explicit Token(TokenType tokenType);

    explicit Token(TokenType tokenType, string text);

    [[nodiscard]] const string &getText() const;

    [[nodiscard]] TokenType getTokenType() const;

    friend ostream &operator<<(ostream &os, const Token &token);
};


#endif //CPP_COMPILER_TOKEN_H
