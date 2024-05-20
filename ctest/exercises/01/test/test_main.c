#include <stdio.h>
#include <assert.h>
#include <string.h>

void test_hello_world()
{
    char output[256] = {0};
    FILE *fp = popen("./app", "r");
    fgets(output, sizeof(output), fp);
    assert(strcmp("Hello, world!\n", output) == 0);
    pclose(fp);
}

int main()
{
    test_hello_world();
    return 0;
}
