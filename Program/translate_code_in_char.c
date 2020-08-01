#include <stdio.h>

int main()
{
	int code;
	printf("Input the code symbol: ");
	if (scanf("%d", &code) != 1) {
		printf("Not correct data!\n");
		return 1;
	}
	printf("Symbol %c\n",code);
	return 0;
}
