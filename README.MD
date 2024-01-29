## cpp-startPythonScriptsWithExe

After changed bat name ...

To execute on command line:
g++.exe -fdiagnostics-color=always -g \PythonConvertExe.cpp -o \BatConvertExe.exe

To use it with VSCode:
All settings are made just press : CRTL + Shift + B


Not: This code only for debugging purpose if you want to create a exe file on py file please use pyinstaller or similar tools. 
if you choose pyinstaller and have GUI interface:

```
pyinstaller --onefile --windowed my_script.py
```

if you dont have a GUI than

```
pyinstaller --onefile my_script.py
```

