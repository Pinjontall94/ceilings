 As a matter of fact, you can put 'comptime' in front of any
 expression to force it to be run at compile time.
 Execute a function:
     comptime llama();
 Get a value:
     bar = comptime baz();
 Execute a whole block:
     comptime {
         bar = baz + biff();
         llama(bar);
     }
 Get a value from a block:
     var llama = comptime bar: {
         const baz = biff() + bonk();
         break :bar baz;
     }
 Fun fact: this assert() function is identical to
 std.debug.assert() from the Zig Standard Library.
 Bonus fun fact: I accidentally replaced all instances of 'foo'
 with 'llama' in this exercise and I have no regrets!
