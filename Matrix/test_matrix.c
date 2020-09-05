#include <stdio.h>

int main(void)
{
    int i,j;

    int (*p) [4];
    int matr[3][4];

    p = matr; /* pointer for array */

    int m[3][4] = {{0,0,0}, {0,1,2,3}, {0,2,4,6}}; 
    for (i = 0; i < 3; i++)
        for (j = 0; j < 4; j++)
            matr[i][j] = i * j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d",matr[i][j]);
        putchar(10);
    }     
    return 0;
}