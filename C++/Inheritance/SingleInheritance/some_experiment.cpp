#include <iostream>

class A {
    int num = 20;
public:
    void Show() {
        std::cout << num << std::endl;
    }
    void SetNum(int _x) {
        num = _x;
    }
};

class B : public A {
    int num_b = 30;
public:
    void ShowB() {
        std::cout << num_b << std::endl;
    }
};

int main(void) {
    B ob;
    ob.SetNum(10);
    std::cout << "Show " << std::endl;
    ob.Show();
    std::cout << "ShowB " << std::endl;
    ob.ShowB();
    return 0;
}
