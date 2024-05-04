 There have been several instances where it would have been
 nice to use loops in our programs, but we couldn't because the
 things we were trying to do could only be done at compile
 time. We ended up having to do those things MANUALLY, like
 NORMAL people. Bah! We are PROGRAMMERS! The computer should be
 doing this work.
 An 'inline for' is performed at compile time, allowing you to
 programatically loop through a series of items in situations
 like those mentioned above where a regular runtime 'for' loop
 wouldn't be allowed:
     inline for (.{ u8, u16, u32, u64 }) |T| {
         print("{} ", .{@typeInfo(T).Int.bits});
     }
 In the above example, we're looping over a list of types,
 which are available only at compile time.
 Remember Narcissus from exercise 065 where we used builtins
 for reflection? He's back and loving it.
