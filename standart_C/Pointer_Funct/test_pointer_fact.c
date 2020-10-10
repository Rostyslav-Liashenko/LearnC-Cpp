#include <stdio.h>
#include <stdlib.h>

enum {MAX = 100};

double dbl_sum(const double *a, int size)
{
    return size > 0 ? *a + dbl_sum(a+1,size-1) : 0;
}

double dbl_min(const double *a, int size)
{
    double d;
    if (size == 1)
        return *a;
    d = dbl_min(a+1,size-1);
    return *a < d ? *a : d;
}

double dbl_average(const double *a, int size)
{
    return dbl_sum(a,size) / (double) size;
}

int main(void)
{
    double (*fptr) (const double *, int); /* Function pointer */
    fptr = &dbl_sum; /* or fptr = dbl_min, it's correct */
    double arr[MAX];
    double res;
    for (int i = 0;i < MAX; i++)
    {
        arr[i] = rand() % 20;
    }
    res = fptr(arr,sizeof(arr)/sizeof(*arr)); /* or res = (*fptr) (arr, sizeof(arr) / sizeof(*arr)) */
    printf("res = %.2lf\n",res);
    return 0;
}