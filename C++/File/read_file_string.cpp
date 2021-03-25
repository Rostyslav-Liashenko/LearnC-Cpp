#include <iostream>
#include <cstring>
#include <fstream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

int main()
{
    string path = "myFile.txt";
    ifstream fin;
    fin.open(path);
    if (!fin.is_open()) {
        cout << "Error, file not could open " << endl;
        return 1;
    }
    cout << "File open" << endl;
    string str;
    while (!fin.eof()) 
    {
        getline(fin,str); 
        cout << str << endl;
    }
    fin.close();
    return 0;
}