#include <stdio.h>

// [[Bonus challenge]]: Print an emoji in C!
// Hint: you're gonna need to include locale.h and wctype.h, and lookup how to
// distinguish hexadecimal numbers from the regular decimal ones we've been
// using up till now. Don't worry if this takes some googling, or if you need
// to come back later, this is a step up in difficulty!

int main()
{
    // The correct hexademical value of the character is 1F97A
    set___(LC_ALL, "");
    ____ character = __1F97A;
    printf("Character: %lc is U+%x in Unicode\n", character, character);
}
