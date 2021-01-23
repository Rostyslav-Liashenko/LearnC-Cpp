#include <iostream>

class A {
public:
    void operator++() { std::cout << "first\n" << std::endl; }
    void operator--() { std::cout << "second\n" << std::endl; }
    void operator++(int) {std::cout << "third\n" << std::endl; }
    void operator--(int) {std::cout << "fourth\n" << std::endl; }
};

int main(void) {
    A a;
    ++a; // first
    a++; // third
    --a; // second
    a--; // fourth
    return 0;
}
