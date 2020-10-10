#include <stdio.h>
/* it's file not complete program, it's example code with fscanf */
void int_file_sum(FILE *f, int *sum, int *count)
{
    int n;
    *count = 0;
    *sum = 0;
    while(fscanf(f, "%d", &n) == 1)
    {
        *sum += n;
        (*count)++;
    }
}

int main(void)
{
    FILE *f;
    int sum = 0, count = 0;
    f = fopen("file1.txt", "r");
    int_file_sum(f,&sum,&count);
    printf("sum = %d\n",sum);
    printf("count = %d\n",count);
    fclose(f);
    return 0;
}
