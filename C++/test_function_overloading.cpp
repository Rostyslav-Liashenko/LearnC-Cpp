#include <iostream>

void print(int n) { std::cout << n << std::endl; }
void print(const char *s) { std::cout << s << std::endl; }
void print() { std::cout << "Hello world" << std::endl; }


int main(void) {
    print(50);
    print("Have a nice day");
    print();
    return 0;
}
