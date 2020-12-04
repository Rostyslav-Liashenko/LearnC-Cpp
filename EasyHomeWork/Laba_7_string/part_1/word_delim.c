#include <stdio.h>
#include <string.h>

int string_to_word(char str[], char *word[]) {
    char *p;
    char *razd = " ,.;";
    int count = 0;
    p = strtok(str,razd);

    while (p) {
        word[count++] = p;
        p = strtok(NULL,razd);
    }
    return count;
}

void fixed_fgets(char *str) { /* delete enter with string */
    int len = strlen(str);
    str[len-1] = '\0';
}


int main(void) {
    char str[80];
    char *word[10];
    int count_word;
    printf("Input the row:\n");
    fgets(str,sizeof(str),stdin);
    fixed_fgets(str);
    count_word = string_to_word(str,word);
    return 0;
}