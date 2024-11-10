#include <stdio.h>

// C has a comparatively tiny number of simple datatypes, though they come in
// unsigned and sometimes doubled flavors. Something to ponder now: why is a
// character type present, but not a string?

int main()
{
    // Numeric types (signed by default)
    ____ pointNumber = 8008.5;
    ____ funnyNumber = 420;
    ____ bigNumberOwO = 2147483648;
    
    // Character type (Note the single quotes; not optional!)
    ____ letter = 'u';
    ____ letter2 = 'w';
    ____ letter3 = 'u';

    // Types can also be declared without an initial value, if you intend
    // to store somethine there, but it's value will be undefined/pulled from
    // whatever value was in memory at that location in RAM!
    ____ x, y;
    ____ z, a;
    x = funnyNumber + 5;
    y = (x - 5) * 100;
    z = pointNumber / 5.0;  // Try using y / 5 instead and see what happens!
    a = bigNumberOwO % 3;
    
    printf("pointNumber is: __\n", pointNumber);
    // Wait, why does this work? (Hint: change %i to %c)
    printf("new letter is: %i\n", letter + 3);

    return bigNumberOwO - bigNumberOwO;
}
