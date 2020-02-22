//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
#include "src/Reader.h"
#include "src/utils/Logger.h"

using namespace std;

int main() {
    // открытие файла
    string filePath = R"(C:\Users\vladimir\CLionProjects\cpp_compiler\test_sources\main.c)";
    ifstream file(filePath);
    if (!file.is_open()) {
        error("The file " + filePath + " could not be opened");
        return -1;
    }
    info("The file " + filePath + " was successfully open");

    // чтение файла
    string text, line;
    while(file){
        getline(file, line);
        text += line + "\n";
    }
    text += '\0';
    file.close();
    info("The file " + filePath + " was successfully read");

    // парсер
    Reader reader(text);
    info("Start reading");
    Token token(EOFILE);
    while (true) {
        token = reader.nextScanner();
        if (token.getTokenType() == ERROR) {
            cout << token << endl;
            break;
        }
        if (token.getTokenType() == EOFILE) {
            break;
        }
    }
    if (token.getTokenType() == EOFILE) {
        info("The file was successfully read");
    }
    return 0;
}
