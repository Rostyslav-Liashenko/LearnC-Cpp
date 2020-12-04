#include <stdio.h>

int main(void) {
    char q[80];
    printf("Input the word:");
    scanf("%s",q);
    int i = 0;
    while (q[i] != '\0') {
        if (q[i]== 'a') {
            q[i] = 'b';
        }
        i++;
    }
    printf("Result: %s\n",q);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}