cl -nologo -Zm200 -Zc:wchar_t -O2 -MD -GR -EHsc -W3 -w34100 -w34189 -EHsc -DWIN32 -D_CRT_SECURE_NO_WARNINGS -I"..\bar" -I"..\version-0.3" -c main.cpp

link /libpath:"..\bar" /libpath:"..\version-0.3" /nologo /dynamicbase /nxcompat /incremental:no /subsystem:console /out:main.exe main.obj version-0.3.lib bar.lib

mt -nologo -manifest "..\empty.manifest" -outputresource:.\main.exe;2

copy .\main.exe /b ..\result
copy .\main.exe.manifest /b ..\result
