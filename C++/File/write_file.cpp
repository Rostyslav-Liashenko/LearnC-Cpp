#include <iostream>
#include <fstream>

#define COUTREPETER 5 

using std::ofstream;
using std::string;
using std::cout;
using std::endl;
using std::cin;

int main(void) {
    string path = "Test.txt"; 
    ofstream fout;
    fout.open(path,ofstream::app); // append

    if (!fout.is_open()) {
        std::cout << "Error, file not open" << std::endl;
        return -1;
    } 
    int tmp;
    for (int i = 0; i < COUTREPETER; i++) {
        cout << "Input the number " << i << endl;
        cin >> tmp;
        fout << tmp << endl;
    }
    fout.close();
    return 0;
}
