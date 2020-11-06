#include <stdio.h>
#include <stdlib.h>

int NSD(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

int fmax(int a, int b)
{
    return (a > b) ? a:b;
}

float fser(int a, int b)
{
    return (a+b) / 2.0;
}

int mod(int a, int b)
{
    return a % b;
}

void even(int a)
{
    if (!(a % 2))
    {
        printf("Number %d is even\n",a);
    }
    else 
    {
        printf("Number %d is not even\n",a);
    }
}


int main()
{
    int x1,x2,nsd,oz;
        printf("\nVvedi 2 chisla: ");
        scanf("%d%d",&x1,&x2);
    do
    {
        printf("\n   Oberi potribne:\n1 - NSD\n2 - max\n3 - seredne\n4 - chastka\n5 - parne \n6 - exit\n ");
        scanf("%d",&oz);
        switch (oz)
        {
            case 1: 
                nsd = NSD(x1,x2);
                printf("\n NSD chisel %d i %d = %d",x1,x2,nsd);
                break;
            case 2:
                printf("\n Max chisel %d i %d = %d",x1,x2,fmax(x1,x2));
                break;
            case 3:
                printf("\n Seredne chisel %d i %d = %.2f",x1,x2,fser(x1,x2));
                break;
            case 4:
                printf("\n Chastka %d i %d = %d",x1,x2,mod(x1,x2));
                break;
            case 5:
                even(x1);
                even(x2);
                break;
            case 6:
                exit(0);
            default:
                printf("\nNe virna operacia");
        }
    } while (1);
        
}