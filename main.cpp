//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
#include <fstream>
#include "src/Reader.h"

using namespace std;

/**
 * Перевод массива char[] в string
 * @param ch указатель на массив char[]
 * @return строка типа string
 */
string ch2str(char *ch);

/**
 * Вывод ошибки
 * @param s - текст ошибки
 */
void error(const string& s);

int main() {
    char filePath[] = "test_sources/main.c";
    ifstream file(filePath);
    if (!file.is_open()) {
        error("Файл " + ch2str(filePath) + " не удалось открыть");
        return -1;
    }
    Reader reader(file);
    return 0;
}

string ch2str(char *ch) {
    string s(ch);
    return s;
}

void error(const string& s) {
    cout << "[error] " << s << endl;
}
