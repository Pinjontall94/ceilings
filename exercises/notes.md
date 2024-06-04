# Notes

## Structure
What follows is my problemwise notes as I progress through ziglings, summarizing
for each challenge what the equivalent in C would be.  

Each subheading will describe in brief what the challenge is and should be,
if directly applicable to C. Failing that, the subheading will be the zig
challenge and subsequent notes underneath will pertain to C
implementation particularities.   

Challenges not applicable to C with any reasonable amount of effort will be
either be denoted N/A or designated an alternate challenge proposal.

## Exercises

1. Public Function
Make a failing build of a public function work as such (req'd in zig, but not C).
Could have a small project that exports a greeter?

2. Import std lib to fix hello world

3. Assigning to constant, int bit-widths and un/signing
    1. Trying to mutate a constant that needs to be a variable. 
    2. Trying to initialize an u8 with too big a value or a negative value.
    3. Maybe have something specific about how int and long aren't one size
    everywhere? That's not the case in other systems languages and is an
    important pecularity of C's ubiquity. Like, long long is stable but long
    isn't, etc.

4. Arrays
    1. Inferred-length constant array of u8, trying to assign primes[0] = 2 
    (constant and thus will fail). 
    2. Store a value in an int[] into a constant int. 
    3. Get the length of an array.
    4. [author note] Print firstPrime, fourthPrime, primesLength with printf.

5. Arrays2: Concat and Repeat
    1. Concat an array. Note that these will happen at compile time,
    not run time, so maybe the C example should use cpp macros for this.
    Maybe concat {0xDE 0xAD} and {0xBE 0xEF} to {0xDE 0xAD 0xBE 0xEF}?
    2. Repeat a bit pattern {11110000 10011111 10100101 10111010} * 420.
    3. Use a for loop to print each element of the arrays to stdout.

6. Strings (a.k.a. Character Arrays)
    1. Pull a character from a string with an index and store in a const. 
    2. Repeat a string "Bozo " * 3.
    3. Concat strings "100 " + "Gecs".
    4. [author note] Print the char and two strings. Talk about the
    close relationship between chars and digits, as well as how to print a
    formatted utf-8 character. (I don't know this either, will have to look it
    up.)

7. Multiline Strings
    1. Print a multiline string.
    "I got lightning in my veins,
     walk around like Frankenstein,
     they did science on my face,
     I'm the dumbest girl alive."

8. Quiz 1
    1. Introduce `size_t` on a const, with the problem being to make it a var.
    2. Introduce initializing variables with NULL, and specifically {0} syntax
    for initializing arrays (and which standard of C that was introduced in).
    3. Use the `size_t` to index into a nonsense string, storing the right
    chars in a new char array with a secret word revealed at the end.
    

























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

1. CMake (preferred)
cmake -B build
cd build
make
./app

2. Makefile [not working, TBD]
make -f Makefile.vanilla && ./ceilings

3. zig cc [not working, TBD]
zig build run

### Uncategorized notes & niceties
fish script to make populating tests easier
```fish
for num in (seq 1 9)
    cp -rp 0N_example 0$num
end
```
