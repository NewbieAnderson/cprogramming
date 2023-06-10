#include <stdio.h>

int main(void)
{
    unsigned int x = 1;
    int i;
    for (i = 0; i < 33; ++i) {
        printf("1 << %d : %u\n", i, x);
        x <<= 1;
    }
    return 0;
}