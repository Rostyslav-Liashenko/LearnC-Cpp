#include <stdio.h>
#include <unistd.h>

int main(void) {
    int p = fork();
    if (p == 0) {
        printf("I'm the child\n");
    } else {
        printf("I'm the parent\n");
    }
    return 0;
}
