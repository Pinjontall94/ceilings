 Zig has an "unreachable" statement. Use it when you want to tell the
 compiler that a branch of code should never be executed and that the
 mere act of reaching it is an error.
     if (true) {
         ...
     } else {
         unreachable;
     }
 Here we've made a little virtual machine that performs mathematical
 operations on a single numeric value. It looks great but there's one
 little problem: the switch statement doesn't cover every possible
 value of a u8 number!
 WE know there are only three operations but Zig doesn't. Use the
 unreachable statement to make the switch complete. Or ELSE. :-)
