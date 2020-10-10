#include <stdio.h>

double my_sqr(double *x)
{
	return *x = *x * *x;
}

int main()
{
	double x;
	printf("Input the x: ");
	scanf("%lf",&x);
	printf("x = %.2f\n",x);
	my_sqr(&x);
	printf("x = %.2f\n",x);
	return 0;
}
