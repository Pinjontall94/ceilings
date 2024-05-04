THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Great news! Now we know enough to understand a "real" Hello World
 program in Zig - one that uses the system Standard Out resource...which
 can fail!
 Take note that this main() definition now returns "!void" rather
 than just "void". Since there's no specific error type, this means
 that Zig will infer the error type. This is appropriate in the case
 of main(), but can make a function harder (function pointers) or
 even impossible to work with (recursion) in some situations.
 You can find more information at:
 https://ziglang.org/documentation/master/#Inferred-Error-Sets
