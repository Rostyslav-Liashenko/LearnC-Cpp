#include <stdio.h>

int main(void)
{
    int p;
    float z;
    char ch;

    printf("   Податок з суми зарплати\n");
    printf("для продовження натиснути Enter; закінчити роботу - символ n\n");
    m1: 
    printf("Введи розмір заробітної плати\n");
    scanf("%f",&z);
    if (z<=17)
    p = 0;
    else if (z > 17 && z < 85)
        p = 1;
    else if (z >=85 && z < 170)
        p = 2;
     else
        p = 3;
    switch (p)
    {
    case 1:
        printf("податок = %5.2f\n",0.1*z);
        break;
    case 2:
        printf("податок = %5.f\n",(z-85)*0.15+6.8);
        break;
    case 3:
        printf("податок = %5.f\n",19.55+(z-170) * 0.2);

    default:
        printf("Ви не сплачуєте податків!\n");
    }
    printf("Повторити ще раз? y/n\n");
    scanf("%c",&ch);
    if (ch != 'n')
        goto m1;
    return 0;
}

