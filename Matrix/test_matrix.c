#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4
#define M 3

void fill_matrix(int (*a)[N], int rows) /* a = pointer begin matrix, 4 = columns rows = rows */
{
    srand(time(NULL));
    int i,j;
    for (i = 0; i < rows; i++)
        for (j = 0; j < N; j++)
            a[i][j] = rand() % 20;
}

void print_matrix(int (*a)[4], int rows)
{
    int i,j;
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < N; j++)
            printf("%4d",a[i][j]);
        printf("\n");
    }
}

int main(void)
{
    int (*p) [4];
    int matr[M][N];

    p = matr; /* pointer for array */

    int m[3][4] = {{0,0,0}, {0,1,2,3}, {0,2,4,6}}; /* init array */

   fill_matrix(matr,M);
   print_matrix(matr,M);     
    return 0;
}