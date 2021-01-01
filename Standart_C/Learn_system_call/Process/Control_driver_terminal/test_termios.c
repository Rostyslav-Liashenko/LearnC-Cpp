#include <stdio.h>
#include <unistd.h>
#include <termios.h>
#include <string.h>

enum { bufsize = 128};

int main() {
    struct termios ts1, ts2;
    char buf[bufsize];
    if(!isatty(0)) {
        fprintf(stderr,"Not a terminal, sorry\n");
        return 1;
    }
    tcgetattr(0,&ts1); 
    memcpy(&ts2, &ts1, sizeof(ts1));
    ts1.c_lflag &= ~ECHO;
    tcsetattr(0, TCSANOW, &ts1);
    printf("Please blind-type the code: ");
    if (!fgets(buf,sizeof(buf),stdin)) {
        fprintf(stderr,"Unexpected end of file\n");
        return 1;
    }
    printf("\nThe code you entered is %s",buf);
    tcsetattr(0, TCSANOW, &ts2);
    return 0;
}
