//
// Created by vladimir on 21.02.2020.
//

#ifndef CPP_COMPILER_TOKEN_H
#define CPP_COMPILER_TOKEN_H

#include <iostream>
#include "TokenType.h"

using namespace std;

/**
 * Класс для храниния и передачи лексем в компиляторе
 */
class Token {

private:
    /**
     * Текст лексемы (может отсутствовать)
     */
    string text;

    /**
     * Тип лексемы
     */
    TokenType tokenType;

public:
    /**
     * Конструктор сосздания лексемы без текста
     * @param tokenType тип лексемы
     */
    explicit Token(TokenType tokenType);

    /**
     * Констуктор создания лексемы
     * @param tokenType тип лексемы
     * @param text текст лексемы
     */
    explicit Token(TokenType tokenType, string text);

    /**
     * Метод для получения текста лексемы
     * @return текст лексемы (может быть nullptr)
     */
    [[nodiscard]] const string &getText() const;

    /**
     * Метод получения типа лексемы
     * @return тип лексемы
     */
    [[nodiscard]] TokenType getTokenType() const;

    /**
     * Перегдузка << для вывода лексемы
     * @param os поток вывода
     * @param token лексема для вывода
     * @return поток вывода
     */
    friend ostream &operator<<(ostream &os, const Token &token);
};


#endif //CPP_COMPILER_TOKEN_H
