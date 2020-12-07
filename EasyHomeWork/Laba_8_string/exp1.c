#include <stdio.h>
#include <string.h>



int main(void) {
    char last_name[9] = {""}; /* clear memory */
    char word_1[] = {"Liana"};
    char word_2[] = {"shenzhen"};
    char word_3[] = {"korrespondent"};
    printf("Construct is third word\nwords:\n");
    puts(word_1);
    puts(word_2);
    puts(word_3);
    printf("Result\n");
    strncpy(last_name,word_1,3);
    strncat(last_name,word_2,4);
    strncat(last_name,word_3,2);
    puts(last_name);
    return 0;
}