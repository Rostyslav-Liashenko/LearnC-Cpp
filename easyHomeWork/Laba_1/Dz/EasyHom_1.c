#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Vvod two numbers: ");
    scanf("%d %d",&a,&b);
    int sum = a + b;
    printf("\t%d\n",a);
    printf("+\n");
    printf("\t%d\n",b);
    printf("-----------\n");
    printf("\t%d\n",sum);
    return 0;
}