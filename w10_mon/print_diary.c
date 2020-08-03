// print $HOME/.diary to stdout

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getDiaryPath();
void printFile(char *path);

int main(int argc, char *argv[]) {
    char *diaryPath = getDiaryPath();
    if (diaryPath == NULL) {
        return EXIT_FAILURE;
    }
    if (printFile(diaryPath)) {
        perror(argv[0]);
        return EXIT_FAILURE;
    }
    free(diaryPath);
    return EXIT_SUCCESS;
}

char *getDiaryPath() {
    char *homePath = getenv("HOME");
    if (homePath == NULL) return NULL;

    char *baseName = "/.diary";
    int size = strlen(homePath) + strlen(baseName) + 1;
    char *path = malloc(size * sizeof(char));
    snprintf(path, size, "%s%s", homePath, baseName);

    return path;
}

int printFile(char *path) {
    int err = -1;
    FILE *in = fopen(path, "r");
    if (in == NULL) goto CATCH;

    int c = fgetc(in);
    while (c != EOF) {
        putchar(c);
        c = fgetc(in);
    }

    err = 0;
CATCH:
    fclose(in);
    return err;
}