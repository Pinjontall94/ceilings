THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 An anonymous struct value LITERAL (not to be confused with a
 struct TYPE) uses '.{}' syntax:
     .{
          .center_x = 15,
          .center_y = 12,
          .radius = 6,
     }
 These literals are always evaluated entirely at compile-time.
 The example above could be coerced into the i32 variant of the
 "circle struct" from the last exercise.
 Or you can let them remain entirely anonymous as in this
 example:
     fn bar(foo: anytype) void {
         print("a:{} b:{}\n", .{foo.a, foo.b});
     }
     bar(.{
         .a = true,
         .b = false,
     });
 The example above prints "a:true b:false".
 Please complete this function which prints an anonymous struct
 representing a circle.
