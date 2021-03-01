#include <iostream>
class A {
public:
    int one = 1;
private:
    int two = 2;
protected:
    int three = 3;
};

class B : public A {
public:
    void printMsg() {
        std::cout << three << std::endl;
    }
};

int main() {
    B b;
    b.printMsg();
    return 0;
}
