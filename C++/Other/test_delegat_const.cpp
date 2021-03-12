#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Human {
    string name;
    int age;
    int weight;
public:
    Human(string name) {
        this->name = name;
        this->age = 0;
        this->weight = 0;
    }

    Human(string name, int age) : Human(name) {
        this->age = age;
    }
    
    Human(string name, int age, int weight) : Human(name, age) {
        this->weight = weight;
    }
    void Show() {
        cout << "Name " << name << endl;
        cout << "Age " << age << endl;
        cout << "Weight " << weight << endl;
    }
};

int main() {
    Human a("Aristarh",20,170);
    a.Show();
    return 0;
}
