#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t x = 0xFFFFFFFF;
    printf("unsigned: %u\n", x);
    printf("signed: %d\n", (int32_t)x);

    // 00...0 1
    // 11....11
    
    // x = 12345678;
    // printf("Decimal: %d\n", x);
    // printf("Hexadecimal: %x\n", x);
    // printf("Octal: %o\n", x);

    // printf("\n");

    // x = 0x12345678;
    // printf("Decimal: %d\n", x);
    // printf("Hexadecimal: %x\n", x);
    // printf("Octal: %o\n", x);

    // printf("\n");

    // x = 01234567;
    // printf("Decimal: %d\n", x);
    // printf("Hexadecimal: %x\n", x);
    // printf("Octal: %o\n", x);

    return 0;
}