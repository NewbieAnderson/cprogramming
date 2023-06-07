#include <stdio.h>

int g_data = 128;

void foo(int **double_ptr)
{
    printf("---------- foo() called ----------\n");
    **double_ptr = 32;
    *double_ptr = &g_data;
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