#include <iostream>

using std::string;


int main() {
    std::string s1 = "hello";
    std::string s2 = "world";

    bool result = s1 == s2; // false
    result = s1 == "Hello"; // false
    result = s1 == "hello"; // true
    result = s1 != s2; // true
    result = s1 != "Hello"; // true
    result = s1 != "hello"; // false
    s1 = "Aport";
    s2 = "Apricot";
    result = s1 > s2;
    return 0;
}
