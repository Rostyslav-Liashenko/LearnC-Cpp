#include <stdio.h>
#include <malloc.h>

int main() {
    int *p;
    p = (int*) malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("A litte memory");
        return 1;
    }
    for (int k = 0; k < 10; k++) {
        printf("%4d",p[k]);
    }
    putchar(10);
    free(p);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}