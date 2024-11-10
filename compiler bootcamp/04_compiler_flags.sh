#!/bin/sh

# Ahhh, another shell script. But this is the last one! And in honesty it's
# more of a txt that happens to be executable, but I digress. C folks talk
# all these "flags" you throw to the compiler, but which ones should you use?
# GCC itself has scores of flags available, but the ones you're most likely to
# run into are the following:
#
#   -c		| compile but don't link (uses CFLAGS)
#   -o		| name the output file
#   -g		| preserve symbols for debugging (this will be *very* useful later)
#   -O		| (that's a capital "o") optimization level
#   -I		| include a directory when searching for a `.c` source file
#   -W		| turn certain classes of warnings on
#   -std	| use a particular standard of C (e.g. C89, C99, C2X)

# Some crucial *linker* flags, aka LDFLAGS (i.e. which you use when either
# running GCC to produce a binary, or running `ld` directly) include:
#   -L		| search a directory for library files
#   -l		| link a library

# Keep your code safe! What follows below is the bare minimum of what I'd
# recommend flags-wise to ensure you don't introduce bugs into your programs
# that are otherwise hard to spot. Writing for a specified C standard, and
# turning on warnings for "all", "extra", and "pedantic" may be annoying at
# times, but the compiler really is your friend here. On with the main course!

gcc -Wall -Wextra -Wpedantic -std=c2x -o app 00_main.c
