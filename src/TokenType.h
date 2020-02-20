//
// Created by vladimir on 21.02.2020.
//

#ifndef CPP_COMPILER_TOKENTYPE_H
#define CPP_COMPILER_TOKENTYPE_H

/**
 * Перечисление типов токенов
 */
enum TokenType {

    TYPE_INT, // 1, 2, 3..
    TYPE_CHAR, // 'a', 'b', 'c'..
    TYPE_STRING, // "a", "b", "c"..
    TYPE_DOUBLE, // 1.0, 2.0, 3.0..
    ID, // a, b, c

    DOUBLE, // double
    INT, // int
    CHAR, // char
    VOID, // void
    WHILE, // while

    PLUS, // +
    MINUS, // -
    STAR, // *
    SLASH, // /
    PERCENT, // %

    COMMA, // ,
    OPEN_SQUARE, // [
    CLOSE_SQUARE, // ]

    LESS, // <
    GREAT, // >
    LESS_EQUALLY, // <=
    GREAT_EQUALLY, // >=
    EQUALLY, // ==
    NOT_EQUALLY, // !=

    SEMICOLON, // ;
    OPEN_PARENTHESIS, // (
    CLOSE_PARENTHESIS, // )
    OPEN_CURLY_BRACE, // {
    CLOSE_CURLY_BRACE, // }
    ASSIGN, // =

    ERROR,
    EOF
};

#endif //CPP_COMPILER_TOKENTYPE_H
