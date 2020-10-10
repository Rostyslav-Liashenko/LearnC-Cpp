#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1,y1,x2,y2;
    printf("Input coordinate point #1: ");
    scanf("%d%d",&x1,&y1);
    printf("Input coordinate point #2: ");
    scanf("%d%d",&x2,&y2);
    double distance = sqrt( pow(x2-x1,2) + pow(y2-y1,2));
    printf("Distance: %.3f\n",distance);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}