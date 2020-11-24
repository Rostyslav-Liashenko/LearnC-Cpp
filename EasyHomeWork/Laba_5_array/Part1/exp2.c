#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int n = 5;
int A[5], i, nMax;

void RandomFill() {
    printf("Start Array:\n");
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 100 - 50;
        printf("%4d",A[i]);
    }
    putchar(10);
}

int MaxEl() {
    int imax = 0;
    for (int i = 1; i < n; i++) {
        if (A[i] > A[imax]) {
            imax = i;
        }
    }
    return imax;
}

int main() {
    srand(time(NULL));
    RandomFill();
    int nMax = MaxEl();
    printf("Max element: A[%d] = %d\n",nMax,A[nMax]);
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}