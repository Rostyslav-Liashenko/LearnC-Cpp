#include <stdio.h>

enum greek {alpha, beta, gamma = beta, delta};

void greek_print(enum greek x)
{
    switch(x)
    {
        case alpha:
            printf("Alpha\n");
            break;
        case beta:
            printf("Beta\n");
            break;
        case delta:
            printf("delta\n");
            break;
    }
}

int main(void)
{
    greek_print(alpha);
    return 0;
}
