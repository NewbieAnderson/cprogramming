#include <stdio.h>

int *some_warn_func(void)
{
    int data = 123456789;
    return &data;
}

int main(void)
{
    int *ptr = some_warn_func();
    printf("result is %d\n", *ptr);
    return 0;
}