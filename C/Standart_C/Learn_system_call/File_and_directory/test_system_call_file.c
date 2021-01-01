#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

void check_error(int num) {
    if (num == -1) {
        printf("Error\n");
        exit(1);
    }
}


int main(void){
    int inp_number;
    int out_number = 0;

    printf("Input the number for write in file: ");
    scanf("%d",&inp_number);
    printf("out_number = %d\n",out_number);
    int file  = open("test_text",O_RDWR|O_CREAT,0666);
    check_error(file);
    check_error(write(file, &inp_number, sizeof(inp_number)));
    lseek(file,0,SEEK_SET);
    check_error(read(file, &out_number, sizeof(out_number)));
    printf("out_number = %d\n",out_number);
    return 0;
}
