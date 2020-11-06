#include <stdio.h>

long NSD(long a, long b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

long NSK(long x, long y)
{
    return x * y / NSD(x,y);
}

int main(void)
{
    int count;
    long a,b;
    printf("Input how many number: ");
    scanf("%d",&count);
    if (count <= 1)
    {
        printf("Your NSK is undefind\n");
    }
    printf("Input your first number: ");
    scanf("%ld",&a);
    count--;
    do
    {
        printf("input number: ");
        scanf("%ld",&b);
        a = NSK(a,b);
        count--;
    } while (count != 0);
    printf("NSK your number = %ld\n",a);
    printf("Create by Liasheko Rostyslav\n");
    return 0;
}