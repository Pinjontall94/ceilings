#include <stdio.h>
#include <stdlib.h>

int main()
{
    int const gecs = 100;

    // Now we've already seen the simple if-else blocks, but it's worth
    // spending some time on them and the handy switch statement
    if (gecs > 100)
        printf("You don't need curly braces for 1 line but you do need a _\n")
    else if (gecs <= 1000)
        printf("But curlies *are* required");
        printf(" for multiline clauses\n");
    else 
        printf("Aaaand this is a standard else clause\n");

    // A preview of strings OwO
    char * message = (char *)malloc(sizeof(char) * 256);
    switch (gecs) {
        case 1000:
            message = "I need help immediately";
            ____
        case 10000:
            message = "I did science of my face";
            ____
        case 100:
            message = "I got bloodstains on my carpet";
            ____
        case 50:
            message = "Am I going insane, running through the back alley?";
            ____ // What belongs here? What happens if you omit me?
        ____:
            message = "Print me with a wildcard keyword for any edge cases!";
            ____ // Do I still need to be here?
    }
    printf("%s\n", message);
    return 0;
}
