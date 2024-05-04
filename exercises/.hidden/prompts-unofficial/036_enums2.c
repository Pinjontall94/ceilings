THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Enums are really just a set of numbers. You can leave the
 numbering up to the compiler, or you can assign them
 explicitly. You can even specify the numeric type used.
     const Stuff = enum(u8){ foo = 16 };
 You can get the integer out with a builtin function,
 @intFromEnum(). We'll learn about builtins properly in a later
 exercise.
     const my_stuff: u8 = @intFromEnum(Stuff.foo);
 Note how that built-in function starts with "@" just like the
 @import() function we've been using.
 Zig lets us write integers in hexadecimal format:
     0xf (is the value 15 in hex)
 Web browsers let us specify colors using a hexadecimal
 number where each byte represents the brightness of the
 Red, Green, or Blue component (RGB) where two hex digits
 are one byte with a value range of 0-255:
     #RRGGBB
 Please define and use a pure blue value Color:
