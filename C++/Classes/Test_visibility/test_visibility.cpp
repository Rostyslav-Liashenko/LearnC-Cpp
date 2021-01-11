#include <iostream>
#include "test_visibility.h"

C1::C1() {
    std::cout << "Call constructor" << std::endl;
}

void C1::f(int a, int b) {
    std::cout << "Call function f" << std::endl;
}

void C1::g(double a) {
    std::cout << "Call funtion g" << std::endl;
}
