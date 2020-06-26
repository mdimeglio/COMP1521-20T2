#include <stdio.h>

int main(void) {
    // for (int x = 24; x < 42; x += 3) {
    //     printf("%d\n",x);
    // }

    // int x = 24;
    // while (x < 42) {
    //     printf("%d\n",x);
    //     x += 3;
    // }

    int x = 24;
COND:
    if (x < 42) goto DO;
    goto DONE;
DO:
    printf("%d\n",x);
    x += 3;
    goto COND;
DONE:
    return 0;
}