200358 = 2.00358 * 10^5
3 sig figs = 2.00 * 10^5

0.00135 = 1.35 * 10^-3

11011000 = 1.1011 * 2^7
0.001011 = 1.011 * 2^{-3}
0.001011 = 0 * 2^0 + 0 * 2^{-1} + 0 * 2^{-2} + 1 * 2^{-3} + 0 * 2^{-4} + 1*2^{-5} + 1* 2^{-6}
= 1/8  + 1/32 + 1/64 = 11/64

IEEE754
32 bits:
bit 31: sign. 0 if positive, 1 if negative.
bits 23 - 30: exponent.
bits 0 - 22: fraction.

0.001011 = 1.011 * 2^{-3} = (1 + 0.011) * 2^{124 - 127}
Any non-zero number in binary scientific notation begins with a 1

124 = 64 + 32 + 16 + 8  + 4 = 0b 01111100

0 01111100 01100000000000000000000



----

8 bit types

011011.01


00000   0   .   1     1
        *2^0    *1/2  *1/4

1/4 1/2 3/4

0 - 127 3/4



01101.101
range = 0 - 63 7/8
granularity = 1/8



1 340 000 = 1.34 * 10^6
0.000 54  = 5.4  * 10^{-4}

1001000000 = 1.001 * 2^9
0.0000101  = 1.01 * 2^{-5}

0 : sign - 0 = positive, 1 = negative
1 - 8 : exponent -> 2^{exponent - 127}
9 - 31: significant bits - ie. the ones afte the binary point

+1.1 * 2^{-21}

10010100
= 128 + 16 + 4
= 148


148 - 127 = 21
100000000000






00000000000000



100010010101

0.000010001 = 1.0001 * 2^{-5}

0 011????? 000100

struct x1
0 - 3 : a
4 - 7 : b


union x1
0 - 3 : a OR b







infinity is represented as:
0 => +ve
0b11111111 => either infinity or not a number
0b00000000000000000 => its infinity

or.
0b01010101000000000 => its not a number


NaN