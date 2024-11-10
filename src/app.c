#include <errno.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ANSI_COLOR_RED		"\x1b[31m"
#define ANSI_COLOR_GREEN	"\x1b[32m"
#define ANSI_COLOR_YELLOW	"\x1b[33m"
#define ANSI_COLOR_BLUE		"\x1b[34m"
#define ANSI_COLOR_MAGENTA	"\x1b[35m"
#define ANSI_COLOR_CYAN		"\x1b[36m"
#define ANSI_COLOR_RESET	"\x1b[0m"

void print_div_line(char const character, int const length);
void print_colored_div(char const *color, char const character, int const length);
bool print_ascii_file(char const *filename);

int main(void)
{
    // Print an ascii file, a div line, and call "make" as a shell command
    if (!print_ascii_file("../assets/ascii_ceilings.txt"))
        return 1;
    print_div_line('=', 80);
    char const command[] = "make";
    system(command);
    return 0;
}

void print_div_line(const char character, const int length)
{
    // Prints a divider line with character specified and for a given length
    for (int i = 0; i < length; i++)
        printf("%c", character);
    printf("\n");
}

void print_colored_div(const char *color, const char character, const int length)
{
    printf("%s", color);
    print_div_line(character, length);
    printf(ANSI_COLOR_RESET);
}

bool print_ascii_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        fprintf(stderr, "%s\n", strerror(errno));
        return false;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file))
        printf("%s", buffer);

    fclose(file);
    return true;
}


