#include <math.h>
int main(void)
{
    // Ahhh, type-casting in C; the last bastion of *weakly* typed languages
    // in the modern world! C is statically typed, but it gives you immense
    // (and often dangerous) power in telling the compiler "hey, I know I said
    // this value is a character, but let's treat it as a double now". Why
    // would you do this? Well it'll definitely come in handy when get to
    // generics, but for now just trust me, *you'll wanna get it down*. Type
    // casting is done with the form:
    //
    //   (type name) expression
    //
    int too_small = 9;
    if (sqrt(____ too_small) == 3)
        return 0;
    else
        return 1;
}


