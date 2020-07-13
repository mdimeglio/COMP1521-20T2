#include <stdio.h>

int main(void) {
    int i;
    int numbers[10] = {0};

    i = 0;
while1:
    if (i < 10) goto do1;
    goto done1;
do1:
    scanf("%d", numbers + i); // actually numbers + 4 * i
    i++;
    goto while1;
done1:

    i = 0;
while2:
    if (i < 10) goto do2;
    goto done2;
do2:
    printf("%d\n", *(numbers + i));
    i++;
    goto while2;
done2:

    return 0;
}


// numbers[i] == *(numbers + i) == i[numbers]