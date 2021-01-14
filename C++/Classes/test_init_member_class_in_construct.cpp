#include <iostream>

class A {
    int x,y;
public:
    
    A() {
        x = 0;
        y = 0;
    }

    A(int a_x, int a_y) {
        x = a_x;
        y = a_y;
    }
   
    int GetX() { return x; }
    int GetY() { return y; }

    void Display() {
        std::cout << "x = " << x << std::endl;
        std::cout << "y = " << y << std::endl;
    }
};

class B {
    int x;
    A a; // class A
public:
    
    B() {
        x = 0;  
    }

    void Display() {
        std::cout << "x = " << x << std::endl;
        std::cout << "Class A" << std::endl;
        std::cout << "a.x = " << a.GetX() << std::endl;
        std::cout << "a.y = " << a.GetY() << std::endl;
    }
};

int main(void) {
    B some_variable;
    some_variable.Display();
    return 0;
}
