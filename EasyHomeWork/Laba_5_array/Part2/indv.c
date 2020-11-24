#include <stdio.h>

#define SOMENUMBER 0.5
#define COUNTELEMENT 15

void fill_array(float *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("T[%d] = ",i);
        scanf("%f",&array[i]);
    }
}

void show_array(float *array, int n) {
    for (int i = 0; i < n; i++) {
        printf("%5.1f",array[i]);
    }
    putchar(10);
}

void processing_array(float *array, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            array[i] = SOMENUMBER;
        } else {
            array[i] *= 2;
        }
    }
}

int main(void)
{
    int rep = 1;
    int n = COUNTELEMENT;
    float T[n];
    int choose;
    while (rep)
    {
        printf("\e[1;1H\e[2J");
        printf("==Menu==\n");
        printf("1. Fill array\n");
        printf("2. show array\n");
        printf("3. processing array\n");
        printf("4. exit\n");
        printf("Input your choose: ");
        scanf("%d",&choose);
        switch (choose)
        {
        case 1:
            printf("\e[1;1H\e[2J");
            fill_array(T,n);
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 2:
            printf("\e[1;1H\e[2J");
            show_array(T,n);
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 3:
            printf("\e[1;1H\e[2J");
            processing_array(T,n);
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 4:
            printf("\e[1;1H\e[2J");
            rep = 0;
            break;
        }
    }
    printf("Create By Liashenko Rostyslav\n");
}