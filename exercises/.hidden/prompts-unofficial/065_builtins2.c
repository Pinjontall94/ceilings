 Zig has builtins for mathematical operations such as...
      @sqrt        @sin           @cos
      @exp         @log           @floor
 ...and lots of type casting operations such as...
      @as          @errorFromInt  @floatFromInt
      @ptrFromInt  @intFromPtr    @intFromEnum
 Spending part of a rainy day skimming through the complete
 list of builtins in the official Zig documentation wouldn't be
 a bad use of your time. There are some seriously cool features
 in there. Check out @call, @compileLog, @embedFile, and @src!
                            ...
 For now, we're going to complete our examination of builtins
 by exploring just THREE of Zig's MANY introspection abilities:
 1. @This() type
 Returns the innermost struct, enum, or union that a function
 call is inside.
 2. @typeInfo(comptime T: type) @import("std").builtin.Type
 Returns information about any type in a data structure which
 will contain different information depending on which type
 you're examining.
 3. @TypeOf(...) type
 Returns the type common to all input parameters (each of which
 may be any expression). The type is resolved using the same
 "peer type resolution" process the compiler itself uses when
 inferring types.
 (Notice how the two functions which return types start with
 uppercase letters? This is a standard naming practice in Zig.)
 NOTE: This exercise did not originally include the function below.
 But a change after Zig 0.10.0 added the source file name to the
 type. "Narcissus" became "065_builtins2.Narcissus".
 To fix this, I've added this function to strip the filename from
 the front of the type name in the dumbest way possible. (It returns
 a slice of the type name starting at character 14 (assuming
 single-byte characters).
 We'll be seeing @typeName again in Exercise 070. For now, you can
 see that it takes a Type and returns a u8 "string".
