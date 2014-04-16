@ECHO OFF
rd /q /s .\result >nul 2>nul
set LIST=(version-0.2 version-0.3 bar fooapp)
for %%f in %LIST% do (
	pushd %%f
	call .\clean.bat
	popd
)
