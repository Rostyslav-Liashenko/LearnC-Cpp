#include <stdio.h>
#include <math.h>

int main(void)
{
    int tmp,minut,hour,sec;
    printf("Input the sec: ");
    scanf("%d",&tmp);
    printf("%d --> %d hour, %d minut %d\n",tmp,tmp / 3600,tmp / 60 % 60,tmp % 60);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}