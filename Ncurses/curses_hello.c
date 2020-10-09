#include <stdio.h>
#include <ncurses.h>
#include <unistd.h>

const char message[] = "Hello, world";

enum {delay_duration = 5};

int main(void)
{
    int row,col;
    initscr(); /* link library */
    getmaxyx(stdscr,row,col); /* get size terminal */
    move(row/2,(col - sizeof(message) -1) / 2);
    addstr(message);
    curs_set(0);
    refresh();
    sleep(delay_duration);
    move(0,0);
    addstr("My first program used library ncurses");
    refresh();
    sleep(delay_duration);
    endwin();
    return 0;
}