#include <ncurses.h>

static const char message[] = "Hello, world";
enum {key_escape = 27};

static void show_message(int x, int y)
{
    move(y,x);
    addstr(message);
    refresh();
}

static void hide_message(int x, int y)
{
    int i;
    move(y,x);
    for (i = 0; i < sizeof(message)-1; i++)
        addch(' ');
    refresh();
}

static void check(int *coord, int max)
{
    if (*coord < 0)
        *coord = 0;
    else
    if (*coord > max)
        *coord = max;
    
}

static void move_message(int *x, int *y, int mx, int my, int dx, int dy)
{
    hide_message(*x,*y);
    *x += dx;
    check(x,mx);
    *y += dy;
    check(y,my);
    show_message(*x, *y);
}

static void handle_resize(int *x, int *y, int *mx,  int *my)
{
    int row, col;
    getmaxyx(stdscr,row,col);
    *mx = col - sizeof(message) + 1;
    *my = row -1;
    hide_message(*x,*y);
    check(x,*mx);
    check(y,*my);
    show_message(*x,*y);
}

int main(void)
{
    int row, col, x,y,max_x, max_y, key;
    initscr();
    cbreak();
    keypad(stdscr,1);
    noecho();
    curs_set(0);
    getmaxyx(stdscr,row,col);
    x = (col - (sizeof(message)-1)) / 2;
    y = row / 2;
    max_x = col - sizeof(message) + 1;
    max_y = row - 1;
    show_message(x,y);
    while ((key = getch()) != key_escape){
        switch(key){
            case KEY_UP:
                move_message(&x,&y,max_x,max_y,0,-1);
                break;
            case KEY_DOWN:
                move_message(&x,&y,max_x,max_y,0,1);
                break;
            case KEY_LEFT:
                move_message(&x,&y,max_x,max_y,-1,0);
                break;
            case KEY_RIGHT:
                move_message(&x,&y,max_x,max_y,1,0);
                break;
            case KEY_RESIZE:
                handle_resize(&x,&y,&max_x,&max_y);
                break;
        }
    }
    endwin();
    return 0;
}