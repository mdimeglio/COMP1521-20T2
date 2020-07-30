#include <stdio.h>

// fopen -> open
// putchar -> write
// getchar -> read
// printf -> write
// scanf -> read
// fclose -> close



// for (nb = read (fd, buf, 1000); nb > 0; nb = read (fd, buf, 1000)) {
// 	for (int i = 0; i < nb; i++)
// 		if (isspace (buf[i]))
// 			ns++;
// }


int f() {
    int fd = open(...)
    if (fd == -1) {
        perror("Hello");  : File not found
        return -1;
    }
    ....
}
