#include <iostream>
#include <fstream>

#define MAX_COUNT_STRING_IN_FILE 100

using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::cin;
using std::cout;

int main(void) {
    ifstream inp_file;
    ofstream out_file;
    int array[MAX_COUNT_STRING_IN_FILE];
    string path_to_file;
    cout << "Input the path to file: " << endl;
    cin >> path_to_file;
    inp_file.open(path_to_file);
    if (!inp_file.is_open()) {
        cout << "File not open" << endl;
        return 1;
    }
    int count_number = 0;
    int number;
    while(!inp_file.eof()) {
        inp_file >> number;
        if (number % 2 != 0) {
            array[count_number] = number;
            count_number++;
        }
    }
    inp_file.close();
    out_file.open(path_to_file);
    for (int i = 0; i < count_number; i++) {
        out_file << array[i] << endl;
    }
    return 0;
}