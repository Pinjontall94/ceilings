THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 The Zig compiler provides "builtin" functions. You've already
 gotten used to seeing an @import() at the top of every
 Ziglings exercise.
 We've also seen @intCast() in "016_for2.zig", "058_quiz7.zig";
 and @intFromEnum() in "036_enums2.zig".
 Builtins are special because they are intrinsic to the Zig
 language itself (as opposed to being provided in the standard
 library). They are also special because they can provide
 functionality that is only possible with help from the
 compiler, such as type introspection (the ability to examine
 type properties from within a program).
 Zig contains over 100 builtin functions. We're certainly
 not going to cover them all, but we can look at some
 interesting ones.
 Before we begin, know that many builtin functions have
 parameters marked as "comptime". It's probably fairly clear
 what we mean when we say that these parameters need to be
 "known at compile time." But rest assured we'll be doing the
 "comptime" subject real justice soon.
