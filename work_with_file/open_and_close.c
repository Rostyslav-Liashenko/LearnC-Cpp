#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *f;
    f = fopen("file.txt","w");
    if (!f) {
        perror("file.txt");
        exit(1);
    }
    fclose(f);
    return 0;
}
