#include <iostream>
#include <fstream>
using std::ofstream;
using std::string;

int main(void) {
    string path = "GONEZ_BOHDAN.txt"; 
    ofstream fout;
    fout.open(path);

    if (!fout.is_open()) {
        std::cout << "Error, file not open" << std::endl;
        return -1;
    } 
    fout << "Test write" << std::endl;
    fout.close();
    return 0;
}