#include <stdio.h>
#include <string.h>
#include <malloc.h>

void fixed_fgets(char *str) { /* delete enter in string*/
    int len = strlen(str);
    str[len-1] = '\0';
}

char* strrev(char *s) {
    char *rev = (char*) malloc(sizeof(s));
    strcpy(rev,s);
    for (int i = 0, j = strlen(rev) - 1; i < j; i++, j--) {
        char tmp = rev[i];
        rev[i] = rev[j];
        rev[j] = tmp;
    }
    return rev;
}

int palindrom(char *s) { 
    if (!strcmp(s,strrev(s))) {
        return 1;
    } else {
        return 0;
    }
}

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

int get_count_palindrom(char *s) {
    int count_palindrom = 0;
    int count_word;
    char *word[50];
    count_word = string_to_word(s,word);
    for (int i = 0; i < count_word; i++) {
        if (palindrom(word[i])) {
            count_palindrom++;
        }
    }
    return count_palindrom;
}


int main(void) {
    char s[80];
    printf("Input the row: \n");
    fgets(s,sizeof(s),stdin);
    fixed_fgets(s);
    printf("Count palindrom word = %d\n",get_count_palindrom(s));
    return 0;
}
