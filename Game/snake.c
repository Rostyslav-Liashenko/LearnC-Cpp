#include <ncurses.h>

enum {delay_duration = 100};


struct one_section_snake
{
    int cur_x, cur_y, dx, dy;
};

static void show_section_snake(struct one_section_snake *s)
{
    move(s->cur_y,s->cur_x);
    addch('*');
    refresh();
}

static void hide_section_snake(struct one_section_snake *s)
{
    move(s->cur_y,s->cur_x);
    addch(' ');
    refresh();
}

static void check(int *coord, int max)
{
    if (*coord < 0)
        *coord += max;
    else if (*coord > max)
        *coord -= max;
}

static void move_section_snake(struct one_section_snake *s, int mx, int my)
{
    hide_section_snake(s);
    s->cur_x += s->dx;
    check(&s->cur_x,mx);
    s->cur_y += s->dy;
    check(&s->cur_y,my);
    show_section_snake(s);
}

static void set_direction(struct one_section_snake *s, int dx, int dy)
{
    s->dx = dx;
    s->dy = dy;
}


int main(void)
{
    int row, col,key;
    struct one_section_snake s;
    initscr();
    cbreak();
    timeout(delay_duration);
    keypad(stdscr,1);
    noecho();
    curs_set(0);
    getmaxyx(stdscr,row,col);
    s.cur_x = col / 2;
    s.cur_y = row / 2;
    set_direction(&s,0,0);
    while ((key = getch()) != KEY_BACKSPACE)
    {
        switch(key)
        {
            case KEY_UP:
                set_direction(&s,0,-1);
                break;
            case KEY_DOWN:
                set_direction(&s,0,1);
                break;
            case KEY_LEFT:
                set_direction(&s,-1,0);
                break;
            case KEY_RIGHT:
                set_direction(&s,1,0);
            case ERR:
                move_section_snake(&s,col-1,row-1);
                break;
        }
    }
    endwin();
    return 0;
}
