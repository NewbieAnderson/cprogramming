#include <stdio.h>

int main(void)
{
    int x = 123;
    int *ptr = &x;
    printf("x     = %d\n"
            "&x    = %p\n"
            "ptr   = %p\n"
            "&ptr  = %p\n"
            "&*ptr = %p\n"
            "*&ptr = %p\n", x, &x, ptr, &ptr, &*ptr, *&ptr);
    return 0;
}