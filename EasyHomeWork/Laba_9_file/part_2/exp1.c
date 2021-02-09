#include <stdio.h>

int main(void) {
    FILE *in, *out;
    int i = 0, j,k = 0, n = 0;
    long len;
    char s[60];
    in = fopen("Liashenko_in.txt","r");
    if (!in) {
        puts("Error open file\n");
        return 0;
    }
    fseek(in,0,2);
    len = ftell(in);
    printf("Size file = %ld byte\n",len);
    fseek(in,0,0);
    out = fopen("Liashenko_out.txt","w");
    while ((s[i] = getc(in)) != EOF) {
        if (s[i] == '?') {
            for (j = n; j <= i; j++)
            putc(s[j],out);
            n = i + 1;
            k++;
        }
        if (s[i] == '.' || s[i] == '!') 
         n = i + 1;
        i++; 
    }
    putc('\n',out);
    printf("Create By Liashenko Rostyslav\n");
    fclose(in);
    fclose(out);
    return 0;
}