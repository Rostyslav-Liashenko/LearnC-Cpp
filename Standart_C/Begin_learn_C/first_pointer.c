#include <stdio.h>

int main()
{
	int x,y;
	int *p, *q, *r;
	x = 25;
	y = 36;
	p = &x;
	q = &y;
	r = p;
	printf("x = %d y = %d\n",x,y);
	*r = *q;
	printf("x = %d y = %d\n",x,y);
	return 0;
	
}
