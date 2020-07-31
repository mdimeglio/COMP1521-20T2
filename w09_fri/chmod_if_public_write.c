// remove public write from specified as command line arguments if needed
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int chmod_if_needed(char *pathname);

int main(int argc, char *argv[]) {
    for (int arg = 1; arg < argc; arg++) {
        int err = chmod_if_needed(argv[arg]);
        if (err) {
            perror(argv[0]);
            return 1;
        }
    }
    return 0;
}

// chmod a file if publically-writeable
// returns 0 if successful
// returns -1 if error, and error in errno variable.
int chmod_if_needed(char *pathname) {
    struct stat s;
    int err = stat(pathname, &s);
    if (err) return err;

    mode_t m = s.st_mode;

    if (!S_ISREG(m) && !S_ISDIR(m)) {
        fprintf(stderr, "%s is not a file or directory\n", pathname);
        return 0;
    }

    if (! (m & S_IWOTH)) {
        fprintf(stderr, "%s is not publically writable\n", pathname);
        return 0;
    }

    m = (m & ~S_IWOTH);

    err = chmod(pathname, m);
    if (err) return err;

    return 0;
}