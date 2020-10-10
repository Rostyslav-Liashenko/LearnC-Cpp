#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b;
    printf("Input the num1 and num2: ");
    scanf("%f%f",&a,&b);
    printf("num1 = %.3f num2 = %.3f\n",a,b);
    a = a + b;
    b = a - 2 * (b);
    printf("num1  = %.3f num2 = %.3f\n",a,b);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}
