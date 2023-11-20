#include <stdio.h>

int main(void)
{
    const char *str1 = "Hello World!";
    const char *str2 = "Hello World!";
    printf("content of str1  : %s\n"
            "address of str1 : %p\n"
            "content of str2 : %s\n"
            "address of str2 : %p\n"
            "str1 == str2    : %d\n", str1, str1, str2, str2, str1 == str2);
    return 0;
}