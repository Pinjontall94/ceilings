# ceilings

A code-along project in C in the vein of 
[rustlings](https://rustlings.cool) and especially 
[ziglings](https://ziglings.org).

## NOTE
This project is very much a WIP and quite transparently indebted to the
ziglings project, which I'm following along with as I learn both languages.

## Run
Ceilings is tested against a linux target and may not build properly on other
platforms. Please open an issue if something doesn't work! It really helps me :)
This being said, the build.zig uses the host platform, and should therefore work
on your machine as long as you're not cross compiling (and you're probably not).

1. Makefile
make -f Makefile.vanilla && ./ceilings

2. CMake
cmake -B .
make && ./ceilings

3. zig cc (RECOMMENDED)
zig build run
