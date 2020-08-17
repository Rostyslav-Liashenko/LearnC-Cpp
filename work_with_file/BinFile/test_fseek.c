#include <stdio.h>

int main(void)
{
    FILE *iofile;
    int number;
    iofile = fopen("test.bin","w+b");
    if (!iofile)
    {   
        perror("test.bin");
        return 1;
    }
    scanf("%d",&number);
    fwrite(&number,sizeof(number),1,iofile);
    fseek(iofile,0,SEEK_SET);
    number = 0; /* special if error number will equivelent 0 */
    fread(&number,sizeof(number),1,iofile);
    printf("%d\n",number);
    fclose(iofile);
    return 0;
}
