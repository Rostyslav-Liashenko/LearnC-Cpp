#include <stdio.h>

void chande(int *u, int *v)
{
    int temp;
    temp = *u;
    *u = *v;
    *v = temp;
}

int main(void)
{
    int x = 5, y = 10;
    printf("Starting value x = %d, y = %d\n",x,y);
    chande(&x,&y);
    printf("After value x = %d, y = %d\n",x,y);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}