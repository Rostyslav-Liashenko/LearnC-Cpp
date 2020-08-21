#include <stdio.h>
#include <stdlib.h>
enum {max_len_array = 10};

void random_fill_array(int *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        arr[i] = rand() % 20 + 1;
    }
}

void show_array(int *arr, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%3d",arr[i]);
    }
    putchar(10);
}

int sum_array(int *arr, int len)
{
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main(void)
{
    int array[max_len_array];
    int len;
    printf("Input the len array: ");
    scanf("%d",&len);
    random_fill_array(array,len);
    show_array(array, len);
    printf("Summa array = %d\n",sum_array(array,len));
    return 0;
}
