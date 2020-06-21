// Extract the 3 parts of a float using bit operations only

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <assert.h>

#include "floats.h"

// HEAP:
// 100:     |
// 104:     | float_compoennts_t
// 108:     |


// STACK:
// float_bits
// 300: 100 | x : float_components_t *
// 304:


// INSTEAD:

// STACK
// float_bits:
// 300: 00000...00000 | x.sign
// 304: 000...1000000 | x.exponent
// 308: 000..10000000000| x.fraction
// 312: 010000001000... | f



// separate out the 3 components of a float
float_components_t float_bits(uint32_t f) {
    //float_compents_t * x = malloc(sizeof (float_components_t));
    float_components_t x;
    // PUT YOUR CODE HERE

    // x->sign = ...
    x.sign = ...

    return x;
}

// given the 3 components of a float
// return 1 if it is NaN, 0 otherwise
int is_nan(float_components_t f) {
    // PUT YOUR CODE HERE

    return 42;
}

// given the 3 components of a float
// return 1 if it is inf, 0 otherwise
int is_positive_infinity(float_components_t f) {
    // PUT YOUR CODE HERE

    return 42;
}

// given the 3 components of a float
// return 1 if it is -inf, 0 otherwise
int is_negative_infinity(float_components_t f) {
    // PUT YOUR CODE HERE

    return 42;
}

// given the 3 components of a float
// return 1 if it is 0 or -0, 0 otherwise
int is_zero(float_components_t f) {
    // PUT YOUR CODE HERE

    return 42;
}
