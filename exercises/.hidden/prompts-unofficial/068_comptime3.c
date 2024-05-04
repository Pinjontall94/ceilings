 You can also put 'comptime' before a function parameter to
 enforce that the argument passed to the function must be known
 at compile time. We've actually been using a function like
 this the entire time, std.debug.print():
     fn print(comptime fmt: []const u8, args: anytype) void
 Notice that the format string parameter 'fmt' is marked as
 'comptime'.  One of the neat benefits of this is that the
 format string can be checked for errors at compile time rather
 than crashing at runtime.
 (The actual formatting is done by std.fmt.format() and it
 contains a complete format string parser that runs entirely at
 compile time!)
 This struct is the model of a model boat. We can transform it
 to any scale we would like: 1:2 is half-size, 1:32 is
 thirty-two times smaller than the real thing, and so forth.
 Going deeper:
 What would happen if you DID attempt to build a model in the
 scale of 1:0?
    A) You're already done!
    B) You would suffer a mental divide-by-zero error.
    C) You would construct a singularity and destroy the
       planet.
 And how about a model in the scale of 0:1?
    A) You're already done!
    B) You'd arrange nothing carefully into the form of the
       original nothing but infinitely larger.
    C) You would construct a singularity and destroy the
       planet.
 Answers can be found on the back of the Ziglings packaging.
