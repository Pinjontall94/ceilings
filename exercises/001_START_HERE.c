#include <stdio.h>

 
// Uh-oh! We forgot to include a return type for our main function 
// (Hint: check line 11 and put the type before "main"


____ main(____)
{
    printf("Hello world!\n");
    return 0;
}

// Wait, shouldn't main just take no arguments, like `main()`? That compiles!
//
// Well, yes it does, and although it *technically* doesn't cause any
// problems with C11 onward, earlier versions of C don't distinguish between:
//
//   1. func() [takes no arguments]
//   2. another_func() [takes a variable number of unassigned arguments]
// 
// That's weird! C is weird (you'll see that plenty) so for now we'll stick
// to best practice and use a keyword there you've probably already googled by
// now ;)
