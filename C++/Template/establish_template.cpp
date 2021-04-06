#include <iostream>

template <typename T>
class Printer {

public:
    void Print(T value) {
        std::cout << value << std::endl;
    }
};

template<>
class Printer<const char*> {
public:
    void Print(const char* str) {
        std::cout << "____" << str << "_____" << std::endl;
    }
};

int main(void) {
    Printer<const char*> p;
    p.Print("some const char*");
    Printer<int> j;
    j.Print(1234);
    return 0;
}