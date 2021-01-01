#include <stdio.h>

int main()
{
	int m[] = {2, 3, 5};
	for (int i = 0; i < sizeof(m)/sizeof(*m); i++)
		printf("[%d] = %d\n",i,m[i]);
	return 0;
}
