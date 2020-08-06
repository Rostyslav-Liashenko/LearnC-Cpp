#include <stdio.h>

int main()
{
	int c,  count = 0;
	while ((c = getchar()) != EOF)
	{	
		if (c == '\n')
		{
			printf("%d\n",count);
			count = 0;
		}
		else
			count++;
	}
	return 0;
}
