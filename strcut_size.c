#include <stdio.h>

/* expected to 7 byte (sizeof(int) + sizeof(char[3]) = 7) */
struct some_struct_1 {
    int integer;
    char three_bytes[3];
};

/* expected to 11 byte (sizeof(char[3]) + double = 11) */
struct some_struct_2 {
    char three_bytes[3];
    double d;
};

int main(void)
{
    printf("sizeof(int) : %ld\n"
            "sizeof(double) : %ld\n\n", sizeof(int), sizeof(double));
    printf("expected size : 7 byte\n"
            "real size : %ld byte\n\n", sizeof(struct some_struct_1));
    printf("expected size : 11 byte\n"
            "real size : %ld byte\n", sizeof(struct some_struct_2));
    return 0;
}