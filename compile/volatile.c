/* Compile Command : gcc -O3 -o voilitate voilitate.c */

/*
 * without using volatile keyword
 * 0x0000000000001040 <+0>:     endbr64
 * 0x0000000000001044 <+4>:     mov    eax,0x5
 * 0x0000000000001049 <+9>:     ret
 */

/*
 *  volatile keyword used
 *  0x0000000000001040 <+0>:     endbr64
 *  0x0000000000001044 <+4>:     mov    DWORD PTR [rsp-0x4],0x1
 *  0x000000000000104c <+12>:    mov    eax,0xf4240
 *  0x0000000000001051 <+17>:    nop    DWORD PTR [rax+0x0]
 *  0x0000000000001058 <+24>:    mov    DWORD PTR [rsp-0x4],0x5
 *  0x0000000000001060 <+32>:    sub    eax,0x1
 *  0x0000000000001063 <+35>:    jne    0x1058 <main+24>
 *  0x0000000000001065 <+37>:    mov    eax,DWORD PTR [rsp-0x4]
 *  0x0000000000001069 <+41>:    ret
 */

int main(void)
{
    volatile int x = 1;
    int i;
    for (i = 0; i < 1000000; ++i)
        x = 5;
    return x;
}