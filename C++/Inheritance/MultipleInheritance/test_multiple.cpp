#include <iostream>

using std::cout;
using std::endl;

class Car {
public:
    void Drive() {
        cout << "I am driving..." << endl;
    }
};

class Airplane {
public:
    void Fly() {
        cout << "I am flying..." << endl;
    }
};

class FlyingCar : public Car, public Airplane {

};

int main(void) {
    FlyingCar fc;
    fc.Drive();
    fc.Fly();   
    return 0;
}