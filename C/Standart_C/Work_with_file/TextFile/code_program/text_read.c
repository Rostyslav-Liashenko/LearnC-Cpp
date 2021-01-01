#include <stdio.h>
#include <string.h>

void fix_fgets(char *s)
{
    int n = strlen(s);
    s[n-1] = '\0';
}

int main(void)
{
    FILE *f;
    char name[50];
    char str[500];
    printf("Input the name of file: ");
    fgets(name,sizeof(name),stdin);
    fix_fgets(name);
    f = fopen(name,"r");
    if (!f)
    {
        perror(name);
        return 1;
    }
    while (fgets(str,400,f))
    {
        fputs(str,stdout);
    }
    return 0;
}
