#include <stdio.h>
#include <stdlib.h>
#include <time.h>
enum {max_len_array = 10};

void random_fill_array(int *arr, int len) /* random fill element array */
{
    srand(time(NULL));
    for(int i = 0; i < len; i++)
    {
        arr[i] = rand() % 20 + 1;
    }
}

void show_array(int *arr, int len) /* output into screen array */
{
    for(int i = 0; i < len; i++)
    {
        printf("%3d",arr[i]);
    }
    putchar(10);
}

int sum_array(int *arr, int len) /* return summa elements array */
{
    int sum = 0;
    for(int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int find_max(int *arr, int len) /* return index max element */
{
    int max = *arr;
    int max_index = 0;

    for(int i = 1; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            max_index = i;
        }
    }
    return max_index;
}

int main(void)
{
    int array[max_len_array];
    int len;
    printf("Input the len array: ");
    scanf("%d",&len);
    while (len > max_len_array)
    {
        printf("please, input the size array smallest\n");
        scanf("%d",&len);
    }
    random_fill_array(array,len);
    show_array(array, len);
    printf("Summa array = %d\n",sum_array(array,len));
    printf("Max element = %d\n",array[find_max(array,len)]);
    return 0;
}
