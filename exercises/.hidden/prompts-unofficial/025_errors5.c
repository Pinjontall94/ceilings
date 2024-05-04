THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Zig has a handy "try" shortcut for this common error handling pattern:
     canFail() catch |err| return err;
 which can be more compactly written as:
     try canFail();
