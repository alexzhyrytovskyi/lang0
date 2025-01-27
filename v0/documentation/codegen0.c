//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//  Simple Code Generator
//  Author: Alex Zhyrytovskyi   created: 2025-01-26   lastmod: 2025-01-26
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
#include <stdio.h>
typedef int(*function)(int,int);
char code[] = {
    0x8B,0x44,0x24,0x04, // mov eax, [esp+4]
    0x03,0x44,0x24,0x08, // add eax, [esp+8]
    0xD1,0xF8,           // sar eax, 1
    0xC3                 // ret
};
int main() {
    function avg = (function)code;
    printf("%d\n", avg(3, 5));
    getchar();
    return 0;
}
