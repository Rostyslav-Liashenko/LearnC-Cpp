#include <stdio.h>

int main()
{
	int num;
	printf("Input the num (Integer): ");
	scanf("%d",&num);
	printf("Different specificate:\n");
	printf("d %d\n",num);
	printf("o %o\n",num);
	printf("u %u\n",num);
	printf("x %x\n",num);
	printf("X %X\n",num);
	printf("c %c\n",num);
	printf("p %p\n",num);
	return 0;
}
