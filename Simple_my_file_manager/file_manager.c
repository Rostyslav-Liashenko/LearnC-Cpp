#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>

#define CREATEFILE 1
#define DELETEFILE 2
#define CREATEDIR 3
#define MOVE 4
#define PRINTLIST 5

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
    int pid = fork();
    if (pid == -1) {
        perror("fork");
        exit(1);
    }
    if (pid == 0) {
        execlp("ls","ls","-l","-a",NULL);
        perror("ls");
        exit(0);
    }
    wait(NULL);
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

void enter_name(char *inp) {
    getchar();
    printf("Enter the name (Path):");
    fix_fgets(fgets(inp,sizeof(inp),stdin));
}

int main(void) {  
    int choose;
    char goal_name_file[255];
    do {
        printf("Menu\n1-create a empty file\n2-delete file\n3-create directory\n4-move and rename\n5-print list file in directory\n");
        scanf("%d",&choose);
        switch (choose)
        {
        case CREATEFILE:
            enter_name(goal_name_file);
            create_empty_file(goal_name_file);
            printf("\n");
            break;
        case DELETEFILE:
            break;
        case CREATEDIR:
            break;
        case MOVE:
            break;
        case PRINTLIST:
            getchar();
            print_list();
            break;
        default:
            break;
        }
    } while (1);
    return 0;
}