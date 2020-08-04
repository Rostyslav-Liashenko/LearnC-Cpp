#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int *ptr_array;
	int size;
	printf("Input the size array: ");
	scanf("%d",&size);
	ptr_array = malloc(size * sizeof(int));
	for (int i = 0; i < size; i++)
		ptr_array[i] = rand() % 10 + 1;
	for (int i = 0; i < size; i++)
		printf("%3d",*(ptr_array + i));
	printf("\n");
	free(ptr_array);
	return 0;
}
