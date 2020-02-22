//
// Created by vladimir on 22.02.2020.
//

#include "TokenType.h"

using namespace std;

string ttToStr(TokenType tokenType) {
    switch(tokenType) {
        case TYPE_INT:
            return "TYPE_INT";
        case TYPE_CHAR:
            return "TYPE_CHAR";
        case TYPE_STRING:
            return "TYPE_STRING";
        case TYPE_DOUBLE:
            return "TYPE_DOUBLE";
        case ID:
            return "ID";
        case DOUBLE:
            return "DOUBLE";
        case INT:
            return "INT";
        case CHAR:
            return "CHAR";
        case STRING:
            return "STRING";
        case VOID:
            return "VOID";
        case WHILE:
            return "WHILE";
        case PLUS:
            return "PLUS";
        case MINUS:
            return "MINUS";
        case STAR:
            return "STAR";
        case SLASH:
            return "SLASH";
        case PERCENT:
            return "PERCENT";
        case COMMA:
            return "COMMA";
        case OPEN_SQUARE:
            return "OPEN_SQUARE";
        case CLOSE_SQUARE:
            return "CLOSE_SQUARE";
        case LESS:
            return "LESS";
        case NOT:
            return "NOT";
        case GREAT:
            return "GREAT";
        case LESS_EQUALLY:
            return "LESS_EQUALLY";
        case GREAT_EQUALLY:
            return "GREAT_EQUALLY";
        case EQUALLY:
            return "EQUALLY";
        case NOT_EQUALLY:
            return "NOT_EQUALLY";
        case SEMICOLON:
            return "SEMICOLON";
        case OPEN_PARENTHESIS:
            return "OPEN_PARENTHESIS";
        case CLOSE_PARENTHESIS:
            return "CLOSE_PARENTHESIS";
        case OPEN_CURLY_BRACE:
            return "OPEN_CURLY_BRACE";
        case CLOSE_CURLY_BRACE:
            return "CLOSE_CURLY_BRACE";
        case ASSIGN:
            return "ASSIGN";
        case ERROR:
            return "ERROR";
        case EOFILE:
            return "EOFILE";
        default:
            return "Invalid Token Type";
    }
}
