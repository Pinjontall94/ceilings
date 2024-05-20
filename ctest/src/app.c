#include <stdio.h>

void run_project()
{
    char buffer[256] = {0};
    FILE *fp = popen("./exercise01/app", "r");
    fgets(buffer, sizeof(buffer), fp);
    pclose(fp);
}

int main(int argc, char *argv[])
{
    printf("You entered %d arguments\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
