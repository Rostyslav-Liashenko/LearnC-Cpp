#include <stdio.h>

int main(void) {
    FILE *f1;
    int i = 0;
    char c;
    f1 = fopen("Liashenko.txt","w");
    printf("Input the symbols: ");
    while ((c = getchar()) != EOF)
        fputc(c,f1);
    fclose(f1);
    f1 = fopen("Liashenko.txt","r");
    putchar(10);
    while (!feof(f1)) {
        c = fgetc(f1);
        printf("%c ",c);
        i++;
    }
    fclose(f1);
    printf("\n Readed %d symbols\n",i);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}