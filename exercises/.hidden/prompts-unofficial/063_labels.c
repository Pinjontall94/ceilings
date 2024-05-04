THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Loop bodies are blocks, which are also expressions. We've seen
 how they can be used to evaluate and return values. To further
 expand on this concept, it turns out we can also give names to
 blocks by applying a 'label':
     my_label: { ... }
 Once you give a block a label, you can use 'break' to exit
 from that block.
     outer_block: {           // outer block
         while (true) {       // inner block
             break :outer_block;
         }
         unreachable;
     }
 As we've just learned, you can return a value using a break
 statement. Does that mean you can return a value from any
 labeled block? Yes it does!
     const foo = make_five: {
         const five = 1 + 1 + 1 + 1 + 1;
         break :make_five five;
     };
 Labels can also be used with loops. Being able to break out of
 nested loops at a specific level is one of those things that
 you won't use every day, but when the time comes, it's
 incredibly convenient. Being able to return a value from an
 inner loop is sometimes so handy, it almost feels like cheating
 (and can help you avoid creating a lot of temporary variables).
     const bar: u8 = two_loop: while (true) {
         while (true) {
             break :two_loop 2;
         }
     } else 0;
 In the above example, the break exits from the outer loop
 labeled "two_loop" and returns the value 2. The else clause is
 attached to the outer two_loop and would be evaluated if the
 loop somehow ended without the break having been called.
 Finally, you can also use block labels with the 'continue'
 statement:
     my_while: while (true) {
         continue :my_while;
     }
 As mentioned before, we'll soon understand why these two
 numbers don't need explicit types. Hang in there!
                 Chili  Macaroni  Tomato Sauce  Cheese
 ------------------------------------------------------
  Mac & Cheese              x                     x
  Chili Mac        x        x
  Pasta                     x          x
  Cheesy Chili     x                              x
 ------------------------------------------------------
 Challenge: You can also do away with the 'found' variable in
 the inner loop. See if you can figure out how to do that!
