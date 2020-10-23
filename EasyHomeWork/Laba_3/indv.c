#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAXHEALTHY 10

int main(void)
{
    srand(time(NULL));
    int random_num, healthy = MAXHEALTHY;
    int player_num;
    random_num = rand() % 100;
    printf("Random number %d\n",random_num);
    while (1)
    {
        printf("Input the number: ");
        scanf("%d",&player_num);
        if (player_num == random_num)
        {
            printf("Great, you WIN\n\n");
            break;
        }
        else if (player_num > random_num)
        {
            printf("Your number is higher\n");
        }
        else
        {
            printf("Your number is low\n");    
        }
        healthy--;
        printf("You healthy %d\n\n",healthy);
        if (healthy == 0)
        {
            printf("You lose\n");
            break;
        }
    }
    return 0;
}