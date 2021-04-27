#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>
#include <sys/wait.h>


int main(void) {
    int ls;
    struct sockaddr_in addr;
    ls = socket(AF_INET, SOCK_STREAM, 0);
    if (ls == -1) {
        printf("Socket not could not create\n");
        return 1;
    }
    addr.sin_family = AF_INET;
    addr.sin_port = htons(5000);
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    if (-1 == bind(ls,(struct sockaddr *)&addr,sizeof(addr))) {
        printf("Bind not could");
        return 1;
    }
    for (;;) {
        socklen_t slen = sizeof(addr);
        int cls = accept(ls,(struct sockaddr *)&addr,&slen);
        if (fork() == 0) {
            close(ls);
            int random_number = rand() % 20;
            write(cls,&random_number,sizeof(random_number));
        }
        close(cls);
        while (wait4(-1,NULL,WNOHANG,NULL) > 0) {}
    }
    return 0;
}