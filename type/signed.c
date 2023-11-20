#include <stdio.h>

int main(void)
{
    int x = 4200000000;
    int y = 2100000000;
    printf("int x = 4200000000;\n"
            "int y = 2100000000;\n\n"
            "print x in \'%%d\' format = %d\n"
            "print x in \'%%u\' format = %u\n\n"
            "print y in \'%%d\' format = %d\n"
            "print y in \'%%u\' format = %u\n", x, x, y, y);
    return 0;
}