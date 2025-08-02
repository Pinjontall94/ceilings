#!/bin/sh
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
