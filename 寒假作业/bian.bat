@echo off
echo 输入文件位置
set /p a=
cd "%a%"
echo 输入文件名称
set /p b=
gcc "%b%" -o 1.exe
if exist "1.exe" echo 编译成功
if not exist "1.exe" echo 编译失败
pause