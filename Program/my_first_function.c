#include <stdio.h>


char case_up(char c)
{
	if(c >= 'a' && c <= 'z')
		return c - ('a' - 'Z');
	else
		return c;
}

void print_char_n(char c, int n)
{
	int k;
	for(k = 0; k < n; k++)
		printf("%c", c);
	printf("\n");

}
int main()
{
	char c = 'K';
	print_char_n(c, 10);
	return 0;
}

