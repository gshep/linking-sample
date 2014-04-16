#!/bin/sh

g++ -fPIC -I ../version-0.2/ -c bar.cpp -o bar.o

libname='bar.dll'

g++ -shared -Wl,-rpath-link,../version-0.2 -Wl,-rpath,\$ORIGIN/ -L ../version-0.2/ -l:version-0.2.dll -Wl,-soname,$libname bar.o -o $libname
