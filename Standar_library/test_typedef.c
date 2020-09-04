#include <stdio.h>

typedef int *intptr;
typedef int integeral_number;



struct tag_mys_struct
{
    int i;
    double d;
};

typedef struct tag_mys_struct my_struct;

typedef struct tag_mystruct
{
    int i;
    double d;
} mystruct;

int main(void)
{
    intptr num1 = NULL;
    my_struct some_struct;
    some_struct.d = 45.32;
    some_struct.i = 14;
    printf("some_struct.i = %d\n",some_struct.i);
    printf("some_struct.d = %.2f\n",some_struct.d);
    return 0;
}