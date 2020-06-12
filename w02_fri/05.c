#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

typedef unsigned int uint32_t;

// getBit(5, 2) == 1
// getBit(5, 1) == 0
// 5  = 0b 0000 0000 0000 0101
uint32_t getBit(uint32_t w, int bitNumber) {
	return (w & 1<<bitNumber) >> bitNumber;
}

// setBit(5, 4) == 21
// 5  = 0b 0000 0000 0000 0101
// 21 = 0b 0000 0000 0001 0101
uint32_t setBit(uint32_t w, int bitNumber) {
	return w | 1 << bitNumber;
}

// int *reverseArray(int w[], int size) {
// 	int *reversed = malloc(sizeof(int) * size);
// 	int i = 0;
// 	while (i < size) {
// 		reversed[size - 1 - i] = w[i];
// 		i++;
// 	}
// 	return reversed;
// }

uint32_t reverseBits(uint32_t w) {
	uint32_t reversed = 0;
	int i = 0;
	while(i < 32) {
		if (getBit(w, i) == 1) {
			reversed = setBit(reversed, 31 - i);
		}
		i++;
	}
	return reversed;
}

int main() {
	uint32_t w1 = 0x01234567;
	//0000 => 0000 = 0
	//0001 => 1000 = 8
	//0010 => 0100 = 4
	//0011 => 1100 = C
	//0100 => 0010 = 2
	//0101 => 1010 = A
	//0110 => 0110 = 6
	//0111 => 1110 = E
	assert(reverseBits(w1) == 0xE6A2C480);
	printf("All tests passed!");
	return 0;
}