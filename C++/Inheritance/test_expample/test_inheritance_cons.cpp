#include <iostream>

class A {

protected:
    int a;
public:
    A() {
        a = 5;
    }

    A(int _a) {
        a = _a;
    }
};

class B : public A {
    int field = -5;
public:
    B() {

    }
    void print() {
        std::cout << a << std::endl;
        std::cout << field << std::endl;
    }
};


int main(void) {
    B test;
    test.print();
}
