#include <stdio.h>
#include <string.h>
int starmatch(const char *str, const char *pat);

int match(const char *str, const char *pat)
{
    switch(*pat)
    {
        case 0:
            return *str == 0;
        case '?':
            if (!*str)
                return 0;
            return match(str+1,pat+1);
        case '*':
            return starmatch(str,pat+1);
        default:
            if (*str != *pat)
                return 0;
            return match(str+1,pat+1);
    }
}

int starmatch(const char *str, const char *pat)
{
    int i;
    for (i = 0; ;i++){
        int res = match(str+i,pat);
        if (res)
            return 1;
        if (!str[i])
            return 0;
    }
}

void delete_new_line(char *s_in)
{   
    int n = strlen(s_in);
    s_in[n-1] = '\0';
}

int main(void)
{
    char s1[100];
    char s2[100];
    fgets(s1,sizeof(s1),stdin);
    delete_new_line(s1);
    fgets(s2,sizeof(s2),stdin);
    delete_new_line(s2);
    if (match(s1,s2))
    {
        printf("string is equale\n");
        return 0;
    }
    printf("string is not equale\n");
    return 0;
}
