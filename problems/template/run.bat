@echo off
setlocal enabledelayedexpansion

:: Get the current directory name for display
for %%i in ("%CD%") do set "CURRENT_DIR=%%~nxi"

echo ===================================
echo Running solution for: %CURRENT_DIR%
echo ===================================

:: Compile the solution
echo Compiling solution.cpp...
g++ -std=c++11 solution.cpp -o solution

:: Check if compilation was successful
if %ERRORLEVEL% NEQ 0 (
    echo.
    echo Compilation failed with error code %ERRORLEVEL%
    echo Please check your code for errors.
    pause
    exit /b %ERRORLEVEL%
)

echo.
echo ========== Running Solution ==========
.
solution

echo.
echo ========== Execution Complete ==========
echo.

:: Keep the window open
pause
