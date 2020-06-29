#include <stdio.h>

int main(void) {
    int i;
    int numbers[10] = {0};

    i = 0;
    while (i < 10) {
        scanf("%d", numbers + i);
        // numbers + 4i
        i++;
    }

    return 0;
}

// array a of ints
// index i

// a[i] == *(a + i) == i[a]