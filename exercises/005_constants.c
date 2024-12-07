#include <stdio.h>

// Now, the old K&R way to do constants in the 70s was with #define
// directives, and those do work! But we'll explain all about those mysterious
// #[something] lines with no ending ";"s later when we get to the C
// Pre-Processor and header files.
//
// Ever since C89 was ratified (also known as ANSI C or ISO C), C has
// supported constants natively, and I suggest you use them everywhere you
// can! Like lots of things, there's stylistic debate on where exactly you
// put the const keyword: before the type (const int) or after (int const)?
// There are arguments for both, but for reasons that will make more sense
// when we get to pointers and (*gasp!*) strings, we'll stick to what's called
// "East const"

int main(void)
{
    const int someNum = 68;  // "const West" - Legal but not recommended
    int const pls = 1;       // "East const" - Preferred!
    pls += someNum;
    printf("Try as we might, we cannot add them!");
    return pls;
}
