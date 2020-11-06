#include <stdio.h>

int Fact(int n)
{
    int i, dob = 1;
    for (i = 1; i <= n; i++)
    {
        dob *= i;
    }
    return dob;
}


int main(void)
{
    int x;
    printf("\n Input the number x = ");
    scanf("%d",&x);
    printf("\n %d! = %d\n",x,Fact(x));
    return 0;
}