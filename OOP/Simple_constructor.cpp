#include <iostream>

using namespace std;
class Test  {
	int x;
	
	public:
		Test() {
			x = 0;
			cout << "Constructor " << x << endl;
		}
		
		Test(int v) {
			x = v;
			cout << "Constructor param, " << x << endl;
		}
		
		Test(Test& t) {
			x = t.x;
			cout << "Copy constructor, " << x << endl;
		}
		
		~Test() {
			cout << "Destructor, " << x << endl;
			
		}
		
		void print() {
			cout << "Print, " << x << endl;
		}
};

Test Func(Test t) {
	Test t1(10);
	return t1;
}

int main() {
	Test a(1), b(2);
	
	Test c = a; // copy object a
	c.print();
	
	c = Func(b); // copy object b, parameter = 10
	c.print();
	
	c = a;
	c.print();
	return 0;
}
