#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));
    int n = 10;
    int i, k = 0;
    float ser = 0;
    printf("Input the count element: ");
    scanf("%d",&n);
    int Mas[n];
    for (i = 0; i < n; i++)
        Mas[i] = rand() % 50 - 30;
    for (i = 0; i < n; i++) {
        if (Mas[i] < 0) 
        {
            ser += Mas[i];
            k++;
        }
    }
    if (k != 0) {
        ser /= k;
    }
    printf("Start array:\n");
    for (i = 0; i < n; i++)
        printf("%4d",Mas[i]);
    putchar(10);
    printf("Average value negativ number = %5.2f, negative number = %d\n",ser,k);
    printf("Create by Liasheko Rostyslav\n");
    return 0;
}   