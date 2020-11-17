#include <stdio.h>
#include <math.h>


void sides(int x1, int y1, int x2, int y2, double *one_aside, double *two_aside) {
    int x3 = x1;
    int y3 = y2;
    *one_aside = sqrt(pow(x2-x3,2) - pow(y2-y3,2));
    *two_aside = sqrt(pow(x3-x1,2) + pow(y3-y1,2));
}

double S(double side_one, double side_two) {
    return side_one * side_two;
}

double P(double side_one, double side_two) {
    return 2 * (side_one + side_two);
}


int main(void)
{
    int x1,x2,y1,y2;
    double one_side, two_side;
    printf("Input the x1 and y1: ");
    scanf("%d%d",&x1,&y1);
    printf("Input the x2 and y2: ");
    scanf("%d%d",&x2,&y2);
    sides(x1,y1,x2,y2,&one_side,&two_side);
    printf("Size side nomer 1 = %.2f\n",one_side);
    printf("Size side nomer 2 = %.2f\n",two_side);
    printf("P = %.2f\n",P(one_side,two_side));
    printf("S = %.2f\n",S(one_side, two_side));
    return 0;
}