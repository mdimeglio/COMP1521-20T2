int main(void) {
    int i;
    int numbers[10] = {0,1,2,-3,4,-5,6,-7,8,9};

    i = 0;
WHILE:
    // if (i >= 10) goto DONE;
    if (i < 10) goto DO;
    goto DONE;
DO:
    if (numbers[i] < 0) goto THEN;
    goto FI;
THEN:
    numbers[i] += 42;
FI:
    i++;
    goto WHILE;
DONE:
    return 0;
}