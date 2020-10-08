#include <stdio.h>
#include <ncurses.h>

int main(void)
{
    initscr(); /* init ncurses */
    curs_set(0); /* cursor not visibility */
    printw("Hello, World");
    refresh();
    getch();
    endwin(); /* close ncurses */
    return 0;
}