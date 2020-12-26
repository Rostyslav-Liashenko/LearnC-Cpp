#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void) {
    int pid, status;
    pid = fork();
    if (pid == 0) {
        int fd = open("flist",O_CREAT|O_WRONLY|O_TRUNC, 0666);
        dup2(fd,1);
        close(fd);
        execlp("ls", "ls", "-l","-a", "-R", "/", NULL);
        perror("ls");
        exit(1);
    }
    wait(&status);
    if(!WIFEXITED(status) || WEXITSTATUS(status) != 0) {
     /* proccesed error */
    }
    return 0;
}
