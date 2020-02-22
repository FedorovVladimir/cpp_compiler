cmake_minimum_required(VERSION 3.15)
project(cpp_compiler)

set(CMAKE_CXX_STANDARD 20)

add_executable(cpp_compiler src/main.cpp src src/reader/Reader.h src/reader/Reader.cpp src/token/TokenType.h src/token/Token.h src/token/Token.cpp src/logger src/logger/Logger.cpp src/logger/Logger.h src/token/TokenType.cpp src/analysis/Analysis.h src/analysis/down_analysis/DownAnalysis.cpp src/analysis/down_analysis/DownAnalysis.h src/analysis/up_analysis/UpAnalysis.cpp src/analysis/up_analysis/UpAnalysis.h src/analysis/Item.h src/analysis/items/TermItem.cpp src/analysis/items/TermItem.h src/analysis/items/NoTermItem.cpp src/analysis/items/NoTermItem.h)