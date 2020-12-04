#include <stdio.h>
#include <string.h>


void fixed_fgets(char *str) { /* функция яка удаляє символ enter із рядка */
    int len = strlen(str);
    str[len-1] = '\0';
}


int main(void) {
    char secret[] = "123", pass[20];
    printf("Input the password:\n");
    fgets(pass,sizeof(pass),stdin); /* в рядок попадає символ enter */
    fixed_fgets(pass);
    if (strcmp(pass,secret) != 0) {
        printf("Password is wrong\n");
        getchar();
        return 1;
    }
    printf("Password is correct!\n");
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}