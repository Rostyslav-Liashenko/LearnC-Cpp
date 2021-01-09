#include <iostream>

int main(void) {
    std::cout << "Test dynamic memory" << std::endl;
    std::cout << "I created dynamic memory, and shows it" << std::endl; 
    int *ptr;
    ptr = new int;
    *ptr = 20;
    std::cout << "*ptr = " << *ptr << std::endl;
    delete ptr;
    return 0;
}
