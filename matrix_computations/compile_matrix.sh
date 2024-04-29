#! /bin/bash

g++ -std=c++17 -c matrix.cpp 
g++ -std=c++17 -c main.cpp 
g++ matrix.o main.o -o main