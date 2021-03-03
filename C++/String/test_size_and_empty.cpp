#include <iostream>

int main(void) {
    std::string s1 = "hello";
    std::cout << s1.size() << std::endl;
    std::string s2 = "";
    if (s2.empty())
        std::cout << "String is empty" << std::endl;
    return 0;
}
