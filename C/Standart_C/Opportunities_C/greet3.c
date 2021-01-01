int sys_write(int fd, const void *buf, int size);
static const char dunno[] = "I don't know how to greet you\n";
static const char hello[] = "Hello, dear ";

static int string_length(const char *s)
{
    int i;
    for (i = 0; s[i]; i++)
        ;
    return i;
}

/* NOTE:
    For work this code:
    nasm -f elf start.asm
    nasm -f elf calls.asm
    gcc -Wall -c greet3.c
    ld start.o callsc.o greet3.o -o greet 3
*/

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        sys_write(1,dunno,sizeof(dunno)-1);
        return 1;
    }
    sys_write(1,hello,sizeof(hello)-1);
    sys_write(1,argv[1],string_length(argv[1]));
    sys_write(1,"\n",1);
    return 0;
}