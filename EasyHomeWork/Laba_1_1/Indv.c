#include <stdio.h>
#include <math.h>

int main(void)
{
    float r;
    printf("Input the r for length circle: ");
    scanf("%f",&r);
    float c = 2 * M_PI * r;
    printf("C = %.3f\n",c);
    printf("\n\n\n");
    printf("Input the r for area circle: ");
    scanf("%f",&r);
    float s = M_PI * pow(r,2);
    printf("S = %.3f\n",s);
    printf("\n\n\n");
    printf("Input the r for volume circle: ");
    scanf("%f",&r);
    float v = 4/3 * M_PI * pow(r,3);
    printf("V = %.3f\n",v);
    return 0;
}