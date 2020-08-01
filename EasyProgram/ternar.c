#include <stdio.h>

int main()
{
	int a,b;
	printf("Input the a and b: ");
	scanf("%d %d",&a,&b);
	int max = a > b ? a : b;
	printf("Max = %d\n",max);
	return 0;
}
