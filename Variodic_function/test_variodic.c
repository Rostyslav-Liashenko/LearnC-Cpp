#include <stdio.h>
#include <stdarg.h>

int sum(int c, ...)
{
    va_list vl;
    int s = c,k;

    va_start(vl,c); /* init */
    while((k = va_arg(vl,int)) != 0) /* next parameter */
        s += k;
    va_end(vl); /* end */
    
    return s;
}

void print_times(const char *str, ...)
{
    va_list vl;
    const char *p;
    va_start(vl,str); /* init */
    for (p = str; p; p = va_arg(vl, const char *))
    {
        int n, i;
        n = va_arg(vl, int);
        for (i = 0; i < n; i++)
            printf("%s",p);
        printf("\n");
    }
    va_end(vl);
}

int main(void)
{
    int k;
    k = sum(6,8,9,10,2,5,6,7,10,0);
    printf("Summa = %d\n",k);
    print_times("once ",1,"twice ",2,"seven times ",7,NULL);
    return 0;
}