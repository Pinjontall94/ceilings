#include <stdio.h>

// [Your challenge]: Complete the program to count the number of lines in a
// file, and use it on ipsum.txt in the same manner as the last challenge. You
// should see the number "29" returned if you succeeded!

int main()
{
    int character = 0, newline = 0;

    while ((character = getchar()) != EOF)  // How come this works?
        if (____)  // How come we don't need braces here either? When do we?
            ++newline;
    printf("%d\n", newline);
    return 0;
}
