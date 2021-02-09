#include <stdio.h>
#include <string.h>

struct book {
    char title[20];
    char author[20];
    int price;
};

struct book libry[100];
FILE *in, *out;


int find(int n) {
    int count = 0, k;
    char b[20];
    printf("Input the author or name book:\n");
    gets(b);
    for (k = 0; k < n; k++) {
        if (strcmp(libry[k].title,b) == 0 || strcmp(libry[k].author,b) == 0) {
            fprintf(out,"%d%10s%10s%6d\n",count+1,libry[k].title,libry[k].author,libry[k].price);
            count++;
        }
    }
    return count;
}

int main(void) {
    int i = 0, kil;
    char inname[30];

    printf("Input the name of file:\n");
    gets(inname);
    if ((in = fopen(inname,"r")) != NULL) {
        while (1) {
            if (fscanf(in,"%s%s%d",libry[i].title,libry[i].author,&libry[i].price) != 3) {
                break;
            }
            printf("%s %s %d\n",libry[i].title, libry[i].author,libry[i].price);
            i++;
        }
        printf("All find %d books\n",i);
        out = fopen("Liashenko_out.txt","w");
        kil = find(i);
        fputs("Result of find:",out);
        fprintf(out,"\n All find %d books\n",kil);
        fclose(in);
        fclose(out);
    } else {
        printf("File %s is not found!!!\n",inname);
    }  
    printf("Create By Liashenko Rostyslav\n"); 
    return 0;
}