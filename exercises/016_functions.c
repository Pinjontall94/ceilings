#include <stdio.h>

// Congrats, you've made it to functions! This is starting to feel a bit more
// like a real programming language ;) In C, all functions follow the format:
//
//     <return type> <function name> (<parameter type> <parameter name> ...)
//     {
//         <body>
//         return <expression yielding a return value>;
//     }
//
// So a function that increments a number would look like:
//
//     int increment(int number)
//     {
//         return number + 1;
//     }

____ cube(____)
{
    return ____;
}

// What type is returned when you just print and exit the function?
// O, how I stare into the void as I wonder...
____ print_cubed_number(int number)
{
    printf("number: %d\n", number);
    printf("cubed: %d\n", cube(number));
    return;
}

// We're not passing any arguments to main but really we've been naughty
// C programmers up until now (or at least, old-fashioned). A special word
// you've already seen belongs here, and truly it belongs in *every* function
// that takes no arguments. Why? What could go wrong?
int main(____)
{
    print_cubed_number(69);
    return 0;
}

// Note what happens when functions are defined below `main`. That is to say,
// note what happens when they're used before they're defined!

// [Challenge]:
// For reasons that will become apparent soon, find out how you can
// place `cube` and `print_cubed_number` down here, while still
// satisfying the linter (and you *are* using one, aren't you? ;3)
// (Hint: checkout function *prototypes* vs their *implementations*)
