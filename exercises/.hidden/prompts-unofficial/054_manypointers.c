THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 You can also make pointers to multiple items without using a slice.
     var foo: [4]u8 = [4]u8{ 1, 2, 3, 4 };
     var foo_slice: []u8 = foo[0..];
     var foo_ptr: [*]u8 = &foo;
     var foo_slice_from_ptr: []u8 = foo_ptr[0..4];
 The difference between foo_slice and foo_ptr is that the slice has
 a known length. The pointer doesn't. It is up to YOU to keep track
 of the number of u8s foo_ptr points to!
 Are all of these pointer types starting to get confusing?
     FREE ZIG POINTER CHEATSHEET! (Using u8 as the example type.)
   +---------------+----------------------------------------------+
   |  u8           |  one u8                                      |
   |  *u8          |  pointer to one u8                           |
   |  [2]u8        |  two u8s                                     |
   |  [*]u8        |  pointer to unknown number of u8s            |
   |  [*]const u8  |  pointer to unknown number of immutable u8s  |
   |  *[2]u8       |  pointer to an array of 2 u8s                |
   |  *const [2]u8 |  pointer to an immutable array of 2 u8s      |
   |  []u8         |  slice of u8s                                |
   |  []const u8   |  slice of immutable u8s                      |
   +---------------+----------------------------------------------+
