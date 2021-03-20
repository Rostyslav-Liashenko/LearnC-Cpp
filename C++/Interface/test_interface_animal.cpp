#include <iostream>

class IWalk { // interface
public:
    virtual void Walk() = 0;
};

class IFly { // interface
public:
    virtual void Fly() = 0;
};

class ISwim { // interface
public:
    virtual void Swim() = 0;
};

class Bird : public IWalk, public ISwim, public IFly {};

class Pingvin : public Bird {
public:
    void Walk() override {
        std::cout << "Pingvin is walking" << std::endl;
    }
    void Swim() override {
        std::cout << "Pingvin is swimming" << std::endl;
    }

    void Fly() override {
        std::cout << "Pingvin is not flying" << std::endl;
    }
};

class Dove : public Bird {
public:
    void Walk() override {
        std::cout << "Dove is walk" << std::endl;
    }
    void Fly() override {
        std::cout << "Dove is flying" << std::endl;
    }
    void Swim() override {
        std::cout << "Dove is not swimming" << std::endl;
    }
};

class BehaviorBird {
public:
    void FindBehavior(Bird& bird) {
        bird.Fly();
        bird.Swim();
        bird.Walk();
    }
};

int main(void) {
    Pingvin pin;
    Dove dov;
    BehaviorBird bb;
    bb.FindBehavior(pin);
    bb.FindBehavior(dov);
    return 0;
}