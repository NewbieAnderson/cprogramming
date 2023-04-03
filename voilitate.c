#include <stdio.h>

/*  volatile keyword used
    0x0000000000001155 <+12>:    mov    DWORD PTR [rbp-0x4],0x1
    0x000000000000115c <+19>:    mov    eax,DWORD PTR [rbp-0x4]
    0x000000000000115f <+22>:    add    eax,0x2
    0x0000000000001162 <+25>:    mov    DWORD PTR [rbp-0x4],eax
    0x0000000000001165 <+28>:    mov    eax,DWORD PTR [rbp-0x4]
    0x0000000000001168 <+31>:    mov    esi,eax
    0x000000000000116a <+33>:    lea    rdi,[rip+0xe93]
*/

/*  without using volatile keyword
    0x0000000000001155 <+12>:    mov    DWORD PTR [rbp-0x4],0x1
    0x000000000000115c <+19>:    add    DWORD PTR [rbp-0x4],0x2
    0x0000000000001160 <+23>:    mov    eax,DWORD PTR [rbp-0x4]
    0x0000000000001163 <+26>:    mov    esi,eax
    0x0000000000001165 <+28>:    lea    rdi,[rip+0xe98]
*/

int main(void)
{
    volatile int x = 1;
    x += 2;
    printf("%d\n", x);
    return 0;
}