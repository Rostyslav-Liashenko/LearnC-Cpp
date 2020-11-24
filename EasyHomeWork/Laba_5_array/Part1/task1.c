#include <stdio.h>

int Vvod(int *array) {
    int n;
    printf("input the count elemenent array:\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%d",&array[i]);
    }
    return n;
}

void Vivod(int *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%4d",array[i]);
    }
    printf("\n");
}

int suma(int *array, int n) {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += array[i];
    }
    return s;
}

int main(void) {
    int a[10], b[10];
    int n1, n2;
    n1 = Vvod(a);
    n2 = Vvod(b);
    printf("First array:\n");
    Vivod(a,n1);
    printf("Second array:\n");
    Vivod(b,n2);
    int sumA = suma(a,n1);
    int sumB = suma(b,n2);
    printf("Suma first array: %d\n",sumA);
    printf("Suma second array: %d\n",sumB);
    if (sumA == sumB) {
        printf("Suma first array equal suma second array\n");
    } else if (sumA > sumB) {
        printf("Suma first array more than suma second array\n");
    } else {
        printf("Suma first array small than suma second array\n");
    }
    return 0;
}