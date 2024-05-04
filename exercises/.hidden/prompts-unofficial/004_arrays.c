 Let's learn some array basics. Arrays are declared with:
   var foo: [3]u32 = [3]u32{ 42, 108, 5423 };
 When Zig can infer the size of the array, you can use '_' for the
 size. You can also let Zig infer the type of the value so the
 declaration is much less verbose.
   var foo = [_]u32{ 42, 108, 5423 };
 Get values of an array using array[index] notation:
     const bar = foo[2]; // 5423
 Set values of an array using array[index] notation:
     foo[2] = 16;
 Get the length of an array using the len property:
     const length = foo.len;
