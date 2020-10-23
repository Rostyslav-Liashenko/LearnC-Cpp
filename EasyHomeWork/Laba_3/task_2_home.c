#include <stdio.h>

#define HIGH 100
#define LOW 1

int main(void)
{
    int n =1,ch = HIGH, cl = LOW, chislo = (HIGH+LOW) / 2;
    char c;
    printf("Zadymay chislo vid %d do %d, a ya vgaday yogo\n\n",cl,ch);
    printf("Napishy y yakcho vgadal\n");
    printf("b - yaksho bilshe, m - menshe\n");
    printf(" vashe chils %d\n",chislo);

    while ((c=getchar()) != 'y')
    {
        if (c != '\n')
        {
            if (c == 'm')
            {
                ++n;
                ch = chislo -1;
                chislo = (ch + cl) / 2;
                printf("Mnogo bydet. Moshe %d\n",chislo);
            }
            else
                if (c == 'b')
                {
                    ++n;
                    cl = chislo + 1;
                    chislo = (ch + cl) / 2;
                    printf("Malovato bydet, Moshe %d\n",chislo);
                }
            else
            {
                printf("Pidskajy, bilshe b chi menshe m?\n");
            } 
        }
    }
    printf("Ya ugadal za %d sprob!!\n",n);
    return 0;
}