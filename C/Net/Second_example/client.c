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

int main(int argc, char *argv[]) {
    int sockfd;
    int n;
    int num;
    struct sockaddr_in serv_addr;
    
    sockfd = socket(AF_INET,SOCK_STREAM,0);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(5000);
    inet_pton(AF_INET, argv[1], &serv_addr.sin_addr);
    connect(sockfd,(struct sockaddr*)&serv_addr,sizeof(serv_addr));
    while ( (n = read(sockfd,&num,sizeof(num))) > 0) {
        printf("%d\n",num);
    }
    return 0;
}