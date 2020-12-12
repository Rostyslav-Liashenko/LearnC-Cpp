#include <iostream>

using namespace std;

class Human {
public:
	Human() {
		name = " ";
	}
	Human(string name) {
		this->name = name;
	}
	Human(string name, int age) : Human(name) {
		this->age = age;
	} // Дилигирущий конструктор
	Human(string name, int age, float weight) : Human(name,age) {
		this->weight - weight;
	}
public:
	string name;
	int age;
	float weight;
};


class Point {
	public:
		Point() {
			cout << "Вызов конструктора объекта " << this << endl;
		}
		Point(int px, int py) : x(px), y(py) {
			cout << "Вызов конструктора объекта с 2-ми аргументами " << this << endl;
		}
		~Point() {
			cout << "Вызов деструктора объекта " << this << endl;
		}
	private:
		int x,y;
	public:
		void SetCoord(int x, int y) {this->x = x; this->y = y;}
};

int main()
{
	setlocale(LC_ALL, "rus");
	//Human h("Alex", 20,80);
	Point pt(2,3);
}
