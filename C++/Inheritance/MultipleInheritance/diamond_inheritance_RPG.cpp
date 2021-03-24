#include <iostream>

using std::string;
using std::cout;
using std::endl;

/*
    Russian
    --------------------------------------------------------------------------
    если компилятор видит, что класс наследуется от классов, 
    у которых есть виртуальное наследование от одного и того же класса, 
    то он вызывает для такого класса конструктор предка предка всего один раз.
    --------------------------------------------------------------------------
    English
    --------------------------------------------------------------------------
    if the compiler sees that a class inherits from classes that have 
    virtual inheritance from the same class, then it calls the ancestor's 
    constructor for such a class only once.
    --------------------------------------------------------------------------
*/


class Character
{
    int healthy_point;
public:
    Character() 
    {
        cout << "Constructor Character" << endl;
    }
};

class Orc : public virtual Character
{
public:
    Orc()
    {
        cout << "Constructor Orc" << endl;
    }
};

class Warrior : public virtual Character
{
public:
    Warrior()
    {
        cout << "Constructor Warrior" << endl;
    }
};

class OrcWarrior : public Orc, public Warrior
{
public:
    OrcWarrior() 
    {
        cout << "Constructor orcWarrior" << endl;
    }
};

int main()
{
    OrcWarrior orw;
    return 0;
}