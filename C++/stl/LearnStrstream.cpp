#include <iostream>
#include <strstream>
#include <string>

int main() {
    std::strstream xstr;
    for (int i = 0; i < 10; i++) {
        xstr << "Demo " << i << std::endl;
    }
    std::cout << xstr.str();
    std::string str;
    str.assign(xstr.str(), xstr.pcount());
    std::cout << str.c_str();
    return 0;
}