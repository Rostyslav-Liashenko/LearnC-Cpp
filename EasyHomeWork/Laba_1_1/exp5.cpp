#include <iostream>
using namespace std;

int main(void)
{
    int y,n;
    n = 5;
    y = n / 2 + 5 * (1 + n++) + n / 2;
    cout << "n = " << n << "  y = " << y << endl;
    n = 5;
    y = n++ + ++n;
    cout << "n = " << n << "  y = " << y << endl;
    n = 5;
    y = n++ + --n;
    cout << "n = " << n << "  y = " << y << endl;
    n = 0;
    y = (n = 5) + (++n);
    cout << "n = " << n << "  y = " << y << endl;

    int a,b,c = 5;
    a = (b = c + 1) + 7;
    cout << "b = " << b;
    cout << "  a = "<< a << endl;
    return 0;
}