THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Now that we've learned about arrays, we can talk about strings.
 We've already seen Zig string literals: "Hello world.\n"
 Zig stores strings as arrays of bytes.
     const foo = "Hello";
 Is almost* the same as:
     const foo = [_]u8{ 'H', 'e', 'l', 'l', 'o' };
 (* We'll see what Zig strings REALLY are in Exercise 77.)
 Notice how individual characters use single quotes ('H') and
 strings use double quotes ("H"). These are not interchangeable!
