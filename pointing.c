#include <stdio.h>

int main(void)
{
    int x = 123;
    int *ptr = &x;
    printf("x     = %d\n", x);
    printf("&x    = %p\n", &x);
    printf("ptr   = %p\n", ptr);
    printf("&ptr  = %p\n", &ptr);
    printf("&*ptr = %p\n", &*ptr);
    printf("*&ptr = %p\n", *&ptr);
    return 0;
}