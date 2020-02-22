cmake_minimum_required(VERSION 3.15)
project(cpp_compiler)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_compiler main.cpp src src/Reader.h src/Reader.cpp src/TokenType.h src/Token.h src/Token.cpp src/utils src/utils/Logger.cpp src/utils/Logger.h src/TokenType.cpp)