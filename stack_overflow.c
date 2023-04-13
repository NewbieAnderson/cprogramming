#include <stdio.h>
#include <string.h>

void foo(void)
{
    printf("How did you execute this?\n");
}

int main(int argc, char **argv)
{
    char buf[10];
    if (argc != 2)
        printf("must one argument needed!\n");
    printf("passed message : %s\n", argv[1]);
    strcpy(buf, argv[1]);
    return 0;
}