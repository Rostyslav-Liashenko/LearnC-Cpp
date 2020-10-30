#include <stdio.h>

int main(void)
{
    int num, div, a = 2, b = 20, k = 0;
    printf("Simple number %d to %d\n",a,b);
    for (num = a; num <= b; num++)
    {
        for (div = 2; num%div!=0; div++) ;
        if (div == num)
        {
            printf("%4d",num);
            k++;
        }
    }
    printf("\n All number = %d\n",k);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}