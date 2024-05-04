 If you thought the last exercise was a deep dive, hold onto your
 hat because we are about to descend into the computer's molten
 core.
 (Shouting) DOWN HERE, THE BITS AND BYTES FLOW FROM RAM TO THE CPU
 LIKE A HOT, DENSE FLUID. THE FORCES ARE INCREDIBLE. BUT HOW DOES
 ALL OF THIS RELATE TO THE DATA IN OUR ZIG PROGRAMS? LET'S HEAD
 BACK UP TO THE TEXT EDITOR AND FIND OUT.
 Ah, that's better. Now we can look at some familiar Zig code.
 @import() adds the imported code to your own. In this case, code
 from the standard library is added to your program and compiled
 with it. All of this will be loaded into RAM when it runs. Oh, and
 that thing we name "const std"? That's a struct!
 Remember our old RPG Character struct? A struct is really just a
 very convenient way to deal with memory. These fields (gold,
 health, experience) are all values of a particular size. Add them
 together and you have the size of the struct as a whole.
 Here we create a character called "the_narrator" that is a constant
 (immutable) instance of a Character struct. It is stored in your
 program as data, and like the instruction code, it is loaded into
 RAM when your program runs. The relative location of this data in
 memory is hard-coded and neither the address nor the value changes.
 This "global_wizard" character is very similar. The address for
 this data won't change, but the data itself can since this is a var
 and not a const.
 A function is instruction code at a particular address. Function
 parameters in Zig are always immutable. They are stored in "the
 stack". A stack is a type of data structure and "the stack" is a
 specific bit of RAM reserved for your program. The CPU has special
 support for adding and removing things from "the stack", so it is
 an extremely efficient place for memory storage.
 Also, when a function executes, the input arguments are often
 loaded into the beating heart of the CPU itself in registers.
 Our main() function here has no input parameters, but it will have
 a stack entry (called a "frame").
 Fix 2 of 2 goes here:
 And there's more!
 Data segments (allocated at compile time) and "the stack"
 (allocated at run time) aren't the only places where program data
 can be stored in memory. They're just the most efficient. Sometimes
 we don't know how much memory our program will need until the
 program is running. Also, there is a limit to the size of stack
 memory allotted to programs (often set by your operating system).
 For these occasions, we have "the heap".
 You can use as much heap memory as you like (within physical
 limitations, of course), but it's much less efficient to manage
 because there is no built-in CPU support for adding and removing
 items as we have with the stack. Also, depending on the type of
 allocation, your program MAY have to do expensive work to manage
 the use of heap memory. We'll learn about heap allocators later.
 Whew! This has been a lot of information. You'll be pleased to know
 that the next exercise gets us back to learning Zig language
 features we can use right away to do more things!
