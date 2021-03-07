#include <iostream>

class Animal { // abstract class
    public:
    virtual void Walk() = 0;
    virtual void Sound() = 0;
    virtual ~Animal() {}
};

class Dog : public Animal {
public:    
    void Walk() override {
        std::cout << "Dog is running" << std::endl;
    }
    void Sound() override {
        std::cout << "Gav gav" << std::endl;
    }
    ~Dog() override {}
};

class Cat : public Animal {
public:
    void Walk() override {
        std::cout << "Cat is running" << std::endl;
    }
    void Sound() override {
        std::cout << "Mya mya" << std::endl;
    }
    ~Cat() override {}
};

class Duck : public Animal {
public:
    void Walk() override {
        std::cout << "Duck is running" << std::endl;
    }
    void Sound() override {
        std::cout << "Krya krya" << std::endl;
    }
    ~Duck() override {}
};

class RandomAnimal {
public:
    void WalkAndSound(Animal &animal) {
        animal.Sound();
        animal.Walk();
    }
};

int main(void) {
    RandomAnimal random_animal;
    Cat myrshik;
    Dog rex;
    std::cout << "#1" << std::endl;
    random_animal.WalkAndSound(myrshik);
    std::cout << "#2" << std::endl;
    random_animal.WalkAndSound(rex);
}