THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 The power and purpose of async/await becomes more apparent
 when we do multiple things concurrently. Foo and Bar do not
 depend on each other and can happen at the same time, but End
 requires that they both be finished.
               +---------+
               |  Start  |
               +---------+
                  /    \
                 /      \
        +---------+    +---------+
        |   Foo   |    |   Bar   |
        +---------+    +---------+
                 \      /
                  \    /
               +---------+
               |   End   |
               +---------+
 We can express this in Zig like so:
     fn foo() u32 { ... }
     fn bar() u32 { ... }
     // Start
     var foo_frame = async foo();
     var bar_frame = async bar();
     var foo_value = await foo_frame;
     var bar_value = await bar_frame;
     // End
 Please await TWO page titles!
