//
// Created by vladimir on 20.02.2020.
//

#ifndef CPP_COMPILER_READER_H
#define CPP_COMPILER_READER_H

#include <fstream>
#include "TokenType.h"

using namespace std;

/**
 * Класс для парсинка лексем из текста
 */
class Reader {

private:

    /**
     * Текст для обработки
     */
    string text;

    /**
     * Номер обрабатываемой строки
     */
    int numberRow = 1;

    /**
     * Номер вобабатываемого столбца
     */
    int numberCol = 1;

    /**
     * Номер обрабатываемого символа
     */
    int numberSymbol = 0;

    string tokenMathSymbols = "+-/*%;(){},[]";
    TokenType tokenMathMass[13] = {PLUS, MINUS, SLASH, STAR, PERCENT, SEMICOLON, OPEN_PARENTHESIS, CLOSE_PARENTHESIS,
                                   OPEN_CURLY_BRACE, CLOSE_CURLY_BRACE, COMMA, OPEN_SQUARE, CLOSE_SQUARE};
    string tokenCompareSymbols = "<>=!";
    TokenType tokenCompareMass[4] = {LESS, GREAT, ASSIGN, NOT};
    TokenType tokenCompareEquallyMass[4] = {LESS_EQUALLY, GREAT_EQUALLY, EQUALLY, NOT_EQUALLY};

public:

    explicit Reader(const string& text);
};

#endif //CPP_COMPILER_READER_H
