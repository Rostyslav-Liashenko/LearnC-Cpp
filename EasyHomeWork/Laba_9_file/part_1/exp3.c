#include <stdio.h>
#include <string.h>

#define maxline 80

int main() {
    int count = 0;
    FILE *in, *out;
    char name[maxline];
    if ((in = fopen("Liashenko_in.txt","r")) != NULL) {
        while (fgets(name,maxline, in) != NULL)
        {
            fputs(name,stdout);
            count++;
        }
        out = fopen("Liashenko_out.txt","w");
        fprintf(out,"\n All %d string\n",count);
        fclose(in);
        fclose(out);
    }
    else {
        printf("File Liashenko_in.txt not find\n");
    }
}