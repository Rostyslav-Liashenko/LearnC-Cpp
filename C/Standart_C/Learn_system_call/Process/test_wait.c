#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdlib.h>

int main(void) {
    int status, wr;
    int pid_child = fork();
    if (pid_child == 0) { /* code for children process */
        printf("I am a children\n");
        exit(0);
    }
    wr = wait(&status);
    if (wr == -1) {
        printf("There are no child processes at all\n");
    } else {
        printf("Process with pid = %d finished.\n",wr);
        if (WIFEXITED(status)) {
            printf("It has exited with code = %d.\n",WEXITSTATUS(status));
        } else {
             printf("It was killed by signal %d.\n",WTERMSIG(status));
        }
    }
    return 0;
}
