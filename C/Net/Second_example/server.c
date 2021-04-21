#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <time.h> 
#include <fcntl.h>

int main() {
    srand(time(NULL));

    int listen_socket_fd, accept_socket_fd;
    struct sockaddr_in serv_addr;

    listen_socket_fd = socket(AF_INET, SOCK_STREAM, 0);
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(5000);
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);

    bind(listen_socket_fd,(struct sockaddr *) &serv_addr, sizeof(serv_addr));
    listen(listen_socket_fd, 10);
    
    accept_socket_fd = accept(listen_socket_fd, (struct sockaddr*)NULL, NULL);
    for (int i = 0; i < 10; i++) {
        int random_number = rand() % 100;
        write(accept_socket_fd,&random_number,sizeof(random_number));
    }
    close(accept_socket_fd);
    return 0;
}