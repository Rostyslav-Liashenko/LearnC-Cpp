#include <stdio.h>

int main()
{
	int a,b;
	printf("Input the a and b: ");
	scanf("%d %d",&a,&b);
	printf("%d + %d = %d\n",a,b,a + b);
	printf("%d - %d = %d\n",a,b,a - b);
	printf("%d * %d = %d\n",a,b,a * b);
	printf("%d / %d = %d\n",a,b,a / b);
	printf("%d == %d = %d\n",a,b,a == b);
	printf("%d != %d = %d\n",a,b,a != b);
	printf("%d > %d =%d\n ",a,b,a > b);
	printf("%d < %d =%d\n",a,b,a < b);
	printf("\t\t Bit operation\n");
	printf("%d << 1 = %d\n", a,a << 1);
	printf("%d >> 1 = %d\n",b,b >> 1);
	printf("%d && %d = %d\n",a,b,a & b);
	printf("%d || %d = %d\n",a,b,a | b);
	printf("Bit negative %d = %d\n",a,~a);
	return 0;

}
