#include <stdio.h>

#define BUFFERSIZE 1024 /* macro name */
#define HELLOMSG "Hello, world\n" /* macro name */
#define MALLOCITEM malloc(sizeof(struct item)) /* macro name */

int main(void)
{
    puts(HELLOMSG); /* macro call */
    return 0;
}
