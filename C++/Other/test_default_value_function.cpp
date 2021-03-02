#include <iostream>

void f(int a = 3, double b = 10.25, int c = 5) {
    std::cout << a << " " << b << " " << c << std::endl;
}


int main(void) {
    f();
    f(5,4.32,10);
    f(6);
    return 0;
}
