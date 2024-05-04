THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 We've seen that passing arrays around can be awkward. Perhaps you
 remember a particularly horrendous function definition from quiz3?
 This function can only take arrays that are exactly 4 items long!
     fn printPowersOfTwo(numbers: [4]u16) void { ... }
 That's the trouble with arrays - their size is part of the data
 type and must be hard-coded into every usage of that type. This
 digits array is a [10]u8 forever and ever:
     var digits = [10]u8{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 Thankfully, Zig has slices, which let you dynamically point to a
 start item and provide a length. Here are slices of our digit
 array:
     const foo = digits[0..1];  // 0
     const bar = digits[3..9];  // 3 4 5 6 7 8
     const baz = digits[5..9];  // 5 6 7 8
     const all = digits[0..];   // 0 1 2 3 4 5 6 7 8 9
 As you can see, a slice [x..y] starts with the index of the
 first item at x and the last item at y-1. You can leave the y
 off to get "the rest of the items".
 The type of a slice on an array of u8 items is []u8.
 Please lend this function a hand. A u8 slice hand, that is.
 Fun fact: Under the hood, slices are stored as a pointer to
 the first item and a length.
