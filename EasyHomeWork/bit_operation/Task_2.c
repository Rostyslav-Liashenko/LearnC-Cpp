#include <stdio.h>

int main(void)
{
    int x,len;
    printf("Input the number x: ");
    scanf("%d",&x);
    for (len = 0; x!= 0; x >>= 1)
    {
            len++;
    }
    printf("Count bits = %d\n",len);
    return 0;
}