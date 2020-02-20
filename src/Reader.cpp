//
// Created by vladimir on 20.02.2020.
//

#include <iostream>
#include "Reader.h"

using namespace std;

Reader::Reader(istream& file) {
    char a;
    file >> a;
    cout << a;
}
