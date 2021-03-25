#include <iostream>
#include <fstream>

using std::string;
using std::endl;
using std::ifstream;
using std::ofstream;
using std::cin;
using std::cout;

void reverse(string& str) {
    for (int i = 0, j = str.length() - 1; i < j; i++, j--) {
        char tmp;
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
    }
}

int main(void) {
    ifstream inp_file;
    ofstream out_file;
    string path_to_file;
    cout << "Input the path of file:" << endl;
    cin >> path_to_file;
    inp_file.open(path_to_file);
    out_file.open("reverse_" + path_to_file);
    string str;
    if (!inp_file.is_open()) {
        cout << "File not found";
        return -1;
    }
    while(!inp_file.eof()) {
        getline(inp_file,str);
        reverse(str);
        out_file << str << endl;
    }
    inp_file.close();
    out_file.close();
    return 0;
}