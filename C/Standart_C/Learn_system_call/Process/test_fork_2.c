#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
    int p = fork();
    if (p == 0) {
        printf("I'm the child, PID = %d PPID = %d\n",getpid(),getppid());
    } else {
        printf("I'm the parent, PID = %d PPID = %d\n",getpid(),getppid());
    }
    return 0;
}
