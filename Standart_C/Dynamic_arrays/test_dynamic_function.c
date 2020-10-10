#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show_array(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n",i,*(ar + i));
    }
}

void main(void)
{
    srand(time(NULL));
    int *ptr = NULL;
    int size,i;
    printf("Input the size of array: ");
    scanf("%d",&size);
    if (!(ptr = calloc(size,sizeof(int))))
    {
        printf("Not enough memory\n");
        exit(1);
    }
    for (i = 0; i < size; i++)
    {
        printf("Input the element [%d]:",i);
        scanf("%d",ptr + i);
    }
    show_array(ptr,size);
    for (i =0; i < size; i++)
    {
        *(ptr + i) = *(ptr + i) * *(ptr + i);
    }
    show_array(ptr,size);
    printf("Appended array\n");
    int new_size = size + 5;
    ptr  = realloc(ptr,new_size);
    for (i = size; i < new_size; i++)
    {
        *(ptr + i) = rand() % 20;
    }
    show_array(ptr,new_size);
    free(ptr);
    return 0;
}