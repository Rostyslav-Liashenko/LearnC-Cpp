#include <ncurses.h>
#include <unistd.h>

static void show_section_snake(int x, int y)
{
    move(y,x);
    addch('*');
    refresh();
}

static void hide_section_snake(int x, int y)
{
    move(y,x);
    addch(' ');
    refresh();
}

static void check(int *coord, int max)
{
    if (*coord < 0)
        *coord = 0;
    else if (*coord > max)
        *coord = max;
}

static void move_section_snake(int *x, int *y, int mx, int my, int dx, int dy)
{
    hide_section_snake(*x,*y);
    *x += dx;
    check(x,mx);
    *y += dy;
    check(y,my);
    show_section_snake(*x,*y);
}


int main(void)
{
    int row, col,x,y,max_x,max_y,key;
    initscr();
    cbreak();
    keypad(stdscr,1);
    noecho();
    curs_set(0);
    getmaxyx(stdscr,row,col);
    x = col / 2;
    y = row / 2;
    max_x = col -1;
    max_y = row -1;
    show_section_snake(x,y);
    while ((key = getch()) != KEY_BACKSPACE)
    {
        switch(key)
        {
            case KEY_UP:
                move_section_snake(&x,&y,max_x,max_y,0,-1);
                break;
            case KEY_DOWN:
                move_section_snake(&x,&y,max_x,max_y,0,1);
                break;
            case KEY_LEFT:
                move_section_snake(&x,&y,max_x,max_y,-1,0);
                break;
            case KEY_RIGHT:
                move_section_snake(&x,&y,max_x,max_y,1,0);
        }
    }
    endwin();
    return 0;
}
