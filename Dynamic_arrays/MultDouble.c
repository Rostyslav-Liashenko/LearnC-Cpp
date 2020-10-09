#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <time.h>

/* TODO 
    Create dynamic arrays and multiply by two every element in array 
*/

int main(void)
{
    srand(time(NULL));
    int size;
    int *dynamic = NULL;
    printf("Input the size of array: ");
    scanf("%d",&size);
    dynamic = malloc(size * sizeof(int));
    printf("Start array\n");
    for (int i = 0; i < size; i++)
    {
        *(dynamic + i) = rand() % 20;
        printf("array[%d] = %d\n",i,*(dynamic + i)); 
    }
    for (int i = 0; i < size; i++)
    {
        *(dynamic + i) = *(dynamic + i) * 2;
    }
    printf("Finish array\n");
    for (int i = 0; i < size; i++)
    {
         printf("array[%d] = %d\n",i,*(dynamic + i));
    }
    free(dynamic);
    return 0;
}