#include <iostream>

class A {
    int other_field;
public:
    static int the_static_field; // static field
    static int TheStaticMethod(int a, int b) {
        std::cout << a << std::endl;
        std::cout << b << std::endl;
    }
};

int A::the_static_field = 0;

int main(void) {
    A a;
    a.the_static_field = 15;
    A::the_static_field = 16;
    A::TheStaticMethod(5,15);
    a.TheStaticMethod(10,7);
}
