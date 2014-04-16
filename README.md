This is a sample that demonstrates linking process,
dependency hell and symbols shadowing on various
platforms.

To build the sample just run:
    .\windows_make_good.bat - on Windows;
    ./macosx_make_good.sh - on Mac OS X;
    ./linux_make_good.sh - etc.

All binaries will be copied into the 'result' directory.

Then run ./result/main.exe and look at the output.

To clean run .{\, /}clean.{bat, sh}.

Note that working directory for build/clean scripts
must be the root.
