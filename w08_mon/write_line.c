#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *f = fopen(argv[1], "w");
    if (f == NULL) {
        perror(argv[0]);
        return EXIT_FAILURE;
    }

    //getchar is equivalent to fgetc(stdin)
    //scanf is equivalent to fscanf(stdin, ...)
    //printf is equivalent to fprintf(stdout, ...)
    for (int c = getchar(); c != EOF && c != '\n'; c = getchar()) {
        fputc(c, f);
    }
    fputc('\n', f);

    fclose(f);

    return EXIT_SUCCESS;
}