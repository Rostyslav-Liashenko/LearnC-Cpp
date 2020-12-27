#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("uid = %d\n",getuid());
    printf("euid = %d\n",geteuid());
    printf("getgid = %d\n",getgid());
    printf("getegid = %d\n",getegid());
    return 0;
}
