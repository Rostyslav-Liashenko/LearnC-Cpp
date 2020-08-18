#include <stdio.h>

int main(void)
{
    enum colors { 
        red = 0xff0000,
        green = 0x00f00,
        blue = 0x0000ff,
        yellow = 0xffff00,
        cyan = 0x00ffff,
        magenta = 0xff00ff,
        black = 0,
        white = 0xffffff,
        grey = 0x808080,
        violet = 0xee82ee
        };
    enum numbers { one = 1, two, first = 1, second, third };
    enum example_enum {
        example_first = 100,
        example_second = example_first  * 20,
        example_third = example_first + 10000,
        example_last = example_third
    };
    enum states {
        running, blocked, ready
    } new_state, last_state;
    return 0;
}
