#include <stdio.h>

void alter(int *px, int *py)
{
    int sum, dif;
    sum = *px + *py;
    dif = *px - *py;
    *px = sum;
    *py = dif;
}

int main(void)
{
    int a,b;
    printf("Input the a and b: ");
    scanf("%d%d",&a,&b);
    alter(&a,&b);
    printf("New value a = %d and b = %d\n",a,b);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}