#include <stdio.h>

int main(void)
{
    FILE *input;
    int number;

    input = fopen("output.bin","r");
    if (!input)
    {
        perror("output.bin");
        return 1;
    }
    fread(&number,sizeof(number),1,input);
    printf("%d",number);
    fclose(input);
    return 0;
}
