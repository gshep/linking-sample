#!/bin/sh

rm -rf ./result

find . \( -name \*\.o -o -name \*\.dll -o -name \*\.dylib -o -name \*\.so -o -name \*\.exe \) -exec rm -f '{}' \;
