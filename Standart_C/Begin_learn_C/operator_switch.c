#include <stdio.h>

int main()
{
	int t;
	printf("Input the t: ");
	scanf("%d", &t);
	switch(t){
	case 1:
		printf("First\n");
		break;
	case 2:
		printf("Second\n");
		break;
	case 3:
		printf("Third\n");
		break;
	case 4:
		printf("Fourth\n");
		break;
	case 5:
		printf("Fifrh\n");
		break;
	default:
		printf("More\n");
	}
	return 0;
}
