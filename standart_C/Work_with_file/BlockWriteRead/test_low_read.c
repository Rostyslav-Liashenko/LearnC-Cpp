#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

void delete_new_line(char *s_in)
{
    int n = strlen(s_in);
    s_in[n-1] = '\0';
}

int main(void)
{
    char name[26];
    int file;
    char c;
    printf("Input the name of file: ");
    fgets(name,sizeof(name),stdin);
    delete_new_line(name);
    file = open(name,O_RDONLY);
    if (file == -1)
    {
        printf("Error, file");
        return 1;
    }
    while (read(file,&c,sizeof(c)) != 0)
    {
        printf("%c",c);
    }
    close(file);
    return 0;
}
