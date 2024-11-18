#include <stdio.h>

int main()
{
    // C has a limited number of implicit type conversions, which are distinct
    // from type *casting*, which we'll cover later. 

    // As we saw earlier: chars and ints can be equally used in arithmetic
    // operations, treating chars as their numeric representation for said
    // expressions.
    char language = 'C';
    language__;  // "We have C++ at home"
    printf("%c\n", language);

    // Relational conversions likewise show how C's lack of booleans
    // still allows for logical expressions:
    int truthy = 1, falsey = 0;
    if (_truthy __ _falsey)
        printf("Ints are bools, the world's gone mad!");

    // The only other important conversions that happen involve arithmetic
    // operations between two data of different types, say `int + float`
    short small_num = 2; int bigger_num = 257;
    ____ result = small_num * bigger_num;

    // As a general rule, between the two types, the "lower" type will be 
    // promoted to the "higher" type (smaller bitwidth to larger), and the
    // result will reflect that "higher" type.
    //
    // char/short -> int
    // float      -> double 
    // 
    // Either operand is a double/long/unsigned?
    // The other operand and result are double/long/unsigned, respectively
    // 
    // Notable exception: 
    // Float-float expressions convert both operands to doubles. All
    // floating point math in C is done in double precision!
    return 0;
}
