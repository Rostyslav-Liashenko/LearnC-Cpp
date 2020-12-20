#include <stdio.h>
#include <string.h>
#include <sys/stat.h>

void fix_fgets(char *s) {
    s[strlen(s) - 1] = '\0';
}

int main(void) {
    char name_folder[255];
    printf("Enter the path and name folder: ");
    fix_fgets(fgets(name_folder,sizeof(name_folder),stdin));
    mkdir(name_folder,0777);
    return 0;
}
