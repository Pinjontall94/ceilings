 We've seen that Zig implicitly performs some evaluations at
 compile time. But sometimes you'll want to explicitly request
 compile time evaluation. For that, we have a new keyword:
  .     .   .      o       .          .       *  . .     .
    .  *  |     .    .            .   .     .   .     * .    .
        --o--            comptime        *    |      ..    .
     *    |       *  .        .    .   .    --*--  .     *  .
  .     .    .    .   . . .      .        .   |   .    .  .
 When placed before a variable declaration, 'comptime'
 guarantees that every usage of that variable will be performed
 at compile time.
 As a simple example, compare these two statements:
    var bar1 = 5;            // ERROR!
    comptime var bar2 = 5;   // OKAY!
 The first one gives us an error because Zig assumes mutable
 identifiers (declared with 'var') will be used at runtime and
 we have not assigned a runtime type (like u8 or f32). Trying
 to use a comptime_int of undetermined size at runtime is
 a MEMORY CRIME and you are UNDER ARREST.
 The second one is okay because we've told Zig that 'bar2' is
 a compile time variable. Zig will help us ensure this is true
 and let us know if we make a mistake.
