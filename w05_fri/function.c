#include <stdio.h>

int add(int a, int b);

int main(void) {
    int x, y, z;
    scanf("%d", x);
    scanf("%d", y);
    z = add(x, y);
    printf("%d\n", z);
    return 0;
}

int add(int a, int b) {
    return a + b;
}