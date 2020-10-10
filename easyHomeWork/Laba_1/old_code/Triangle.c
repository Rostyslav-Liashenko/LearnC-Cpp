#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;
    printf("Input the first side: ");
    scanf("%lf",&a);
    printf("Input the second side: ");
    scanf("%lf",&b);
    printf("Input the third side: ");
    scanf("%lf",&c);
    double p = (a + b + c);
    printf("P = %.3f\n",p);
    p = p / 2.0;
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    printf("Half P: %.3f\n",p);
    printf("S = %.3f\n",s);
    printf("create by Liashenko Rostyslav\n");
    return 0;
}