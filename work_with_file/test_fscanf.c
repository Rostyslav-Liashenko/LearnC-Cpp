/* it's file not complete program, it's example code with fscanf */
void int_file_sum(FILE *f, int *sum, int *count)
{
    int n;
    *count = 0;
    *sum = 0;
    while(fscanf(f, "%d", &n) == 1)
    {
        *sum += n;
        *count++;
    }
}

int main(void)
{

    return 0;
}
