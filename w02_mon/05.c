#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

uint32_t getBit(uint32_t w, int bitNumber) {
	return (w & (1 << bitNumber)) >> bitNumber;
}

uint32_t setBit(uint32_t w, int bitNumber) {
	return w | 1 << bitNumber;
}

uint32_t reverseBits(uint32_t w) {
	uint32_t res = 0;
    int bitNumber = 0;
	while (bitNumber < 32) {
		if (getBit(w, bitNumber)) {
			res = setBit(res, 31 - bitNumber);
		}
		// uint32_t wMask = 1 << bitNumber;
		// uint32_t rMask = 1 << (31 - bitNumber);
		// res = res | ((w & wMask) >> bitNumber) << (31 - bitNumber);

		bitNumber++;
	}
	return res;
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


/*uint32_t reverseBits(uint32_t w) {
	uint32_t ret = 0;
	for (int bit = 0; bit < 32; bit++) {
		uint32_t wMask = 1<<(31 - bit);
		uint32_t retMask = 1<<bit;

		if (w & wMask) {
			ret = ret | retMask;
		}
	}

	return ret;
}*/