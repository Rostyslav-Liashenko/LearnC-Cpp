#include <stdio.h>

int main(void)
{
	/* different parameters for scanf */
	int num;
	char c;
	int **ptr;
	char s[90];
	scanf("%d",&num); /* only decimal system */
	scanf("%i",&num); /* decimal, oct, hex system */
	scanf("%o",&num); /* only oct */
	scanf("%u",&num); /* only positive number in decimal system */
	scanf("%x",&num); /* only hex system */
	scanf("%p", &ptr); /* pointer */
	scanf("%c", &c); /* char */
	scanf("%89s",s);/* string */  
	/* [...] The string consists of the specified characters */
	/* [..^] The string does not consist of the specified characters. */
	return 0;
}
