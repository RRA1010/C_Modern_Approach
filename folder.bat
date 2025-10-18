@echo off


rem for /L %%i in (1,1,27) do mkdir "C:\Users\Ross\source\repos\C\C_Programming_notes\%%~i"

for /D %%d in (C:\Users\Ross\source\repos\C\C_Programming_notes\*) do (
	mkdir "%%d\exercise" && mkdir "%%d\projects"
)