#include <iostream>

template <typename T1, typename T2>
T2 Sum(T1 a, T2 b) {
    return a + b;
}

int main(void) {
    std::cout << Sum(5, 10.4) << std::endl;
    return 0;
}
