#include <iostream>

// abstract class
class Weapon {
public:
    virtual void Shoot() = 0;
};

class Gun : public Weapon { // basic class
public:
    void Shoot() override {
        std::cout << "BANG!" << std::endl;
    }
};

class SubmachineGun : public Gun {
public:
    void Shoot() override {
        std::cout << "BANG! BANG! BANG!" << std::endl;  
    }
};

class Bazooka : public Weapon {
public:
    void Shoot() override {
        std::cout << "BADABUM!!!" << std::endl;
    }
};

class ShotGun : public Weapon {
public:
    void Shoot() override {
        std::cout << "bing bang bin BANG" << std::endl;
    }
};

class Player {
public:
    void Shoot(Weapon *weapon) {
        weapon->Shoot();
    }
};

int main(void) {
    Gun gun;
    Bazooka bazooka;
    SubmachineGun submachine_gun;
    Player player;
    ShotGun shotgun;

    player.Shoot(&gun);
    player.Shoot(&submachine_gun);
    player.Shoot(&bazooka);
    player.Shoot(&shotgun);
}
