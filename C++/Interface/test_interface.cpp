#include <iostream>

class IBicycle { // interface
public:
    void virtual TwistTheWheel() = 0;
    void virtual Ride() = 0;

};

class SimpleBicycle : public IBicycle { // implemet the interface IBicycle
    public:
        void TwistTheWheel() override {
            std::cout << "method TwistTheWhell() simpleBicycle" << std::endl;
        }
        void Ride() override {
            std::cout << "method Ride() simpleBicycle" << std::endl;
        }
};

class SportBicycle : public IBicycle {
public:
    void TwistTheWheel() override {
        std::cout << "method TwistTheWhell() SportBicycle" << std::endl;
    }
    void Ride() override {
        std::cout << "method Ride() SportBicycle" << std::endl;
    }
};

class Human {
public:
    void RideOn(IBicycle& bicycle) {
        std::cout << "Turn the steering wheel" << std::endl;
        bicycle.TwistTheWheel();
        std::cout << "Ridding.." << std::endl;
        bicycle.Ride();
    }
};

int main(void) {
    SimpleBicycle sb;
    SportBicycle spb;
    Human h;
    h.RideOn(sb);
    std::cout << std::endl;
    h.RideOn(spb);
    return 0;
}