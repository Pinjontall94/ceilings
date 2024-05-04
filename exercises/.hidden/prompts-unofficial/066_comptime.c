THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 "Compile time" is a program's environment while it is being
 compiled. In contrast, "run time" is the environment while the
 compiled program is executing (traditionally as machine code
 on a hardware CPU).
 Errors make an easy example:
 1. Compile-time error: caught by the compiler, usually
    resulting in a message to the programmer.
 2. Runtime error: either caught by the running program itself
    or by the host hardware or operating system. Could be
    gracefully caught and handled or could cause the computer
    to crash (or halt and catch fire)!
 All compiled languages must perform a certain amount of logic
 at compile time in order to analyze the code, maintain a table
 of symbols (such as variable and function names), etc.
 Optimizing compilers can also figure out how much of a program
 can be pre-computed or "inlined" at compile time to make the
 resulting program more efficient. Smart compilers can even
 "unroll" loops, turning their logic into a fast linear
 sequence of statements (at the usually very slight expense of
 the increased size of the repeated code).
 Zig takes these concepts further by making these optimizations
 an integral part of the language itself!
