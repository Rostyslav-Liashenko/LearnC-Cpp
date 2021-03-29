#include <iostream>
#include <fstream>

using std::string;
using std::endl;
using std::fstream;
using std::cout;
using std::cin;

int main(void) {
    string path = "my_file.txt";
    fstream fs;
    fs.open(path,fstream::in | fstream::out | fstream:: app);
    if (!fs.is_open())
    {
        cout << "Error, file not found "<< endl;
        return 1;
    }
    string msg;
    int value;
    cout << "Input 1 to write message in file " << endl;
    cout << "Input 2 to read all message from file " << endl;
    cin >> value;
    cin.clear();
    cin.ignore(32767,'\n'); // for clear stream
    switch (value)
    {
    case 1:
        cout << "Input the message" << endl;
        getline(std::cin,msg);
        fs << msg << "\n";
        break;
    case 2:
        while (!fs.eof())
        {
            msg = "";
            getline(fs,msg);
            cout << msg << endl;
        }
        break;   
    default:
        cout << "Not selected right number" << endl;
        break;
    }
    fs.close();
    return 0;
}