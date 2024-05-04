 You are perhaps tempted to try slices on strings? They're arrays of
 u8 characters after all, right? Slices on strings work great.
 There's just one catch: don't forget that Zig string literals are
 immutable (const) values. So we need to change the type of slice
 from:
     var foo: []u8 = "foobar"[0..3];
 to:
     var foo: []const u8 = "foobar"[0..3];
 See if you can fix this Zero Wing-inspired phrase descrambler:
