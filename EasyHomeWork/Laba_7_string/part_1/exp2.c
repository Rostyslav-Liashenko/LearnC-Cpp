#include <stdio.h>

int main(void) {
    char q[80];
    printf("Input the text: ");
    fgets(q,sizeof(q),stdin);
    printf("Inputed:\n%s",q);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}