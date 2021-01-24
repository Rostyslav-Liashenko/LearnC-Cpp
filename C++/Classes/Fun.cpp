#include <iostream>

class Fun {
public:
    void operator() () { std::cout << "fun0" << std::endl; }
    void operator() (int a) { std::cout << "fun1: " << a << std::endl; }
    void operator() (int a, int b) { std::cout << "fun2: " << a << " " << b << std::endl; }
};
