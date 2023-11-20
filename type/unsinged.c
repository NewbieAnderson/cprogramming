#include <stdio.h>

int main(void)
{
    unsigned int x = -1;
    unsigned int y = 0xFFFFFFFF;
    int z = x;
    int w = y;
    unsigned long long int p = 0xFFFFFFFF;
    unsigned long long int q = 0xFFFFFFFFFFFFFFFF;
    unsigned long long int r = -1;
    printf("unsigned int x = -1\n"
            "unsigned int y = 0xFFFFFFFF\n"
            "int z = x\n"
            "int w = y\n"
            "unsigned long long int p = 0xFFFFFFFF\n"
            "unsigned long long int q = 0xFFFFFFFFFFFFFFFF\n"
            "unsigned long long int r = -1\n\n"
            "  signed x : %d\n"     /* -1 */
            "unsigned x : %u\n\n"   /* 4294967295 */
            "  signed y : %d\n"     /* -1 */
            "unsigned y : %u\n\n"   /* 4294967295 */
            "  signed z : %d\n"     /* -1 */
            "unsigned z : %u\n\n"   /* 4294967295 */
            "  signed w : %d\n"     /* -1 */
            "unsigned w : %u\n\n"   /* 4294967295 */
            "  signed p : %lld\n"   /* 4294967295 */
            "unsigned p : %llu\n\n" /* 4294967295 */
            "  signed q : %lld\n"   /* -1 */
            "unsigned q : %llu\n\n" /* 18446744073709551615 */
            "  singed r : %lld\n"   /* -1 */
            "unsinged r : %llu\n",  /* 18446744073709551615 */
            x, x, y, y, z, z, w, w, p, p, q, q, r, r);
    return 0;
}