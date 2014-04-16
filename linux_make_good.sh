#!/bin/sh

for SUBPROJECT in version-0.2 version-0.3 bar fooapp;
do
    (
        echo 'Building '$SUBPROJECT
        cd $SUBPROJECT
        ./linux_make_good.sh "$1"
    )
done

mkdir result
cd result
find ../ -name \*\.dll \! -path \*/result/\* -exec cp -a '{}' . \;
cp -a ../fooapp/main.exe .
