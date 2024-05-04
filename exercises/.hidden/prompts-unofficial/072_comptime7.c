THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 There is also an 'inline while'. Just like 'inline for', it
 loops at compile time, allowing you to do all sorts of
 interesting things not possible at runtime. See if you can
 figure out what this rather bonkers example prints:
     const foo = [3]*const [5]u8{ "~{s}~", "<{s}>", "d{s}b" };
     comptime var i = 0;
     inline while ( i < foo.len ) : (i += 1) {
         print(foo[i] ++ "\n", .{foo[i]});
     }
 You haven't taken off that wizard hat yet, have you?
