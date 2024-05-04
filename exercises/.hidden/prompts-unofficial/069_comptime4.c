 One of the more common uses of 'comptime' function parameters is
 passing a type to a function:
     fn foo(comptime MyType: type) void { ... }
 In fact, types are ONLY available at compile time, so the
 'comptime' keyword is required here.
 Please take a moment to put on the wizard hat which has been
 provided for you. We're about to use this ability to implement
 a generic function.
 This function is pretty wild because it executes at runtime
 and is part of the final compiled program. The function is
 compiled with unchanging data sizes and types.
 And yet it ALSO allows for different sizes and types. This
 seems paradoxical. How could both things be true?
 To accomplish this, the Zig compiler actually generates a
 separate copy of the function for every size/type combination!
 So in this case, three different functions will be generated
 for you, each with machine code that handles that specific
 data size and type.
 Please fix this function so that the 'size' parameter:
     1) Is guaranteed to be known at compile time.
     2) Sets the size of the array of type T (which is the
        sequence we're creating and returning).
