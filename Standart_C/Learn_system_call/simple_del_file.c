#include <stdio.h>
#include <unistd.h>
#include <string.h>

void fix_gets(char *s) {
    s[strlen(s) - 1] = '\0';
}

int main(void) {
    char name_file[255];
    printf("Enter the name of file for delete: ");
    fgets(name_file,sizeof(name_file),stdin);
    fix_gets(name_file);
    unlink(name_file);
    return 0;
}
