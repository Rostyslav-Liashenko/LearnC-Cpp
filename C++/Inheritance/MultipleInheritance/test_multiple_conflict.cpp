#include <iostream>

using std::cout;
using std::endl;

class Car {
public:
    void Use() {
        cout << "I am driving..." << endl;
    }
};

class Airplane {
public:
    void Use() {
        cout << "I am flying..." << endl;
    }
};

class FlyingCar : public Car, public Airplane {

};

int main(void) {
    FlyingCar fc;
    fc.Car::Use();
    cout << endl;
    fc.Airplane::Use();
    return 0;
}
