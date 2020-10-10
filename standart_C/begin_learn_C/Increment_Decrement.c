#include <stdio.h>

int main()
{
	int x,y,p,q;
	x = 7;
	y = ++x;
	p = 7;
	q = p++;
	printf("x = %d, y = %d, p = %d, q = %d\n",x,y,p,q);
	return 0;
}
