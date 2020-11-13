#include <stdio.h>

void my_test(int y) 
{
    int x = 10;
    printf("In my test x = %d and adr.x = %p\n",x,&x);
    printf("y = %d and adr. y = %p\n",y,&x);
}


int main()
{
    int x = 2, y = 5;
    printf("In main x = %d and adrs.x = %p\n",x,&x);
    printf("y = %d and adr.y = %p\n",y,&y);
    my_test(y);
    printf("Create by Liashenko Rostyslav\n");
    return 0;
}