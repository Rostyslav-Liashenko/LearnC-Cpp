#include <stdio.h>

struct myflags_c
{
    unsigned char io_error:1;
    unsigned char seen_a_digit:1;
    unsigned char had_a_eol:1;
    unsigned char count:4;
};

struct myflags
{
    unsigned int io_error:1;
    unsigned int seen_a_digit:1;
    unsigned int had_a_eol:1;
    unsigned int count:4;
};

int main(void)
{
    printf("sizeof(myflags) = %ld\n",sizeof(struct myflags));
    printf("sizeof(myflags_c) = %ld\n",sizeof(struct myflags_c));
    return 0;
}