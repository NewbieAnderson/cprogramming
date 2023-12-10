#include <stdio.h>
#include <string.h>

struct a {
    int four_bytes;
    char byte;
};

struct b {
    char byte;
    int four_bytes;
};

int main(void)
{
    struct a s1;
    struct b s2;
    int i;
    memset(&s1, 0xFF, sizeof(struct a));
    memset(&s2, 0xFF, sizeof(struct b));
    s1.four_bytes = 0x55443322;
    s1.byte = 0x11;
    s2.byte = 0x11;
    s2.four_bytes = 0x55443322;
    printf("Memory Layout of s1(struct a), s2(struct b)\ns1   s2\n");
    for (i = 0; i < sizeof(struct a); ++i) {
        printf("0x%2X 0x%2X\n", *((unsigned char *)&s1 + i), *((unsigned char *)&s2 + i));
    }
    return 0;
}