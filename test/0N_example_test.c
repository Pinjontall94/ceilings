#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_app()
{
    const char expected[256] = "Hello, world! :)\n";
    char output[256] = {0};
    FILE *fp = popen("./0N_example", "r");
    fgets(output, sizeof(output), fp);
    assert(strcmp(expected, output) == 0);
    pclose(fp);
}

int main()
{
    test_app();
    return 0;
}
