#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> vec;
    std::cout << "Real size of array in vector: " << vec.capacity() << std::endl;
    for (int j = 0; j < 10; j++) {
        vec.push_back(j);
    }
    std::cout << "Real size of array in vector: " << vec.capacity() << std::endl;
    return 0;
}