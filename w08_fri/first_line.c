#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return EXIT_FAILURE;
    }

    FILE *in = fopen(argv[1], "r");
    if (in == NULL) {
        perror(argv[1]);
        return EXIT_FAILURE;
    }

    for (int c = fgetc(in); c != EOF && c != '\n'; c = fgetc(in)) {
        if (putchar(c) == EOF) { // equivalently, fputc(c, stdout)
            perror(argv[1]);
            return EXIT_FAILURE;
        }; 
    }

    return EXIT_SUCCESS;
}