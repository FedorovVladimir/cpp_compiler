//
// Created by vladimir on 21.02.2020.
//

#include <iostream>

using namespace std;

/**
 * Вывод сообщения с информацией
 * @param s - текст сообщения
 */
void info(const string& s);

/**
 * Вывод ошибки
 * @param s - текст ошибки
 */
void error(const string& s);

void error(const string& s) {
    cout << "[error] " << s << endl;
}
void info(const string& s) {
    cout << "[info] " << s << endl;
}