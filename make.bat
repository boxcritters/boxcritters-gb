@echo off
if not exist build mkdir build
e:\progLib\c\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -c -o build\BoxCritters.o main.c
e:\progLib\c\gbdk\bin\lcc -Wa-l -Wl-m -Wl-j -DUSE_SFR_FOR_REG -o build\BoxCritters.gb build\BoxCritters.o
.\build\BoxCritters.gb