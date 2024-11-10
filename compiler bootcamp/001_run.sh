#!/bin/sh
#
# Alright, you have your brand new 00_main.c ready to go, but how do you run
# it and make sure it works? Does C have a `cargo run` or some such? No! Or
# rather, it's got way too many! CMake, GNU Make, BSD Make, GCC, LLVM, Meson
# Ninja, Zig CC, Autotools, what the hell *are* all these things? I wanted to
# learn C, not these build systems! >:[
# 
# Fret not, we're gonna start as simple as possible and build up from there.
# There are many ways to compile and run C (and I'm going to assume you're on
# a real operating system like Linux, Windows with WSL or mingw, Mac, or BSD
# ;P) but we're only going to cover the ones you're most likely to encounter
# and use: GCC, Make, and CMake. So! Open a terminal window in this folder and
# run the following:
#
#     gcc 00_main.c
#     ./a.out
#
# Note what happens if you change the number after the `return`, recompile,
# and run `echo $?` in bash or most shells (or `echo $status` for fish)
#
# Now...the astute among you may have noticed this is not a C file but a shell
# script, what's with that? Well, maybe you don't want to have to keep
# re-running those `gcc` and `./a.out` commands everytime you modify your code.
# In the interest of saving you that headache, this file itself will handle
# that for you! Just mark it as executable (with `chmod +x 01_run.sh` or
# however you like) and run it whenever you want to quickly build and rerun
# your C program. Note that we're introducing the -o flag to rename our output,
# and speaking of renaming, rename this file to "build.sh" to save yourself
# typing!
SOURCE_FILE=00_main.c
OUTPUT=00_main
gcc -o $OUTPUT $SOURCE_FILE
./$OUTPUT
