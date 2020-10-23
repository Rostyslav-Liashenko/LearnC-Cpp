#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    int x,n,i,sum = 0;
    double avg;
    printf("\n Input the count number N = ");
    scanf("%d",&n);
    printf(" Random number show: \n");
    for (i = 0; i < n; i++)
    {
        x = rand() % 20;
        printf("%4d",x);
        sum += x;
    }
    avg = (double) sum / n;
    printf("\n Suma = %d\n Average = %.3f\n",sum,avg);
    return 0;
}