#include <stdio.h>
#include <math.h>

int main(void)
{
    float a,b,c;
    printf("Input the three number: ");
    scanf("%f%f%f",&a,&b,&c);
    float sum = a + b + c;
    float mult = a * b * c;
    float average = (a + b + c) / 3.0;
    printf("Summa = %.3f\n",sum);
    printf("Multiply = %.3f\n",mult);
    printf("Average = %.3f\n",average);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}