#include <stdio.h>
#include <math.h>

int main(void)
{
    int sec;
    printf("Input the sec: ");
    scanf("%d",&sec);
    printf("%d sec = %d sec\n",sec,sec);
    printf("%d sec = %.2f minut\n",sec, sec / 60.0);
    printf("%d sec = %.2f hour\n",sec,sec / 60.0 / 60.0);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}