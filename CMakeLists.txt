cmake_minimum_required(VERSION 3.15)
project(cpp_compiler)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_compiler main.cpp src src/reader/Reader.h src/reader/Reader.cpp src/token/TokenType.h src/token/Token.h src/token/Token.cpp src/logger src/logger/Logger.cpp src/logger/Logger.h src/token/TokenType.cpp)