#!/bin/sh



cd 02_example
gcc -c 02_src.c
gcc -o 02_app 02_src.o
[ ! -f "02_app" ] || ./02_app
