#include <stdio.h>

int main(void) {
    int x, y;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 46340) goto THEN;
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