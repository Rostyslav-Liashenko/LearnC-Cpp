#include <iostream>

class A {
public:
    void f(int a, int b) {
        std::cout << a << " " << b << std::endl;
    }
};

class B : public A {
    double f; // method f(int a, int b) is hidding
};

int main(void) {
    B b;
    // b.f(2,3); error
    b.A::f(2,3); // correct
}
