#include <stdio.h>
#include <string.h>
#include <unistd.h>

void fix_fgets(char *s) {  /* delete enter wit variable */
    s[strlen(s) - 1] = '\0';
}

int main(void) {
    char old_name[255], new_name[255];
    printf("Enter the old name: ");
    fix_fgets(fgets(old_name,sizeof(old_name),stdin));
    printf("Enter the new name: ");
    fix_fgets(fgets(new_name,sizeof(new_name),stdin));
    rename(old_name,new_name);
    return 0;
}
