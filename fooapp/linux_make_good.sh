#!/bin/sh

g++ -I ../version-0.3/ -I ../bar/ -fPIC -c main.cpp -o main.o

g++ -Wl,-rpath-link,../version-0.2/ -Wl,-rpath-link,../version-0.3/ -Wl,-rpath-link,../bar/ -L ../version-0.3/ -l:version-0.3.dll -L ../bar/ -l:bar.dll -Wl,-rpath,\$ORIGIN/ main.o -o main.exe
