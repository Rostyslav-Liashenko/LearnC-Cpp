#include <iostream>

using std::cout;
using std::endl;

class Car {
public:
    Car() {
        cout << "Call constructor Car" << endl; 
    }

    void Drive() {
        cout << "I am driving..." << endl;
    }
};

class Airplane {
public:
    Airplane() {
        cout << "Call constructor Airplane" << endl;
    }
    void Fly() {
        cout << "I am flying..." << endl;
    }
};

class FlyingCar : public Car, public Airplane {
public:
    FlyingCar() {
        cout << "Call constructor FlyingCar" << endl;
    }
};

int main(void) {
    FlyingCar fc;
    fc.Drive();
    fc.Fly();   
    return 0;
}