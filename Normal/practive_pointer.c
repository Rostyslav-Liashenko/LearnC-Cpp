#include <stdio.h>

int main()
{
	int t;
	int *x = &t;
	int *p;
	*x = 10;
	printf("x = %d\n", t);
	*x = 18;
	p = x;
	printf("x = %d\n", t);
	*p = 56;
	printf("x = %d\n",t);
	return 0;
}
