#include <stdio.h>

int main(void)
{
    int year, month, data,n;
    printf("Введіть рік, номер місяця, день : ");
    scanf("%d%d%d",&year,&month,&data);
    if (year > 2020 || month > 12 || ((month == 2) && data > 29))
    {
        printf("Ви ввели не вірні данні\n");
        printf("Виконав Ляшенко Ростислав ПСК-18\n"); 
        return 0;
    }
    if (month > 2)
    {
        n = 0;
    }
    else if ((year % 400 == 0 || (year % 100 != 0 && year % 4 ==0)) && (month <= 2))
    {
        n = 1;
    }
    else if (!(year % 400 == 0 || (year % 100 != 0 && year % 4 ==0)) && (month <= 2))
    {
        n = 2;
    } 
    else
    {
        printf("Помилка!!!\n");
    }
    int day = (int) ((365.25 * year + 30.56 * month + data + n)) % 7 + 1;
    switch (day)
    {
    case 1:
        printf("Понеділок\n");
        break;
    case 2:
        printf("Вівторок\n");
        break;
    case 3:
        printf("Середа\n");
        break;
    case 4:
        printf("Четверг\n");
        break;
    case 5:
        printf("П'ятниця\n");
        break;
    case 6:
        printf("Субота\n");
        break;
    case 7:
        printf("Неділля\n");
        break;
    }
    printf("Виконав Ляшенко Ростислав ПСК-18\n");  
    return 0;
}