#include <iostream>
#include <cstdlib>
#include <ctime>

int main(void) {
    srand(time(0));
    int count = 200;
    int *p = new int[count];
    for (int i = 0; i < count; i++)
        p[i] = rand() % 10;
    for (int i = 0; i < count; i++) {
        std::cout << "p[" << i << "] =" << p[i] << std::endl;
    }
    delete [] p;
    return 0;
}
