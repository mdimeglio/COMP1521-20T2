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