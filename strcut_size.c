#include <stdio.h>

/* expected to 7 byte (sizeof(int) + sizeof(char[3]) = 7) */
struct some_struct_1 {
    int integer;
    char three_bytes[3];
};

/* expected to 11 byte (sizeof(char[3]) + sizeof(double) = 11) */
struct some_struct_2 {
    char three_bytes[3];
    double d;
};

/* expected to 18 or 13 byte (sizeof(struct some_struct_2) + sizeof(char[2]) = 18 or 13) */
struct some_struct_3 {
    struct some_struct_2 structure;
    char two_bytes[2];
};

int main(void)
{
    printf("sizeof(int) : %ld\n"
            "sizeof(double) : %ld\n\n", sizeof(int), sizeof(double));
    printf("expected size : 7 byte\n"
            "real size of struct some_struct_1 : %ld byte\n\n", sizeof(struct some_struct_1));
    printf("expected size : 11 byte\n"
            "real size of struct some_struct_2 : %ld byte\n\n", sizeof(struct some_struct_2));
    printf("expected size : 18 or 13 byte\n"
            "real size of struct some_struct_3 : %ld byte\n\n", sizeof(struct some_struct_3));
    return 0;
}