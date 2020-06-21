#include <stdio.h>
#include <stdint.h>

int main() {
    uint32_t x = 0xFFFFFFFF;
    printf("unsigned: %u\n", x);
    printf("signed: %d\n", (int32_t)x);

    // 0b011111...1
    //   100000...0
    // 0b000000..01
    // 00000000000

    // 00...0 1
    // 11....11

    011111111111 = 2^7 - 1
    100000000000
        = 01111111111
        = 10000000000
        -2^7





    011111111111 = 2^7 - 1

    100000000000 = 2^7

    100000000000 = -2^7
    011111111111
    100000000000 = 2^7
    
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