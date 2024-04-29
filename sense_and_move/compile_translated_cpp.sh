#! /bin/bash

g++ -std=c++17 -c functions.cpp 
g++ -std=c++17 -c translated_cpp.cpp 
g++ functions.o translated_cpp.o -o translated