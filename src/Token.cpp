//
// Created by vladimir on 21.02.2020.
//

#include "Token.h"
#include <utility>

using namespace std;

Token::Token(TokenType tokenType) {
    this->tokenType = tokenType;
    this->text = nullptr;
}

Token::Token(TokenType tokenType, string text) {
    this->tokenType = tokenType;
    this->text = move(text);
}

const string &Token::getText() const {
    return text;
}

TokenType Token::getTokenType() const {
    return tokenType;
}

ostream &operator<<(ostream &os, const Token &token) {
    os << "text: " << token.text << " tokenType: " << token.tokenType;
    return os;
}
