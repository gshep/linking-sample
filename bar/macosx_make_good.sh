#!/bin/bash

g++ -fPIC -I ../version-0.2/ -c bar.cpp -o bar.o

libname='libbar.dylib'

g++ -headerpad_max_install_names -arch x86_64 -single_module -dynamiclib -install_name @rpath/$libname -Wl,-rpath,@loader_path/ -L ../version-0.2/ -lversion-0.2 -o $libname bar.o
