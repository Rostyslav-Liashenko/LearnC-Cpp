#include <iostream>

using std::cout;
using std::endl;

class Point {
    int x;
    int y;
    int z;
public:
    Point() {
        x = y = z = 0;
    }
    Point(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
};

template <typename T1, typename T2>
class MyClass {
    T1 value_1;
    T2 value_2;
public:
    MyClass(T1 value_1, T2 value_2) {
        this->value_1 = value_1;
        this->value_2 = value_2;
    }
    void DataTypeSize() {
        cout << "value_1 = " << sizeof(value_1) << endl;
        cout << "value_2 = " << sizeof(value_2) << endl;
    }
};

int main(void) {
    Point a;
    int b = 10;
    MyClass<Point,int> c(a,b);
    c.DataTypeSize();
    return 0;
}
