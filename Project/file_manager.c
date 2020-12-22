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

void create_directory() {
    char name_directory[255];
    printf("Input the path and name of directory: ");
    fix_fgets(fgets(name_directory,sizeof(name_directory),stdin));
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

void create_empty_file() {
    char name_file[255];
    printf("Enter the name of file: ");
    fix_fgets(fgets(name_file,sizeof(name_file),stdin));
    int fd = open(name_file,O_CREAT,0666);
    print_error(fd);
    close(fd);
}

void delete_file() {
    char name_file[255];
    printf("Enter the name for delete file: ");
    fix_fgets(fgets(name_file,sizeof(name_file),stdin));
    print_error(unlink(name_file));
}


int main(void) {
    return 0;
}