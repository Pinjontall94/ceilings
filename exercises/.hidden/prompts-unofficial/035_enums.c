 Remember that little mathematical virtual machine we made using the
 "unreachable" statement?  Well, there were two problems with the
 way we were using op codes:
   1. Having to remember op codes by number is no good.
   2. We had to use "unreachable" because Zig had no way of knowing
      how many valid op codes there were.
 An "enum" is a Zig construct that lets you give names to numeric
 values and store them in a set. They look a lot like error sets:
     const Fruit = enum{ apple, pear, orange };
     const my_fruit = Fruit.apple;
 Let's use an enum in place of the numbers we were using in the
 previous version!
 Please complete the enum!
