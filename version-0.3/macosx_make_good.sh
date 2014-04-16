#!/bin/bash

g++ -fPIC -c version.cpp -o version.o

libname='libversion-0.3.dylib'

g++ -headerpad_max_install_names -arch x86_64 -single_module -dynamiclib -install_name @rpath/$libname -o $libname version.o
