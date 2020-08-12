#include <stdio.h>

int main(int argc, char **argv)
{
    FILE *from, *to;
    int c, lnum;
    if (argc < 3)
    {
        fprintf(stderr,"Too few arguments\n");
        return 1;
    }
    from = fopen(argv[1], "r");
    if (!from)
    {
        perror(argv[1]);
        return 2;
    }
    to = fopen(argv[2],"w");
    if (!to)
    {
        perror(argv[2]);
        return 3;
    }
    lnum = 1;
    while(lnum <= 10 && (c = fgetc(from)) != EOF)
    {
        fputc(c,to);
        if (c == '\n')
            lnum++;
    }
    fclose(from);
    fclose(to);
    return 0;
}
