//
// Created by vladimir on 22.02.2020.
//

#ifndef CPP_COMPILER_ANALYSIS_H
#define CPP_COMPILER_ANALYSIS_H

#include <utility>

#include "../reader/Reader.h"

class Analysis {

private:

    Reader reader;

public:

    explicit Analysis(Reader reader) : reader(std::move(reader)) {}

    virtual void start() = 0;
};

#endif //CPP_COMPILER_ANALYSIS_H
