THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 It is really quite inconvenient having to manually keep track
 of the active field in our union, isn't it?
 Thankfully, Zig also has "tagged unions", which allow us to
 store an enum value within our union representing which field
 is active.
     const FooTag = enum{ small, medium, large };
     const Foo = union(FooTag) {
         small: u8,
         medium: u32,
         large: u64,
     };
 Now we can use a switch directly on the union to act on the
 active field:
     var f = Foo{ .small = 10 };
     switch (f) {
         .small => |my_small| do_something(my_small),
         .medium => |my_medium| do_something(my_medium),
         .large => |my_large| do_something(my_large),
     }
 Let's make our Insects use a tagged union (Doctor Zoraptera
 approves).
 By the way, did unions remind you of optional values and errors?
 Optional values are basically "null unions" and errors use "error
 union types". Now we can add our own unions to the mix to handle
 whatever situations we might encounter:
          union(Tag) { value: u32, toxic_ooze: void }
