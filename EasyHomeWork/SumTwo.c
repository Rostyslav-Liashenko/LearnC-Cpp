#include <stdio.h>

int main(void)
{
    int num;
    printf("Input the two-digit number: ");
    scanf("%d",&num);
    printf("Summa = %d + %d = %d\n",num / 10, num % 10, num / 10 + num % 10);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}