#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c,d,x1,x2;
    printf("eq: ax^2+bx+c = 0\n");
    printf("Input the a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    d = b * b - 4 * a * c;
    if (d >= 0)
    {
        x1 = (-b+sqrt(d)) / (2 * a);
        x2 = (-b-sqrt(d)) / (2 * a);
        printf("Roots: %.3f %.3f\n",x1,x2);
    }
    else
    {
        printf("Roots not define\n");
    }
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}
