/* Let's learn some array basics!
 * Arrays are declared like so:
 * 
 *      int foo[3] = {4, 8, 15};
 *
 * C can also infer the size of an array, provided it can fit it on the stack
 *
 *      int bar[] = {16, 23, 42};
 *      char baz[]   = {'g', 'e', 'c', 'c'};
 *      char geccs[] = "gecc gecc gecc";
 *
 * Huh, look at that, guess a string is just a character array ;)
 * (terminated with a nullbyte, '\0', anyway)
 */
#include <stdio.h>

int main(void)
{

    // (Problem 1). This "const" is going to cause problems on the next line
    const int ur_ip_lol[] = {0, 2, 7, 0, 0, 1};

    // Like in other langs, array elements can be set and accessed with '[]'
    ur_ip_lol[0] = 1;

    const int firstDigit = ur_ip_lol[0];

    // (Problem 2)
    // Oops, C's not happy with the expression. Swap ??? with the correct index
    const int lastDigit = ur_ip_lol[???];

    // (Problem 3)
    // C doesn't have a handy length() function, but we're not totally out of
    // luck! See if you can fill in the right values to sizeof() to find the 
    // length of the array
    const int ipLength = sizeof(ur_ip_lol) / sizeof(ur_ip_lol[???]);

    printf("%d %d %d\n", firstDigit, lastDigit, ipLength);
    return 0;
}
