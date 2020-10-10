#include <stdio.h>

int main()
{

	int num = 0;
	j:
	printf("num = %d\n",num);
	num++;
	if (num < 10)
		goto j;
	printf("num = %d\n",num);
	return 0;
}
