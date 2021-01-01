#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/resource.h> 
#include <sys/time.h>

int main(void) {
    pid_t current_pid;
    current_pid = getpid();
    printf("Current priority = %d\n",nice(0));
    printf("Lower priority by 3\n");
    printf("Current priority = %d\n",nice(3));
    setpriority(PRIO_PROCESS,current_pid,5);
    printf("Current priority = %d\n",nice(0));
    return 0;
}
