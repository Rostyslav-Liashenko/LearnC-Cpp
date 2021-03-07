#include <stdio.h>

class A {
public:
    virtual void f() { printf("firts\n"); }
    void g() { f(); }
    void h() { A::f(); }
};

class B : public A {
public:
    void f() override { printf("second\n"); }

};

int main() {
    B b;
    b.g(); // second
    b.h(); // first
    b.f(); // second
    b.A::f(); // first
    A *pa = &b;
    pa->f(); // second
    pa->A::f(); // first
}
