//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
#include "src/Reader.h"
#include "src/utils/Logger.cpp"

using namespace std;

int main() {
    // открытие файла
    string filePath = "/home/vladimir/CLionProjects/cpp_compiler/test_sources/main.c";
    ifstream file(filePath);
    if (!file.is_open()) {
        error("Файл " + filePath + " не удалось открыть");
        return -1;
    }
    info("Файл " + filePath + " успешно открыт");

    // чтение файла
    string text, line;
    while(file){
        getline(file, line);
        text += line + "\n";
    }
    text += '\0';
    file.close();
    info("Файл " + filePath + " считан");

    // парсер
    Reader reader(text);
    info("Начало обработки");
    return 0;
}
