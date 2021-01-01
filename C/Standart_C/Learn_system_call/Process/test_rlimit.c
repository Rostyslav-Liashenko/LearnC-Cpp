#include <stdio.h>
#include <sys/resource.h>
#include <unistd.h>

int main(void ) {
    struct rlimit lim;
    printf("LIMIT\n");
    getrlimit(RLIMIT_AS,&lim);
    printf("Max virtual memory: %ld\n",lim.rlim_cur);
    getrlimit(RLIMIT_NOFILE,&lim);
    printf("Max open input/output: %ld\n",lim.rlim_cur);
    lim.rlim_cur = 2048;
    setrlimit(RLIMIT_NOFILE,&lim);
    printf("Changed limit\n");
    getrlimit(RLIMIT_NOFILE,&lim);
    printf("Max open input/output: %ld\n",lim.rlim_cur);
    return 0;
}
