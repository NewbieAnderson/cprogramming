#include "./extern_header.h"

/* GCC : Error message
 * /usr/bin/ld: /tmp/ccPCPqNp.o: in function `foo':
 * extern_header.c:(.text+0xa): undefined reference to `value'
 * /usr/bin/ld: extern_header.c:(.text+0x13): undefined reference to `value'
 * collect2: error: ld returned 1 exit status
 */
int main(void)
{
    foo(); /* linking error! */
    return 0;
}