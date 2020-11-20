#include <stdio.h>

int A[10], i , n = 0;

int Vvod() {
    printf("input the count elemenent array:\n");
    scanf("%d",&n);
    for (i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d",&A[i]);
    }
    return n;
}

int suma() {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += A[i];
    }
    return s;
}


void Podvoen() {
    for (i = 0; i < n; i++) {
        A[i] = A[i] * 2;
    }
}

void Vivod() {
    for (i = 0; i < n; i++) {
        printf("%4d",A[i]);
    }
    printf("\n");
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

int main(void) {
    n = Vvod();
    Vivod();
    printf("Max element: %d\n",A[MaxEl()]);
    printf("Suma all element: %d\n",suma());
    printf("Result doubling: \n");
    Podvoen();
    Vivod();
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}