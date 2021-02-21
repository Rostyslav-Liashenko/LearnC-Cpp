#include <iostream>

double f(int a, int b) {
    if (b == 0) {
        throw "Error";
    }
    return a / b;
}


int main(void) {
    int a,b;
    std::cin >> a >> b;
    try {
        double c = f(a,b);
        std::cout << a << " / " << b << " = " << c << std::endl;
    }
    catch (...) {
        std::cout << "Error! Divison 0";
        return 1;
    }
    return 0;
}
