#include <iostream>

int main(void) {
    int i = 0;
    int *p = &i; // pointer 
    int &r = i; // link
    i++;
    (*p)++;
    r++;
    std::cout << i << std::endl;
    return 0;
}
