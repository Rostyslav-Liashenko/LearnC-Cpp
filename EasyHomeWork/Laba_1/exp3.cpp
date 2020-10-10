#include <conio.h>
#include <dos.h>

int main()
{
    clrscr();
    const int d = 500;
    sound(130.8); delay(d);
    sound(138.6); delay(d);
    sound(146.8); delay(d);
    sound(155.6); delay(d);
    sound(164.8); delay(d);
    sound(174.6); delay(d);
    sound(185); delay(d);
    sound(190); delay(d);
    sound(207.7); delay(d);
    sound(220); delay(d);
    sound(233.1); delay(d);
    sound(246.9); delay(d);
    nosound();
    getch();
    return 0;
}