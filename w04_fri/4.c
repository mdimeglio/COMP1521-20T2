#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);

    // if (x > 46340 && x < -46340) {
    //     printf("square too big for 32 bits\n");
    // } else {
    //     y = x * x;
    //     printf("%d\n", y);
    // }
    
    // !(x > 46340 && x < -46340)
    // == x <= 46340 || x >= -46340
    // if (x <= 46340) goto ELSE
    // if (x >= -46340) goto ELSE
    // goto THEN

    if (x > 46340) goto THEN;
    if (x < -46340) goto THEN;
    goto ELSE;
THEN:
    printf("square too big for 32 bits\n");
    goto FI;
ELSE:
    y = x * x;
    printf("%d\n", y);
FI:
    return 0;
}