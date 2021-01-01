#include <stdio.h>

int main()
{
    int x,i;
    for(i = 0; i < 10; i++)
    {
        if (x < 10)
            printf("First\n");
        else
            printf("Second\n");
        x = i  * i;

    }
    return 0;

}
