#include <stdio.h>

int main()
{
	int number;
	printf("Inpute the (decimal) number: ");
	scanf("%d", &number);
	printf("16 system: %x\n",number);
	printf("8 system: %o\n",number);
	return 0;
}
