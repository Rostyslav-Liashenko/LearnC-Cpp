#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <dirent.h>
#include <fcntl.h>

void fix_fgets(char *s) {
    s[strlen(s) - 1] = '\0';
}

void print_error(int result_system_call) {
    if (result_system_call == -1) {
        printf("Error!\n");
    }
}

void create_directory(char *name_directory) {
    print_error(mkdir(name_directory,0777));
}

void print_list() {
    DIR *dir;
    struct dirent *dent;
    const char *name = ".";
    dir = opendir(name);
    if (!dir) {
        perror(name);
    }
    while ((dent = readdir(dir)) != NULL) {
        printf("%s\n",dent->d_name);
    }
    closedir(dir);
}

void create_empty_file(char *name_file) {
    int fd = open(name_file,O_CREAT,0666);
    print_error(fd);
    close(fd);
}

void delete_file(char *name_file) {
    print_error(unlink(name_file));
}

void move_file() {
    char old_name[255], new_name[255];
    printf("Enter the old name file: ");
    fix_fgets(fgets(old_name,sizeof(old_name),stdin));
    printf("Enter the new name of file: ");
    fix_fgets(fgets(new_name,sizeof(new_name),stdin));
    rename(old_name,new_name);
}

int main(void) {  
    return 0;
}