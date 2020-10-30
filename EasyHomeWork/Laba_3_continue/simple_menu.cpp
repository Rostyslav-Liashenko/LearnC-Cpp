#include <stdio.h>
#include <iostream>
#include <math.h>

void find_simple_number()
{
    int num, div, a = 2, b = 20, k = 0;
    printf("Simple number %d to %d\n",a,b);
    for (num = a; num <= b; num++)
    {
        for (div = 2; num%div!=0; div++) ;
        if (div == num)
        {
            printf("%4d",num);
            k++;
        }
    }
    printf("\n All number = %d\n",k);
}

void calc_function()
{
    int a,b,d;
    printf("Input a,b,d: ");
    std::cin >> a >> b >> d;
    for (int i = a; i <= b; i+= d)
    {
        printf("Y = sin %d + (sin %d)^2 + 3 = %.3f\n",i,i,sin(i) + pow(sin(i),2) + 3);
    }
}

int main(void)
{
    printf("+++Menu+++\n");
    short rep = 1;
    do
    {
        printf("\e[1;1H\e[2J"); /* clear console */
        char op;
        printf("1 - simple number\n");
        printf("2 - calc function\n");
        printf("3 - exit with program\n");
        std::cin >> op;
        switch (op)
        {
        case '1':
            printf("\e[1;1H\e[2J");
            find_simple_number();
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case '2':
            printf("\e[1;1H\e[2J");
            calc_function();
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case '3':
            rep = 0;
            break;
        default:
            printf("\e[1;1H\e[2J");
            printf("You chose is wrong\n");
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        }
    } while (rep);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}