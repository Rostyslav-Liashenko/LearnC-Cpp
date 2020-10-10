#include <stdio.h>

int main(void)
{
    int year;
    printf("Введіть ваш рік: ");
    scanf("%d",&year);
    int tmp = year % 10;

    switch (year)
    {
        case 11: case 12: case 13: case 14: case 20: /* exception */
            printf("Вам %d років\n",year);
            return 0;
            break;
    }
    switch(tmp)
    {
        case 1:
            printf("Вам %d рік\n",year);
            break;
        case 2: case 3: case 4: 
            printf("Вам %d роки\n",year);
            break;
        case 0: case 5: case 6: case 7: case 8: case 9:
            printf("Вам %d років\n",year);
            break;
    }
    printf("Create By Liashenko Rostyslav\n");
    return 0;
}