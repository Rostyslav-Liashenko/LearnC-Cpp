#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *f;
    f = fopen("file.txt","r");
    fprintf(stderr, "I think there's an error\n"); /*test */
    if (!f) {
        perror("file.txt");
        exit(1);
    }
    return 0;
}
