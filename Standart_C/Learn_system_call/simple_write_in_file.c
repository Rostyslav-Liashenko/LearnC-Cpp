#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void check_error(int num) {
    if (num == -1) {
        printf("Error!\n");
        exit(1);
    }
}


int main(void) {
    int fd;
    fd = open("file.txt",O_CREAT | O_RDWR,0666);
    check_error(fd);
    int num;
    while (1) {
        scanf("%d",&num);
        if (num == 0) {
            break;
        }
        check_error(write(fd,&num,sizeof(num)));
    }
    close(fd);
    return 0;
}
