#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n",rand() % 12 + 1); /* not recommend */ /*diaposon 1..12 */
    }
    printf("------------------------------");
    for (int i = 0; i < 100; i++)
    {
        printf("%d\n",1 + (int) (13.0 * rand()/(RAND_MAX + 2.0))); /*diaposon 2..13 */
    }
    return 0;
}