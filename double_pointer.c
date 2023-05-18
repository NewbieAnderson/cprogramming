#include <stdio.h>

int g_data = 128;

void foo(int **dptr)
{
    printf("---------- foo() called ----------\n");
    **dptr = 32;
    *dptr = &g_data;
}

int main(void)
{
    int data = 10;
    int *ptr = &data;
    printf("g_data = %d\n"
            "data = %d\n"
            "*ptr = %d\n", g_data, data, *ptr);
    foo(&ptr);
    printf("g_data = %d\n"
            "data = %d\n"
            "*ptr = %d\n", g_data, data, *ptr);
    return 0;
}