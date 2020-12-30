#include <stdio.h>
#include <unistd.h>

void print_isatty(int fd) {
    if (isatty(fd)) {
        printf("descriptor %d has relation with terminal\n",fd);
    } else {
        printf("descriptor %d not has relation with terminal\n",fd);
    }
}


int main(void) {
    int fd = 0;
    for (int i = 0; i < 4; i++) {
        print_isatty(fd);
        fd++;
    }
}
