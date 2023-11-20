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

/* expected to 13 or 18 byte (sizeof(struct some_struct_2) + sizeof(char[2]) = 18 or 13) */
struct some_struct_3 {
    struct some_struct_2 structure;
    char two_bytes[2];
};

int main(void)
{
    printf("sizeof(int) : %ld\n"
            "sizeof(double) : %ld\n\n"
            "expected size : 7 byte\n"
            "real size of struct some_struct_1 : %ld byte\n" /* real size : 8 byte */
            "\n"
            "expected size : 11 byte\n"
            "real size of struct some_struct_2 : %ld byte\n" /* real size : 16 byte */
            "\n"
            "expected size : 13 or 18 byte\n"
            "real size of struct some_struct_3 : %ld byte\n" /* real size : 24 byte */
            "\n",
            sizeof(int), sizeof(double),
            sizeof(struct some_struct_1),
            sizeof(struct some_struct_2),
            sizeof(struct some_struct_3));
    return 0;
}