#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_app()
{
    // Make 2 buffers 256 bytes long, 1 for expected output and 1 for actual
    const char expected[256] = "Hello, world! :)\n";
    char output[256] = {0};

    // Call the exercise app from the command line with a pipe
    FILE *fp = popen("./01_*", "r");
    fgets(output, sizeof(output), fp);
    assert(strcmp(expected, output) == 0);
    // Close the file (pipe) because we're good C programmers ^_^
    pclose(fp);
}

int main()
{
    test_app();
    return 0;
}
