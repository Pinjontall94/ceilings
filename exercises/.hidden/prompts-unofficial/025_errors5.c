 Zig has a handy "try" shortcut for this common error handling pattern:
     canFail() catch |err| return err;
 which can be more compactly written as:
     try canFail();
