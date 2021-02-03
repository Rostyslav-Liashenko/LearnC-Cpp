#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct tovar {
    char name[30];
    double price;
};


int save_struct_in_file(char *file_name, struct tovar *tv) {
    FILE *f;
    char *c;
    int size = sizeof(struct tovar);
    if ((f = fopen(file_name,"wb")) == NULL) {
        perror("Error with file\n"); 
        return -1; 
    }
    c = (char *) tv;
    for (int i = 0; i < size; i++) {
        putc(*c++,f);
    }
    fclose(f);
    return 0;
}

int load_struct_from_file(char *file_name, struct tovar *tv) {
    FILE *f;
    char *c;
    int i;
    if ((f = fopen(file_name,"rb")) == NULL) {
        perror("Error with file\n"); 
        return -1;
    }
    c = (char *) tv;
    while ((i = getc(f)) != EOF) {
        *c = i;
        c++;
    }
    fclose(f);
    return 0;
}

void show_info(struct tovar* tv) {
    printf("name: %s\n", tv->name);
    printf("price: %lf\n",tv->price);
}

int main(void) {
    char file_name[] = {"Liashenko.bin"};
    struct tovar t1,t2;
    strcpy(t1.name,"Kovbasa");
    t1.price = 34.3;
    printf("Tovar 1\n");
    show_info(&t1);
    save_struct_in_file(file_name,&t1);
    load_struct_from_file(file_name,&t2);
    printf("Tovar 2\n");
    show_info(&t2);    
    printf("Create By Liashenko Rostyslav PSK-18\n");
    return 0;
}