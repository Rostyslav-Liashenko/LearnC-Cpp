#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void) {
    printf("Parent\n");
    printf("PID = %d\n",getpid());
    printf("SID = %d\n",getsid(0));
    printf("PGID = %d\n",getpgid(0));
    int child = fork();
    if (child == 0) {
        printf("Children\n");
        printf("PID = %d\n",getpid());
        printf("SID = %d\n",getsid(0));
        printf("PGID = %d\n",getpgid(0));
    }
    wait(NULL);
    return 0;
}
