cl -c -nologo -Zm200 -Zc:wchar_t -O2 -MD -GR -EHsc -W3 -w34100 -w34189 -DWIN32 -DVERSION_LIBRARY version.cpp

link /nologo /dynamicbase /nxcompat /incremental:no /dll /out:version-0.2.dll version.obj

mt -nologo -manifest "..\empty.manifest" -outputresource:.\version-0.2.dll;2

copy .\version-0.2.dll /b ..\result
copy .\version-0.2.dll.manifest /b ..\result
