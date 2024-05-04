THIS FILE IS FROM ZIGLINGS AS A REFERENCE AND IS NOT MY CODE.
IT WILL BE REMOVED PRIOR TO RELEASE.
================================================================================

 Remember using if/else statements as expressions like this?
     var foo: u8 = if (true) 5 else 0;
 Zig also lets you use for and while loops as expressions.
 Like 'return' for functions, you can return a value from a
 loop block with break:
     break true; // return boolean value from block
 But what value is returned from a loop if a break statement is
 never reached? We need a default expression. Thankfully, Zig
 loops also have 'else' clauses! As you might have guessed, the
 'else' clause is evaluated when: 1) a 'while' condition becomes
 false or 2) a 'for' loop runs out of items.
     const two: u8 = while (true) break 2 else 0;         // 2
     const three: u8 = for ([1]u8{1}) |f| break 3 else 0; // 3
 If you do not provide an else clause, an empty one will be
 provided for you, which will evaluate to the void type, which
 is probably not what you want. So consider the else clause
 essential when using loops as expressions.
     const four: u8 = while (true) {
         break 4;
     };               // <-- ERROR! Implicit 'else void' here!
 With that in mind, see if you can fix the problem with this
 program.
