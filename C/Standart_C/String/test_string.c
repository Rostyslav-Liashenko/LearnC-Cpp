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

int string_length(const char *str)
{
	const char *p;
	for (p = str; *p; p++)
		{}
	return p - str;
}

void string_copy(char *dest, const char *src)
{
	/*
	int i;
	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = 0;
	*/
	for (; *src; dest++, src++)
		*dest = *src;
	*dest = 0;
}

int main()
{
	char str[80];
	char cp_str[80];

	printf("Input the string: ");
	fgets(str,sizeof(str),stdin);
	/*ltrim(str);
	rtrim(str);
	*/
	fix_string(str);

	printf("Your string: ");
	fputs(str,stdout);
	printf("\n");
	printf("Len str = %ld\n", strlen(str));
	/*
	reverse_string(str);
	printf("Reverse string:");
	fputs(str,stdout);
	printf("\n");
	*/
	string_copy(cp_str,str);
	printf("cp_str: ");
	fputs(cp_str,stdout);
	printf("\n");
	return 0;

}
