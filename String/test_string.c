#include <stdio.h>
#include <string.h>

void fix_string(char *str)
{
	int len = strlen(str);
	str[len-1] = '\0';
}


void reverse_string(char *str)
{
	for (int i = 0, j = strlen(str) - 1 ; i < j; i++, j--)
	{
		char t  = str[i];
		str[i] = str[j];
		str[j] = t;
	}
}


int main()
{
	char str[80];
	printf("Input the string: ");
	fgets(str,sizeof(str),stdin);
	fix_string(str);
	printf("Your string: ");
	fputs(str,stdout);
	printf("\n");
	printf("Len str = %ld\n", strlen(str));
	reverse_string(str);
	printf("Reverse string:");
	fputs(str,stdout);
	printf("\n");
	return 0;

}
