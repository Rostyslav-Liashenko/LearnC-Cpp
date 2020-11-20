#include <stdio.h>

int strlen(char *s) {
    int n;
    for (n = 0; s[n] != '\0'; n++)
    ;
    return n;
}

int main(void) {
    int k;
    char a[20];
    k = strlen("Hello");
    printf("Input the string: ");
    scanf("%s",a);
    printf("Length hello = %d\n",k);
    printf("Length %s = %d\n",a,strlen(a));
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}