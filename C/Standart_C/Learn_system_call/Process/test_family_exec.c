#include <stdio.h>
#include <unistd.h>
/*
 * int execve(const char *name, char* const *argv, char* const *envir)
 * int execv(const char *name, char* const *argv)
 * int execvp(const char *name, char* const *argv); find in system directory
 * int execl(const char *name, const char *argv0, ...) NULL in end
 * int execlp(const char *name, const char *argv0, ...);analog execl, but
 * find in PATH
*/


int main(void) {
    char *cmdline[] = {"ls", "-l", "-a", NULL};
    execvp("ls",cmdline);
    perror("ls");
    fflush(stderr);
    _exit(1);
    return 0;
}
