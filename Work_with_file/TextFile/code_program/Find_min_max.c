#include <stdio.h>
#include <string.h>

void fix_fgets(char *s_in)
{
    int n = strlen(s_in);
    s_in[n-1] = '\0';
}

int main(void)
{
    FILE *src;
    char name[20];
    int min, max, num;
    printf("Input the name of file: ");
    fgets(name,sizeof(name),stdin);
    fix_fgets(name);
    src = fopen(name,"r");
    if (!src)
    {
        perror(name);
        return 1;
    }
    fscanf(src,"%d",&min);
    max = min;
    while (fscanf(src,"%d",&num) == 1)
    {
        if (num > max)
            max = num;
        if (num < min)
            min = num;
    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    return 0;
}
