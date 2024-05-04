THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Now that we've seen how methods work, let's see if we can help
 our elephants out a bit more with some Elephant methods.
 This function visits all elephants once, starting with the
 first elephant and following the tails to the next elephant.
 Zig's enums can also have methods! This comment originally asked
 if anyone could find instances of enum methods in the wild. The
 first five pull requests were accepted and here they are:
 1) drforester - I found one in the Zig source:
 https://github.com/ziglang/zig/blob/041212a41cfaf029dc3eb9740467b721c76f406c/src/Compilation.zig#L2495
 2) bbuccianti - I found one!
 https://github.com/ziglang/zig/blob/6787f163eb6db2b8b89c2ea6cb51d63606487e12/lib/std/debug.zig#L477
 3) GoldsteinE - Found many, here's one
 https://github.com/ziglang/zig/blob/ce14bc7176f9e441064ffdde2d85e35fd78977f2/lib/std/target.zig#L65
 4) SpencerCDixon - Love this language so far :-)
 https://github.com/ziglang/zig/blob/a502c160cd51ce3de80b3be945245b7a91967a85/src/zir.zig#L530
 5) tomkun - here's another enum method
 https://github.com/ziglang/zig/blob/4ca1f4ec2e3ae1a08295bc6ed03c235cb7700ab9/src/codegen/aarch64.zig#L24
