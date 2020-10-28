#include <stdio.h>

int main(void)
{
    int x,b;
    printf("Input the number x: ");
    scanf("%d",&x);
    for (b = 0; x!= 0; x >>= 1)
    {
        if (x&01)
            b++;
    }
    printf("Count bit 1 = %d\n",b);
    return 0;
}