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
    char array[20];
    for (int i = 0; i < 20; i++)
    {
        array[i] = 'a';
    }

    printf("Input the name of file: ");
    fgets(name,sizeof(name),stdin);
    delete_new_line(name);
    file = open(name,O_WRONLY|O_CREAT|O_TRUNC,0666);
    if (file == -1)
    {
        printf("Error, file");
        return 1;
    }
    write(file,array,sizeof(array));
    close(file);
    return 0;
}
