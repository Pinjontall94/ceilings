#include <stdio.h>

int main(void)
{
    int const eof = __;
    long numCharacters = 0;
    while (getchar() != eof)
        numCharacters++;  // How come I don't need curly braces here?
    printf("%ld\n", numCharacters);
    return 0;
}

// [Your challenge]: This program will count characters you type until you hit
// Ctrl-d (the eof signal), but how would you count the number of characters in
// the file named ipsum.txt? You should see the number "2243" returned if you
// did it correctly!
//
// Hint: Search "standard input unix shell" if you're stuck! It's one character
// between the executable and ipsum.txt on the command line. What? You didn't
// think you'd learn C without learning Unix, too, did you? ;3
