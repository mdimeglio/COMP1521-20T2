#include <stdio.h>

int main(void) {
    
    for (int x = 24; x < 42; x += 3) {
        printf("%d\n",x);
    }

    int x = 24;
    while (x < 42) {
        printf("%d\n",x);
        x += 3;
    }

COND:
    int x = 24;
    if (x < 24) {
        goto DO;
    }
    goto DONE;
DO:
    printf("%d\n",x);

    x += 3;
    goto COND;
DONE:


COND:
    # $t0 = x
    li  $t0, 24
    blt $t0, 24, DO
    j   DONE
DO:
    //printf("%d\n",x);
    addi    $t0, $t0, 3
    j COND
DONE:

 

}