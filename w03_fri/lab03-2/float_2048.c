// Multiply a float by 2048 using bit operations only

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

#include "floats.h"

// float_2048 is given the bits of a float f as a uint32_t
// it uses bit operations and + to calculate f * 2048
// and returns the bits of this value as a uint32_t
//
// if the result is too large to be represented as a float +inf or -inf is returned
//
// if f is +0, -0, +inf or -int, or Nan it is returned unchanged
//
// float_2048 assumes f is not a denormal number
//


// UP TO END LINE 30:

// 200 : 0b 1 1000000 1000000 00000000 00000000 | f
// 204 : 0b 00000000 00000000 00000000 00000001 | c.sign
// 208 : 0b 00000000 00000000 00000000 10000000 | c.exponent
// 212 : 0b 00000000 01000000 00000000 00000000 | c.fraction

// UP TO END LINE 31
// 200 : 0b 11000000 01000000 00000000 00000000 | f
// 204 : 0b 00000000 00000000 00000000 00000001 | c.sign
// 208 : 0b 00000000 00000000 00000000 10000000 | c.exponent
// 212 : 0b 00000000 01000000 00000000 00000000 | c.fraction

// exponent: 0b 00000000 00000000 00000000 11111111
// 0b 00000000 00000000 00000001 00001010
// 0 00001010 000....


// 11000000 01000000 00000000 00000000 >> 23 == ...00000 11000000 01
// 1 10001011 1000000 00000000 00000000

uint32_t components_to_bits(float_components_t c) {
    return 0;
}

uint32_t float_2048(uint32_t f) {
    float_components_t c = float_bits(f);
    c.exponent += 11;
    return components_to_bits(c);
}
