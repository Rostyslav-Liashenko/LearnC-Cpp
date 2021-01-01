#include <ncurses.h>
#include <unistd.h>

enum {begin_x = 0, begin_y = 0, delay_duration = 5};

int main(void)
{
    initscr();
    move(begin_x,begin_y);
    attron(A_BOLD);
    addstr("Hello, ");
    attron(A_UNDERLINE);
    addstr("wonderful");
    attroff(A_BOLD|A_UNDERLINE);
    addstr(" world!");
    addch('*'|A_BOLD|A_BLINK);
    init_pair(1,COLOR_WHITE,COLOR_BLUE); /* create color couple */
    move(10,0);
    attrset(COLOR_PAIR(1)|A_UNDERLINE); /* use color pair */
    addstr("White on blue");
    refresh();
    sleep(delay_duration);
    endwin();
    return 0;
}