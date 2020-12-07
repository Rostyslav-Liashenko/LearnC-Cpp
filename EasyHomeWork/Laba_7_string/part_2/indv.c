#include <stdio.h>
#include <string.h>

#define LIMIT 60

void fixed_fgets(char *str) { /* function delete enter with string */
    int len = strlen(str);
    str[len-1] = '\0';
}


int string_to_word(char str[], char *word[]) { /* function string to array word, return count word */
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

int count_symbols_in_string_without_space(char *str) {  /* count symbols without enter */
   int count = 0;
   int len = strlen(str);
   for (int i = 0; i < len; i++) {
       if (str[i] != ' ') {
           count++;
       }
   }
   return count;
}

void print_space(int count) { /* print count space in stdout */
    for (int i = 0; i < count; i++) {
        putchar(' ');
    }
}

void print_result(char *word[], int count_word, int count_space) {
    for (int i = 0; i < count_word; i++) {
        printf("%s",word[i]);
        print_space(count_space);
    }
}

int main(void){
    char *word[50];
    char inp_str[61];
    printf("Input the string: ");
    fgets(inp_str,sizeof(inp_str),stdin);
    fixed_fgets(inp_str);
    int count_symbols_without_space = count_symbols_in_string_without_space(inp_str);
    int count_word = string_to_word(inp_str,word);
    int count_need_space = LIMIT - count_symbols_without_space / count_word;
    print_result(word,count_word,count_need_space);
}