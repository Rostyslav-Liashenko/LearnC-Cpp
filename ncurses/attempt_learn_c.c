#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>

int main(void)
{
    if (!initscr())
    {
        fprintf(stderr,"Error initialising ncurses.\n");
        exit(1);
    }

    WINDOW *win = newwin(LINES,COLS,0,0);
    printw("Hello, world!");

    curs_set(0); /* cursor not visibility */
    refresh();
    getch();
    delwin(win);
    endwin(); /* close ncurses */
    return 0;
}