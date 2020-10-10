#include <stdio.h>

int main(void)
{
    char name[20],last_name[20],father[20];
    printf("Input the name, last name, father name: ");
    scanf("%s%s%s",name,last_name,father);
    printf("%s\n\t%s\n\t\t%s\n",name,last_name,father);
    return 0;
}