#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define COUNTSTUDENTS 20
#define COUNTFIELD 5

struct student {
    char first_name[100];
    char surname[100];
    int rating_math;
    int rating_OOP;
    int rating_DB;
};

// different structure for helping organize program

void delete_last_symbols(char *str) {
    int len = strlen(str);
    str[len-1] = '\0';
}

void print_author() {
    printf("Create by Liashenko Rostyslav\n");
}

void check_error_file(FILE *f) {
    if (f == NULL) {
        printf("Sorry, file not fount\nprogram is ending...\n");
        print_author();
        exit(1);
    }
}

void show_info_one_student(struct student *st, int count) {
    for (int i = 0; i < count; i++) {
        printf("%s %s %d %d %d\n",st[i].first_name,st[i].surname,st[i].rating_math,st[i].rating_OOP,st[i].rating_DB);
    }
}

// main function for work with structure with file

int read_record(FILE *f, struct student *st) { // return count filed record in structure
    int count = fscanf(f,"%s%s%d%d%d",st->first_name,st->surname,&st->rating_math,&st->rating_OOP,&st->rating_DB);
    return count;
}

int read_records(char* name_file, struct student *st) { // return count structure
    FILE *in = fopen(name_file,"r");
    int i = 0;
    check_error_file(in);
    while (1) {
        if (read_record(in,&st[i++]) != COUNTFIELD) {
            printf("Record is ending...\n");
            break;
        }
    }
    fclose(in);
    return i - 1;
}

void write_record(FILE *f, struct student *st) {
    fprintf(f,"%s %s %d %d %d\n",st->first_name,st->surname,st->rating_math,st->rating_OOP,st->rating_DB);
}

void write_records(char *name_file, struct student *st, int beg_index, int end_index) {
    FILE *out = fopen(name_file,"w");
    check_error_file(out);
    for (int i = beg_index; i < end_index; i++) {
        write_record(out,&st[i]);
    }
    printf("Writing is ending..\n");
    fclose(out);
}

// different function for work with file
void find_record(struct student *st, int count) {
    char tmp[100];
    printf("Enter the name or surname: ");
    delete_last_symbols(fgets(tmp,sizeof(tmp),stdin));
    FILE *out = fopen("Liashenko_res_find","w");
    check_error_file(out);
    for (int i = 0; i < count; i++) {
        if ((!strcmp(st[i].first_name,tmp)) || (!(strcmp(st[i].surname,tmp))))
        {
            write_record(out,&st[i]);
        }
    }
}


int main(void) {
    struct student students[COUNTSTUDENTS];
    char name_file[40];
    printf("Input the name of file:\n");
    delete_last_symbols(fgets(name_file,sizeof(name_file),stdin));
    int count_students = read_records(name_file,students);
    write_records(strcat(name_file,"_all_records"),students,0,count_students);
    find_record(students,count_students);
    return 0;
}