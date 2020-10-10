#include <stdio.h>

int main()
{
	printf("[%5d]\n",12); /* space are */
	printf("[%-5d]\n",12); /* flag printf */
	printf("[%05d]\n",12);
	printf("%+d, %+d\n",12,-3);
	printf("[% d],[% d]\n",12,-3);
	printf("[%3d]\n",1234);
	printf("[%-7.5s]\n","abrakadabra");
	printf("[%6.4d]\n",12);
	return 0;
}
