#include <errno.h>
#include <stdio.h>
#include <convert.h>
#include <stdbool.h>
#include <string.h>

void print_div_line(const char character, const int length)
{
    // Prints a divider line with character specified and for a given length
    for (int i = 0; i < length; i++)
        printf("%c", character);
    printf("\n");
}

bool print_ascii_file(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        fprintf(stderr, "%s\n", strerror(errno));
        return false;
    }

    char buffer[1024];
    while (fgets(buffer, sizeof(buffer), file))
        printf("%s", buffer);

    fclose(file);
    return true;
}



int main(void) 
{
    if (!print_ascii_file("assets/asciilogo.txt")) 
        return 1;
    if (!print_ascii_file("assets/asciiart3.txt")) 
        return 1;
    print_div_line('=', 80);
    int water_freezing_point = convert_celsius_to_fahrenheit(0);
    printf("\nSome test output:\n\twater's freezing point (F): %d", water_freezing_point);
    return 0;
}
