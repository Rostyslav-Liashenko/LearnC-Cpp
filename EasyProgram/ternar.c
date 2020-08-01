#include <stdio.h>

int main()
{
	int a,b;
	printf("Input the a and b: ");
	scanf("%d %d",&a,&b);
	printf("Maximum value is %d\n", a > b ? a : b);
	return 0;
}
