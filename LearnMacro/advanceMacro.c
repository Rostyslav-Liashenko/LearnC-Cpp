#include <stdio.h>

#define MAX(A,B) ((A) > (B) ? (A) : (B)) /* good macros */
#define BADMAX(A,B) A > B ? A : B /* very bed macros */
#define square(x) x * x


int main(void)
{   
    printf("MAX  = %d\n",MAX(10,5) * 5);
    printf("BADMAX = %d\n",BADMAX(10,5)*5);
    return 0;    
}
