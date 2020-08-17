#include <stdio.h>

int main(void)
{
    FILE *output;
    int number;
    output = fopen("test.bin","w");
    if (!output){
        perror("test.bin");
        return 1;
    }
    scanf("%d",&number);
    fwrite(&number,sizeof(number),1,output);
    fclose(output);
    return 0;
}
