@echo off
echo �����ļ�λ��
set /p a=
cd "%a%"
echo �����ļ�����
set /p b=
gcc "%b%" -o 1.exe
if exist "1.exe" echo ����ɹ�
if not exist "1.exe" echo ����ʧ��
pause