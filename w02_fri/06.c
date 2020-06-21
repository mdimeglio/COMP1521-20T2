#define N_BITS 16

// setBit(5, 4) == 21
// 5  = 0b 0000 0000 0000 0101
// 21 = 0b 0000 0000 0001 0101
int16_t setBit(int16_t x, int positionNumber) {
    
}

// Memory for bits

// char bits[] = "1000010000000000";

// Memory for bits:
// 0  : 0x31
// 1  : 0x30
// 2  : 0x30
// ...
// 31 : 0x30
// 32 : 0x00

// sixteen_in(bits) == 0b 1000 0010 0000 0000
// Memory for bits
// 0: 0x00
// 1: 0x84



// bits[0] -> 2^15
// bits[1] -> 2^14

//
// given a string of binary digits ('1' and '0')
//
// return the corresponding signed 16 bit integer
//
int16_t sixteen_in(char *bits) {
    int16_t result = 0;
    int i = 0;
    while (i < 16) {
        if (bits[i] == '1') {
            // set a bit in result corresponding to the character im currently visiting in the bits array
        }
        i++;
    }
    return result;
}