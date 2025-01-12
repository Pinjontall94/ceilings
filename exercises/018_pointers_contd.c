#include <stdio.h>

int main(void)
{
    // Okay, that's how pointers work...but why should you care?
    // Why don't C functions handle collections, *really*? What good are
    // pointers if they're just a weird way of expressing arrays?

    // C is, unlike many languages you may be used to, "call by value",
    // which means this classic example (credit: K&R) does not work:
    //
    // void swap(int x, int y) 
    // { 
    //     int temp; 
    //
    //     temp = x; 
    //     x = y; 
    //     y = temp; 
    // }

    // ...or rather it *does* work, but doesn't do anything to the x & y
    // you pass in. When swap is called, it takes the values from x & y,
    // not x & y themselves. But, the *addresses* of x & y are values that,
    // with the "*" dereferencing operator, can lead swap back to the correct
    // places in memory to work on, eureka!

    // And in fact, that helps clear up another seeming mystery about pointer
    // syntax, and brings you to your first [Challenge]: why are these 
    // equivalent?
    char * a_man_after_midnight1 = "gimme";
    char  *a_man_after_midnight2 = "gimme";
    char*  a_man_after_midnight3 = "gimme";

    // (More controversially, which is preferable?)

    // Challenge 2: Fix & implement the swap function!
    int x = 0;
    int y= 1;
    swap(x, y);
    return 1;
}
