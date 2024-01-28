
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

void HideConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_HIDE);
}

void ShowConsole()
{
    ::ShowWindow(::GetConsoleWindow(), SW_SHOW);
}

bool IsConsoleVisible()
{
    return ::IsWindowVisible(::GetConsoleWindow()) != FALSE;
}

int main(int argc, char *argv[])
{
    if (IsConsoleVisible())
    {
        HideConsole();
    }
    std::string filename = "PythonScripts/internetNodifier.py";
    std::string command = "python ";
    command += filename;
    system(command.c_str());
    cout << "Starting Python File...\n";
    cout << "Closing executable...\n";
}