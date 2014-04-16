@echo off

mkdir .\result

set LIST=(version-0.2 version-0.3 bar fooapp)
for %%f in %LIST% do (
	echo Building %%f
	pushd %%f
	call .\windows_make_good.bat
	popd
)
