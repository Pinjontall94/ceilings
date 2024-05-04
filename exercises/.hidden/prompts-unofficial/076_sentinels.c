 A sentinel value indicates the end of data. Let's imagine a
 sequence of lowercase letters where uppercase 'S' is the
 sentinel, indicating the end of the sequence:
     abcdefS
 If our sequence also allows for uppercase letters, 'S' would
 make a terrible sentinel since it could no longer be a regular
 value in the sequence:
     abcdQRST
          ^-- Oops! The last letter in the sequence is R!
 A popular choice for indicating the end of a string is the
 value 0. ASCII and Unicode call this the "Null Character".
 Zig supports sentinel-terminated arrays, slices, and pointers:
     const a: [4:0]u32       =  [4:0]u32{1, 2, 3, 4};
     const b: [:0]const u32  = &[4:0]u32{1, 2, 3, 4};
     const c: [*:0]const u32 = &[4:0]u32{1, 2, 3, 4};
 Array 'a' stores 5 u32 values, the last of which is 0.
 However the compiler takes care of this housekeeping detail
 for you. You can treat 'a' as a normal array with just 4
 items.
 Slice 'b' is only allowed to point to zero-terminated arrays
 but otherwise works just like a normal slice.
 Pointer 'c' is exactly like the many-item pointers we learned
 about in exercise 054, but it is guaranteed to end in 0.
 Because of this guarantee, we can safely find the end of this
 many-item pointer without knowing its length. (We CAN'T do
 that with regular many-item pointers!).
 Important: the sentinel value must be of the same type as the
 data being terminated!
 Here's our generic sequence printing function. It's nearly
 complete, but there are a couple of missing bits. Please fix
 them!
