#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        perror(argv[0]);
        return EXIT_FAILURE;
    }

    //getchar is equivalent to fgetc(stdin)
    //scanf is equivalent to fscanf(stdin, ...)
    //printf is equivalent to fprintf(stdout, ...)
    for (int c = fgetc(f); c != EOF && c != '\n'; c = fgetc(f)) {
        putchar(c);
    }
    putchar('\n');

    fclose(f);

    return EXIT_SUCCESS;
}