#include <stdio.h>
#include <stdlib.h>

#define MAXNUMBER 100

void show_array(int *ar, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("array[%d] = %d\n",i,*(ar + i));
    }
}

void main(void)
{
    int *ptr = NULL;
    int size,i;
    printf("Input the size of array: ");
    scanf("%d",&size);
    ptr = calloc(size,sizeof(int));
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
    free(ptr);
    return 0;
}