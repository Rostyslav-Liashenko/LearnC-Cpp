#include <stdio.h>
#include <string.h>

void fix_string(char *s)
{
    int n = strlen(s);
    s[n-1] = '\0';
}

int main(void)
{
    FILE *f;
    char name[80];
    char str[400];
    printf("Input the name of file: ");
    fgets(name,sizeof(name),stdin);
    fix_string(name);
    f = fopen(name,"w");
    if (!f)
    {
        perror(name);
        return 1;
    }
    printf("Begin enter word in file:\n");
    while (fgets(str,sizeof(str),stdin))
    {
        fputs(str,f);
        fputc(0,f);
    }
    return 0;
}

