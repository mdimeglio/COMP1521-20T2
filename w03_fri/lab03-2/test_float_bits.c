// Extract the 3 parts of a float using bit operations only

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

#include "floats.h"

// input
// 0 100 0000 0 1 001 .......
// 1 000000000
// 0 111 1111 1 00000000
// 0 000 0000 0 111111111

int main(int argc, char *argv[]) {
    for (int arg = 1; arg < argc; arg++) {
        union overlay input;
        // 42 = 32 + 8 + 2
        //    = 0b 1.01010 * 2^5 
        //    = 0b 1.01010 * 2^{132 - 5}
        // 132 = 128 + 4 = 0b 1000 0100
        // IEEE754 for -42
        //    = 1 10000100 01010000000000000000000

        // 000000000 01010000000000000000000
        // 0000 0000 0010 1000 0000 0000 0000 0000
        //    0    0    2    8    0    0    0    0


        // 1111 1111 1111 1111 1111 1111 1111
        // 1.111 1111 1111 1111 1111 1111 * 2^{27}


        // 0 11111111 00000000...0
        // 0xF << 23 = infty
        // 0x1F << 23 = -infty
        input.f = atof(argv[arg]);
        float_components_t c = float_bits(input.u);

        printf("float_bits(%.9g) returned\n", input.f);
        printf("sign=0x%x\n", c.sign);
        printf("exponent=0x%02x\n", c.exponent);
        printf("fraction=0x%06x\n", c.fraction);

        printf("is_nan returned %d\n", is_nan(c));
        printf("is_positive_infinity returned %d\n", is_positive_infinity(c));
        printf("is_negative_infinity returned %d\n", is_negative_infinity(c));
        printf("is_zero returned %d\n", is_zero(c));
    }

    return 0;
}
