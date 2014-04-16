#!/bin/bash

g++ -fPIC -I ../version-0.3/ -I ../bar/ -c main.cpp -o main.o

g++ -arch x86_64 -L ../version-0.3/ -lversion-0.3 -L ../bar/ -lbar -Wl,-rpath,@loader_path/ -o main.exe main.o
