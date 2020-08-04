#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *some_variable;
	some_variable = malloc(sizeof(int));
	printf("sizeof(int) = %ld\n",sizeof(int));
	*some_variable = 10;
	printf("*some_variable = %d\n",*some_variable);
	return 0;
}
