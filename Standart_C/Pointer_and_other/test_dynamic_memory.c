#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *p;
	p = malloc(sizeof(int));
	*p = 1;
	printf("*p = %d\n",*p);
	*p = 2;
	printf("*p = %d\n", *p);
	free(p);
	return 0;

}
