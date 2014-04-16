cl -nologo -Zm200 -Zc:wchar_t -O2 -MD -GR -EHsc -W3 -w34100 -w34189 -DWIN32 -DBAR_LIBRARY -D_CRT_SECURE_NO_WARNINGS -I"..\version-0.2" -c bar.cpp

link /libpath:"..\version-0.2" /nologo /dynamicbase /nxcompat /incremental:no /dll /out:bar.dll bar.obj version-0.2.lib

mt -nologo -manifest "..\empty.manifest" -outputresource:.\bar.dll;2

copy .\bar.dll /b ..\result
copy .\bar.dll.manifest /b ..\result
