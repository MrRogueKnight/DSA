@echo off
setlocal enabledelayedexpansion

:: Compile the solution
echo Compiling solution.cpp...
g++ -std=c++11 solution.cpp -o solution

:: Check if compilation was successful
if %ERRORLEVEL% NEQ 0 (
    echo Compilation failed!
    exit /b %ERRORLEVEL%
)

echo.
echo Running solution...
echo ===================
.
solution

echo.
echo ===================
echo Program completed.

:: Keep the window open
pause
