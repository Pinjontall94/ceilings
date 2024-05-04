THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 You can even create anonymous struct literals without field
 names:
     .{
         false,
         @as(u32, 15),
         @as(f64, 67.12)
     }
 We call these "tuples", which is a term used by many
 programming languages for a data type with fields referenced
 by index order rather than name. To make this possible, the Zig
 compiler automatically assigns numeric field names 0, 1, 2,
 etc. to the struct.
 Since bare numbers are not legal identifiers (foo.0 is a
 syntax error), we have to quote them with the @"" syntax.
 Example:
     const foo = .{ true, false };
     print("{} {}\n", .{foo.@"0", foo.@"1"});
 The example above prints "true false".
 Hey, WAIT A SECOND...
 If a .{} thing is what the print function wants, do we need to
 break our "tuple" apart and put it in another one? No! It's
 redundant! This will print the same thing:
     print("{} {}\n", foo);
 Aha! So now we know that print() takes a "tuple". Things are
 really starting to come together now.
 Let's make our own generic "tuple" printer. This should take a
 "tuple" and print out each field in the following format:
     "name"(type):value
 Example:
     "0"(bool):true
 You'll be putting this together. But don't worry, everything
 you need is documented in the comments.
