#include <stdio.h>

void Show(int a, int b)
{
    printf("%d/%d\n",a,b);
}

void reverse(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}


int NSD(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}

void abbreviation(int *a, int *b)
{
    int tmp;
    while ((tmp = NSD(*a, *b)) != 1)
    {
        *a /= tmp;
        *b /= tmp;
    }
}

int main(void)
{
    int m,n;
    int choose;
    int is_rep = 1;
    printf("Input the chiselnik and znamennik: ");
    scanf("%d%d",&m,&n);
    do
    {
        
        printf("1 - Show fraction\n2 - reverse fraction\n3 - abbreviation fraction\n4 - exit\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            Show(m,n);
            getchar(); // delete enter with streaming
            getchar(); // delay
            break;
        case 2:
            reverse(&m,&n);
            Show(m,n);
            getchar();
            getchar();
            break;
        case 3:
            abbreviation(&m,&n);
            Show(m,n);
            getchar();
            getchar();
            break;
        case 4:
            printf("exit\n");
            getchar();
            getchar();
            is_rep = 0;
        default:
            printf("You choose is wrong\n");
            break;
        }
        printf("\e[1;1H\e[2J");
    } while (is_rep);
    
    return 0;
}