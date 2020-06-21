#include <stdio.h>

int main() {
    char x = -1;
    x = x >> 4;
    printf("%02x\n", x);
    return 0;
}


// 703C
// 8FC1
// FFFD -> -3
// 0003

// D = 13 = 8 + 4 + 1 = 0b 1101
// 0b0011