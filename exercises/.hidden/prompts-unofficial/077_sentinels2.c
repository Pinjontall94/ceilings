 ------------------------------------------------------------
  TOP SECRET  TOP SECRET  TOP SECRET  TOP SECRET  TOP SECRET
 ------------------------------------------------------------
 Are you ready for the THE TRUTH about Zig string literals?
 Here it is:
     @TypeOf("foo") == *const [3:0]u8
 Which means a string literal is a "constant pointer to a
 zero-terminated (null-terminated) fixed-size array of u8".
 Now you know. You've earned it. Welcome to the secret club!
 ------------------------------------------------------------
 Why do we bother using a zero/null sentinel to terminate
 strings in Zig when we already have a known length?
 Versatility! Zig strings are compatible with C strings (which
 are null-terminated) AND can be coerced to a variety of other
 Zig types:
     const a: [5]u8 = "array".*;
     const b: *const [16]u8 = "pointer to array";
     const c: []const u8 = "slice";
     const d: [:0]const u8 = "slice with sentinel";
     const e: [*:0]const u8 = "many-item pointer with sentinel";
     const f: [*]const u8 = "many-item pointer";
 All but 'f' may be printed. (A many-item pointer without a
 sentinel is not safe to print because we don't know where it
 ends!)
