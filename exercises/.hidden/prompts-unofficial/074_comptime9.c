THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 In addition to knowing when to use the 'comptime' keyword,
 it's also good to know when you DON'T need it.
 The following contexts are already IMPLICITLY evaluated at
 compile time, and adding the 'comptime' keyword would be
 superfluous, redundant, and smelly:
    * The container-level scope (outside of any function in a source file)
    * Type declarations of:
        * Variables
        * Functions (types of parameters and return values)
        * Structs
        * Unions
        * Enums
    * The test expressions in inline for and while loops
    * An expression passed to the @cImport() builtin
 Work with Zig for a while, and you'll start to develop an
 intuition for these contexts. Let's work on that now.
 You have been given just one 'comptime' statement to use in
 the program below. Here it is:
     comptime
 Just one is all it takes. Use it wisely!
 Being in the container-level scope, everything about this value is
 implicitly required to be known compile time.
 Again, this value's type and size must be known at compile
 time, but we're letting the compiler infer both from the
 return type of a function.
 And here's the function. Note that the return value type
 depends on one of the input arguments!
 The lesson here is to not pepper your program with 'comptime'
 keywords unless you need them. Between the implicit compile
 time contexts and Zig's aggressive evaluation of any
 expression it can figure out at compile time, it's sometimes
 surprising how few places actually need the keyword.
