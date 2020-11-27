#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
#define M 10

int A[N][M];

void fill_random(int matrix[][10], int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            matrix[i][j] = rand() %20 - 10;
}

void show(int matrix[][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%5d",matrix[i][j]);
        }
        printf("\n");
    }
}

void get_min(int matrix[][10],int n, int m, int *row, int *column) {
    *row = 0;
    *column = 0;
    int min = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                *row = i;
                *column = j;
            }
        }
    }
}

void get_max(int matrix[][10],int n, int m, int *row, int *column) {
    *row = 0;
    *column = 0;
    int max = matrix[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
                *row = i;
                *column = j;
            }
        }
    }
}

int sum_column(int matrix[][10],int n, int column) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][column];
    }
    return sum;
}

int get_max_column(int matrix[][10], int n, int column) {
    int max = matrix[0][column];
    for (int i = 0; i < n; i++) {
        if (matrix[i][column] > max) {
            max = matrix[i][column];
        }
    }
    return max;
}


int main(void) {
    srand(time(NULL));
    int tmp_row, tmp_column;
    int n, m;
    printf("Input the n amd m: ");
    scanf("%d%d",&n,&m);
    fill_random(A,n,m);
    show(A,n,m);
    get_min(A,n,m,&tmp_row,&tmp_column);
    printf("Min element A[%d][%d] = %d\n",tmp_row,tmp_column,A[tmp_row][tmp_column]);
    get_max(A,n,m,&tmp_row,&tmp_column);
    printf("Max element A[%d][%d] = %d\n",tmp_row,tmp_column,A[tmp_row][tmp_column]);
    printf("Input the column for sum and max:");
    scanf("%d",&tmp_column);
    printf("Suma %d column = %d\n",tmp_column,sum_column(A,n,tmp_column));
    printf("Max %d column = %d\n",tmp_column,get_max_column(A,n,tmp_column));
    printf("Create by Liashenko Rostyslav\n");
}