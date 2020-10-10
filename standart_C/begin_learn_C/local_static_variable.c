#include <stdio.h>

void my_function()
{
	static int zz = 75;
	zz++;
	printf("zz = %d\n",zz);
}


int main()
{
	my_function();
	my_function();
	return 0;
}
