#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void fill_matrix(int (*a)[4], int rows) /* a = pointer begin matrix, 4 = columns rows = rows */
{
    srand(time(NULL));
    int i,j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < 4; j++)
            a[i][j] = rand() % 20;
}

void print_matrix(int (*a)[4], int rows)
{
    int i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < 4; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int (*p) [4];
    int matr[3][4];

    p = matr; /* pointer for array */

    int m[3][4] = {{0,0,0}, {0,1,2,3}, {0,2,4,6}}; /* init array */

   fill_matrix(matr,3);
   print_matrix(matr,3);     
    return 0;
}