#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define COUNT 2

struct tovar {
    char name[30];
    double price;
};

int save_struct(char *file_name, struct tovar *tv) {
    FILE *f;
    if ((f = fopen(file_name,"a")) == NULL) {
        perror("Error!\n");
        return -1;
    }
    fseek(f,0,SEEK_END);
    fputs(tv->name,f);
    fprintf(f,"\n%f\n",tv->price);
    fclose(f);
    return 0;
}

void show_info(struct tovar* tv) {
    printf("name: %s\n", tv->name);
    printf("price: %lf\n",tv->price);
}

void save_structs(char *file_name, struct tovar *tv, int count) {
    for (int i = 0; i < count; i++) {
        save_struct(file_name,&tv[i]);
    }
}

int load_structs(char *file_name, struct tovar *tv, int count) {
    FILE *f;
    if ((f = fopen(file_name,"r")) == NULL) {
        perror("Error with file!\n");
        return -1;
    }
    for (int i = 0; i < count; i++) {
        fscanf(f,"%s%lf",&tv[i].name,&tv[i].price);
    }
    fclose(f);
    return 0;
}

int main(void) {
    char file_name_out[] = {"Liashenko_out.txt"};
    struct tovar t_in[COUNT];
    struct tovar t_out[COUNT];   
    int count = COUNT;

    strcpy(t_in[0].name,"Kovbasa");
    t_in[0].price = 34.5;
    strcpy(t_in[1].name,"Pilmeni");
    t_in[1].price = 45.3;

    printf("Save struct!!!\n");
    save_structs(file_name_out,t_in,count);
    printf("Loading struct!!!\n");
    load_structs(file_name_out,t_out,count);
    printf("Result\n");
    show_info(&t_out[0]);
    show_info(&t_out[1]);
    printf("Create By Liashenko Rostyslav PSK-18\n");
    return 0;
}