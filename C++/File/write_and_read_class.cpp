#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
using std::string;

class Point {
    int x;
    int y;
    int z;
public:
    Point() {
        x = y = z = 0;
    }
    Point(int _x, int _y, int _z) {
        x = _x;
        y = _y;
        z = _z;
    }
    void show() {
        cout << "x = " << x << " y = " << y << " z = " << z << endl;
    }
};

int main(void) {
    Point pt1(28,7,5);
    string path = "./File.txt";
    ofstream fout;
    fout.open(path,ofstream::app);
    if (!fout.is_open()) {
        cout << "Error, file not found!" << endl;
        return -1;
    }
    fout.write((char*)&pt1,sizeof(Point));
    fout.close();
    Point pt2;
    ifstream fcin;
    fcin.open(path);
    if (!fcin.is_open()) {
        cout << "Error, file not found!" << endl;
        return -1;
    }
    while (fcin.read((char*)&pt2,sizeof(Point))) {
        pt2.show();
    }
    fcin.close();
    cout << "OK" << endl;
    return 0;
}