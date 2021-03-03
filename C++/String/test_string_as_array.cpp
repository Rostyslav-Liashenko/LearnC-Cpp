#include <iostream>

int main(void) {
    std::string hello = "Hello";
    char c = hello[1]; // e
    hello[0] = 'M';
    std::cout << hello << std::endl; // Melo
    return 0;
}
