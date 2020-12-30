#include <stdio.h>

int main(void) {
    int fd[2];
    int p1;
    pipe(fd);
    p1 = fork();
    if (p1 == 0) { /* child #1 */
        close(fd[0]);
        /* write();*/
        exit(0);
    }
    p2 = fork();
    if (p2 == 0) { /* child #2 */
        close(fd[1]);
        /* */
        rc = read(fd[0], /*....*/);
        exit(0);
    }
    wait(NULL);
    wait(NULL);
    close(fd[0]);
    close(fd[1]);
    return 0;
}
