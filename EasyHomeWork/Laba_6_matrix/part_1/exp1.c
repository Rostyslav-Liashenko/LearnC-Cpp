#include <stdio.h>
#include <stdlib.h>

#define N 4
#define M 4

int A[N][M];

void fill_array() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }
    }
}

void fill_random() {
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            A[i][j] = rand() %30 - 10;
}

void show() {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%5d",A[i][j]);
        }
        printf("\n");
    }
}

int sum_matrix() {
    int s = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            s += A[i][j];
        }
    }
    return s;
}

int sum_mainD() {
    int s = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == j) {
                s+=A[i][j];
            }
        }
    }
    return s;
}

int sum_slaveD() {
    int s = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (i == N - 1 - j) {
                s += A[i][j];
            }
        }
    }
    return s;
}

int sum_down_main() {
    int s = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j <=i; j++) {
            s+= A[i][j];
        }
    }
    return s;
}

void swap() {
    for (int j = 0; j <= M; j++) {
        int c = A[0][j];
        A[0][j] = A[2][j];
        A[2][j] = c;
    }
}


int main(void) {
    fill_random();
    show();
    printf("Suma all elements = %d\n",sum_matrix());
    printf("Suma main diagonal = %d\n",sum_mainD());
    printf("Suma slave diagonal = %d\n",sum_slaveD());
    printf("Suma down elementn of main diagonal = %d\n",sum_down_main());
    printf("Swap first and third row\n");
    swap();
    show();
    return 0;
}