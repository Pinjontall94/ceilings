THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Help! Evil alien creatures have hidden eggs all over the Earth
 and they're starting to hatch!
 Before you jump into battle, you'll need to know three things:
 1. You can attach functions to structs (and other "type definitions"):
     const Foo = struct{
         pub fn hello() void {
             std.debug.print("Foo says hello!\n", .{});
         }
     };
 2. A function that is a member of a struct is "namespaced" within
    that struct and is called by specifying the "namespace" and then
    using the "dot syntax":
     Foo.hello();
 3. The NEAT feature of these functions is that if their first argument
    is an instance of the struct (or a pointer to one) then we can use
    the instance as the namespace instead of the type:
     const Bar = struct{
         pub fn a(self: Bar) void {}
         pub fn b(this: *Bar, other: u8) void {}
         pub fn c(bar: *const Bar) void {}
     };
    var bar = Bar{};
    bar.a() // is equivalent to Bar.a(bar)
    bar.b(3) // is equivalent to Bar.b(&bar, 3)
    bar.c() // is equivalent to Bar.c(&bar)
    Notice that the name of the parameter doesn't matter. Some use
    self, others use a lowercase version of the type name, but feel
    free to use whatever is most appropriate.
 Okay, you're armed.
 Now, please zap the alien structs until they're all gone or
 Earth will be doomed!
 Look at this hideous Alien struct. Know your enemy!
 Your trusty weapon. Zap those aliens!
