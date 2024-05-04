# Notes

## Structure
What follows is my problemwise notes as I progress through ziglings, summarizing
for each challenge what the equivalent in C would be.

Each subheading will describe in brief what the challenge is and should be, if
directly applicable to C. Failing that, the subheading will be the zig challenge
and subsequent notes underneath will pertain to C implementation particularities

Challenges not applicable to C with any reasonable amount of effort will be
either be denoted N/A or designated an alternate challenge proposal.

## Exercises

### 1. Public Function
Make a failing build of a public function work as such (req'd in zig, but not C).
Could have a small project that exports a greeter?

### 2. Import std lib to fix hello world

## Misc

### Prompt Structure
1. ascii logo
Realized it's almost a deadringer for ziglings! Change to a different style

2. ascii art
Clean up the kitty :3

3. tagline
Use vt100 escape codes to color output, check if there are output libraries that m
ake this easier. Print something centered to the effect of:
"Files didn't compile but don't worry! Your journey begins at <filename>..."

4. list of "compiled <file>" "testing <file>"
Look into testing frameworks for C

5. Colored output telling the user to edit <next broken file> and rebuild

### Build Systems
An inescapable part of the C landscape is build systems, so they deserve some of
challenges too. At the same time, I'm not interested in teaching how to write
complicated Makefiles, CMakeList.txts and build.zigs. For now, show in the
readme the 3 supported ways of building ceilings:

1. Makefile
make -f Makefile.vanilla && ./ceilings

2. CMake
cmake -B .
make && ./ceilings

3. zig cc
zig build run
