THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Grouping values in structs is not merely convenient. It also allows
 us to treat the values as a single item when storing them, passing
 them to functions, etc.
 This exercise demonstrates how we can store structs in an array and
 how doing so lets us print them using a loop.
 If you tried running the program without adding Zump as mentioned
 above, you get what appear to be "garbage" values. In debug mode
 (which is the default), Zig writes the repeating pattern "10101010"
 in binary (or 0xAA in hex) to all undefined locations to make them
 easier to spot when debugging.
