#include <stdio.h>

#define MAX(A,B) ((A) > (B) ? (A) : (B)) /* good macros */
#define BADMAX(A,B) A > B ? A : B /* very bed macros */
#define BADSQUARE(X) X * X /* very bad macros */
#define SQUARE(X) ((X) * (X)) /* good macros */
#define HELP_TEXT \
    "This us a very good program that displays file size\n" \
    "To use it you should specify the file name\n" \
    "as a command line parameter, such as\n" \
    "  fsize file.txt\n"

#define MAKE_ARRAY_SUM_FUNCTION(FUNNAME, TYPE) \
    TYPE FUNNAME(const TYPE *a, int n) { \
        TYPE s = 0; \
        while (n > 0) { \
            s += *a;\
            a++; \
            n --; \
        } \
        return s; \
}
#define VAR_PRINT(X) printf("%s = %d\n",#X,X)

#define FOR_SECOND

#ifndef BUFFER_SIZE
#error Please specify the buffer size
#endif

int main(void)
{   
    printf("MAX  = %d\n",MAX(10,5) * 5);
    printf("BADMAX = %d\n",BADMAX(10,5)*5);
    printf("SQUARE = %d\n",SQUARE(10 + 1));
    printf("BADSQUARE = %d\n",BADSQUARE(10 + 1));
    fputs(HELP_TEXT, stderr);

#if 0 /* if 0 comment wort, if 1 comment don't work */
    int some_variable = 13;
    VAR_PRINT(some_variable);
#endif

#if 0
    /* if write #if 1 to code work, #else not work */
    /* code */
    
#else
    /*if write #if 0 to code up not work. #else worl */
   /* code */
#endif

#if defined(FOR_FIRST)
    printf("FOR_FIRST\n");
#elif defined(FOR_SECOND)
    printf("FOR_SECOND\n");
#else
    printf("OTHER\n");
#endif
    return 0;    
}
