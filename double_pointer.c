#include <stdio.h>

int g_data = 128;

void foo(int **dptr)
{
    **dptr = 32;
    *dptr = &g_data;
}

int main(void)
{
    int data = 10;
    int *ptr = &data;
    foo(&ptr);
    printf("%d\n", data); /* 32 */
    printf("%d\n", *ptr); /* 128 */
    return 0;
}