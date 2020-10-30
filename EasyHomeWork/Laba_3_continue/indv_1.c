#include <stdio.h>
#include <math.h>

int main(void)
{
    int a,b,d;
    printf("Input a,b,d: ");
    scanf("%d%d%d",&a,&b,&d);
    for (int i = a; i <= b; i+= d)
    {
        printf("Y = sin %d + (sin %d)^2 + 3 = %.3f\n",i,i,sin(i) + pow(sin(i),2) + 3);
    }
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}