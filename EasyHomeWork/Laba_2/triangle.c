#include <stdio.h>
#include <math.h>

int main(void)
{
    double a,b,c;
    printf("Input the aside triangle a,b,c: ");
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a > 0 && b > 0 && c > 0 && a + b > c && a + c > b && b + c > a)
    {
        if (a == b && b == c && a == c)
        {
            printf("Trikutnuk riznostoroniy\n");
        }
        else if (a == b || b == c || a == c)
        {
            printf("Trikutnuk rivnobedrenuy\n");
        }
        else if (sqrt(pow(a,2) + pow(b,2)) == c)
        {
            printf("Trikutnuk pryamokutniy\n");
        }
        else
        {
            printf("Trikutnuk riznostoroniy\n");
        }
    }
    else
    {
        printf("Trikutnuka ne isnye\n");
    }
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}