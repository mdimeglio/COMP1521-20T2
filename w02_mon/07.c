#define N_BITS 16

// If x = 5
// 5 in binary 0000 0000 0000 0101
// setBit(5, 4) == 21  (0000 0000 0001 0101)

int16_t setBit(int16_t x, int positionNumber) {
    return ???;
}

// Memory for bits

// 0 : 0x31
// 1 : 0x30
// 2 : 0x30
// ...
// 31 : 0x30
// 32 : 0x00


// 0: 0x00
// 1: 0x84

// char bits[] = "1000010000000000";
// sixteen_in(bits) returns a number
// whose binary respresentation is
// 1000 0010 0000 0000


// bits[0] -> 2^15
// bits[1] -> 2^14

//
// given a string of binary digits ('1' and '0')
// return the corresponding signed 16 bit integer
//
int16_t sixteen_in(char *bits) {
    int16_t result = 0;
    int i = 0;
    while (i < N_BITS) {
        if (bits[i] == '1') {
            result = setBit(result, 15 - i)
        } 
        i++;
    }

    return result;
}