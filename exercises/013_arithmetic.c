#include <stdio.h>

int main()
{
    // C has *most* of your typical arithmetic operators
    int uwu = 69, owo = 420;
    int add, sub, mult, div, mod;  // Uninitialized, bad! >:3
    
    add = uwu _ owo;
    sub = uwu _ owo;
    mult = uwu _ owo;
    div = uwu _ owo;
    mod = uwu _ 2;

    if (mod) printf("uwu is even"); else printf("uwu is odd");

    // Notable ommissions:
    // square and square root require the math.h header!
    
    // Increment and decrement operators: ++ and --
    // As in many other languages, such as python, n++ and n-- are shorthand
    // forms of the following, respectively:
    //
    //   n = n + 1; 
    //   n = n - 1;
    // 
    // However, C *also* has ++n and --n! Both increment and decrement, but
    // the prefix form here performs the increment/decrement *before*
    // returning n, while the suffix form does so right *after*.

    int n = 80084;
    printf("n++: %d\t", ____);  // What do you think this will be?
    printf("--n: %d\n", ____);

    return 0;
}
