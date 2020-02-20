//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
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
    // открытие файла
    char filePath[] = "/home/vladimir/CLionProjects/cpp_compiler/test_sources/main.c";
    ifstream file(filePath);
    if (!file.is_open()) {
        error("Файл " + ch2str(filePath) + " не удалось открыть");
        return -1;
    }

    // чтение файла
    string text, line;
    while(file){
        getline(file, line);
        text += line + "\n";
    }
    text += '\0';
    file.close();

    // парсер
    Reader reader(text);
    return 0;
}

string ch2str(char *ch) {
    string s(ch);
    return s;
}

void error(const string& s) {
    cout << "[error] " << s << endl;
}
