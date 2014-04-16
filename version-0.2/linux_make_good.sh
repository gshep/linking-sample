#!/bin/sh

g++ -fPIC -c version.cpp -o version.o

libname='version-0.2.dll'

if [ "$1" = "use_version_script" ]; then
    ld -shared -soname=$libname --version-script=version.script version.o -o $libname
else
    ld -shared -soname=$libname version.o -o $libname
fi
