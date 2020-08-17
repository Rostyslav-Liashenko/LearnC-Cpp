#include <stdio.h>

int main(void)
{
    FILE *iofile;
    unsigned counter = 0;
    int num;
    int yn;

    iofile = fopen("test.bin","w+b");
    if (!iofile)
    {
        perror("test.bin");
        return 1;
    }
    fwrite(&counter,sizeof(counter),1,iofile);
    do {
        printf("Enter new number ? [1 - yes, 2 - no]");
        scanf("%d",&yn);
        if (yn == 1)
            {
                scanf("%d",&num);
                fwrite(&num,sizeof(num),1,iofile);
                counter++;
            }
        else
            {
                rewind(iofile);
                fwrite(&counter,sizeof(counter),1,iofile);
                break;
            }
    } while (1);    
    
    fclose(iofile);
    return 0;
}
