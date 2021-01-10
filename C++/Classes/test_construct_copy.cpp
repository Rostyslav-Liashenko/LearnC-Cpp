#include <iostream>
#include <cstdlib>
#include <ctime>


class Cls1 {
    int *p;
public:

    Cls1() { 
        p = new int[20];
        for (int i = 0; i < 20; i++) {
            p[i] = rand() % 20;
        }
    }

    Cls1(const Cls1 &original) { // construct copy
        std::cout << "Call construct copy\n";
        p = new int[20];
        for (int i = 0; i < 20; i++)
            p[i] = rand() % 20; 
    }

    ~Cls1() {delete [] p; }

    void display() {
        for (int i = 0; i < 20; i++) {
            std::cout << p[i] << " ";
        }
        std::cout << "\n";
    }
};

void f(Cls1 x) {
    std::cout << "Object in function f" << std::endl;
    x.display();
}

void g(Cls1 &x) {
    std::cout << "Object in function g" << std::endl;
    x.display();
}

int main(void) {
    srand(time(0)); //create normaly random
    Cls1 c;
    std::cout << "Original object" << std::endl;
    c.display();
    f(c);
    g(c);
    return 0;
}
