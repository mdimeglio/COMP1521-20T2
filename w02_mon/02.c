#include <stdio.h>


int main() {
    int x;
    
    x = 12345678;
    printf("Decimal: %d\n", x);
    printf("Hexadecimal: %x\n", x);
    printf("Octal: %o\n", x);

    printf("\n");

    x = 0x12345678;
    printf("Decimal: %d\n", x);
    printf("Hexadecimal: %x\n", x);
    printf("Octal: %o\n", x);

    printf("\n");

    x = 01234567;
    printf("Decimal: %d\n", x);
    printf("Hexadecimal: %x\n", x);
    printf("Octal: %o\n", x);

    return 0;
}