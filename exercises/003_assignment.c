#include <stdio.h>
#include <assert.h>
/*
 * Hmm, looks like we can't just use const int for everything ;/
 * 
 * Constant means the value can't be changed once assigned, easy enough, but 
 * what is "int"? An integer, right? Yes! But how big is an int? Well that's not
 * so easy to say. C was made back when computers had many different
 * "word sizes" so an int was designed to be the word size of whatever machine
 * it was compiled for - it's machine-dependent, compiler-dependent, and even  
 * OS-dependent!
 *
 * Common bitwidths of C's built in types:
 *
 *      word size  | sizeof(int) | char   | short | long | long long
 *      ------------------------------------------------------------
 *      64-bit     | 4 bytes     | 8 bits | 16b   | 32b  | 32b
 *
 * So how do I get a uint8? What about mutability? What's going on? :( 
 * C predates a lot of these modern sensibilities and preferences, so unless
 * otherwise specified, types are mutable and signed. Also note that C doesn't
 * distinguish between an ascii character and the 8-bit number it represents;
 * a char is just an 8-bit signed integer! Last note about chars, because this
 * is important: 'a' is a character, but "a" is a string. Try printing the
 * sizeof() for each if you don't believe me ;)
 *
 * Lastly, if you really want a GUARANTEED width integer, check out stdint.h
 * for uint8_t, uint16_t, and friends
 */

int main()
{
    const unsigned int n = 64;
    n = n + 5;

    const unsigned int euler = 2718281828459045;
    assert(euler == 2718281828459045);

    const unsigned int negative_fourty_two = -42;
    printf("%i, %li, %i\n", n, euler, negative_fourty_two);

    // Wait, why does this work? (Hint: change %i to %c)
    char letter = 'a';
    letter = letter + 5;
    printf("letter = %i\n", letter);
    return 0;
}
