#include <stdio.h>

int main(void)
{
    unsigned int x = -1;
    unsigned int y = 0xFFFFFFFF;
    int z = x;
    int w = y;
    unsigned long long int p = 0xFFFFFFFF;
    unsigned long long int q = 0xFFFFFFFFFFFFFFFF;
    printf("unsigned int x = -1\n"
            "unsigned int y = 0xFFFFFFFF\n"
            "int z = x\n"
            "int w = y\n"
            "unsigned long long int p = 0xFFFFFFFF\n"
            "unsigned long long int q = 0xFFFFFFFFFFFFFFFF\n\n");
    printf("  signed x : %d\n", x);     /* -1 */
    printf("unsigned x : %u\n\n", x);   /* 4294967295 */
    printf("  signed y : %d\n", y);     /* -1 */
    printf("unsigned y : %u\n\n", y);   /* 4294967295 */
    printf("  signed z : %d\n", z);     /* -1 */
    printf("unsigned z : %u\n\n", z);   /* 4294967295 */
    printf("  signed w : %d\n", w);     /* -1 */
    printf("unsigned w : %u\n\n", w);   /* 4294967295 */
    printf("  signed p : %lld\n", p);   /* 4294967295 */
    printf("unsigned p : %llu\n\n", p); /* 4294967295 */
    printf("  signed q : %lld\n", q);   /* -1 */
    printf("unsigned q : %llu\n\n", q); /* 18446744073709551615 */
    return 0;
}