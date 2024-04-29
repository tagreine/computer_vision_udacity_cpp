#! /bin/bash

g++ -std=c++17 -c gaussian.cpp 
g++ -std=c++17 -c main.cpp 
g++ gaussian.o main.o -o main