![ceilings marquis](../assets/marquis.png)

# ceilings

A code-along project in C in the vein of 
[rustlings](https://rustlings.cool) and especially 
[ziglings](https://ziglings.org). Failing test cases of almost-working C code for a student to correct in order to pass the test suite called by the executable, learning C in the process!

## NOTE
This project is very much a WIP and quite transparently indebted to the
ziglings project, which I'm following along with as I learn both languages.

## Run
Ceilings is tested against a linux target and may not build properly on other
platforms. Please open an issue if something doesn't work! It really helps me :)

### Instructions
1. Make a new folder called `build`
2. Ensure you have [cmake](https://cmake.org/), GNU Make, and C compiler installed  
(these last two are often in a package called "build-essentials" if not "make" and "gcc" separately)
3. Open a terminal in the `build` folder and run `cmake ..`
4. Run `make` in that same `build` folder
5. Pay attention to the error, and fix the file `001_START_HERE.c` in the `exercises` folder
6. Check your progress by running `./app` in the `build` folder
7. Repeat steps 5 & 6 for each exercise until you complete Ceilings! :3
