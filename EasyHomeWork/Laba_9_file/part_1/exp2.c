#include <stdio.h>

int main() {
    FILE *f;
    int x,s = 0;
    f = fopen("Liashenko_inp.txt","r");
    if (!f) {
        printf("File not found\n");
        return 0;
    }
    while (fscanf(f,"%d",&x) == 1) {
        printf("%d\n",x);
        s += x;
    }
    fclose(f);
    f = fopen("Liashenko_out.txt","w");
    fprintf(f,"Suma = %d\n",s);
    fclose(f);
    printf("Create by Liashenko Rostyslab PSK - 18\n");
    return 0;
}