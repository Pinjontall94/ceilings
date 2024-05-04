 Now that we have optional types, we can apply them to structs.
 The last time we checked in with our elephants, we had to link
 all three of them together in a "circle" so that the last tail
 linked to the first elephant. This is because we had NO CONCEPT
 of a tail that didn't point to another elephant!
 We also introduce the handy ".?" shortcut:
     const foo = bar.?;
 is the same as
     const foo = bar orelse unreachable;
 See if you can find where we use this shortcut below.
 Now let's make those elephant tails optional!
 This function visits all elephants once, starting with the
 first elephant and following the tails to the next elephant.
