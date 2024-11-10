/* Let's start with the simplest possible C program, even simpler than
 * "Hello world"! All valid C executables have an entrypoint function called
 * "main" and all C functions follow the structure of:
 * 
 *     <type returned> <function name>(<arguments>)
 *     {
 *       <body>
 *     }
 *
 * Unlike most modern languages, types are declared *before* functions,
 * variables, etc. (all your func(arg: type) -> type is fancy future stuff ;3)
 * With that in mind, see if you can finish the simplest possible C program!
 * Check the next lesson for how to compile and run it :)
 */
int main(void)
{
    return 0;
}

/* Alright, you have your brand new 00_main.c ready to go, but how do you run
 * it and make sure it works? Does C have a `cargo run` or some such? No! Or
 * rather, it's got way too many! CMake, GNU Make, BSD Make, GCC, LLVM, Meson
 * Ninja, Zig CC, Autotools, what the hell *are* all these things? I wanted to
 * learn C, not these build systems! >:[
 * 
 * Fret not, we're gonna start as simple as possible and build up from there.
 * There are many ways to compile and run C (and I'm going to assume you're on
 * a real operating system like Linux, Windows with WSL or mingw, Mac, or BSD
 * ;P) but we're only going to cover the ones you're most likely to encounter
 * and use: GCC, Make, and CMake. So! Open a terminal window in this folder and
 * run the following:
 *
 *     gcc 00_main.c
 *
 * If all goes well, you'll see a new file called `a.out`. That's the default
 * output file name, and you can run it with:
 *
 *     ./a.out
 *
 * Note what happens if you change the number after the `return`, recompile,
 * and run `echo $?` in bash or most shells (or `echo $status` for fish)
 */
