#include <stdio.h>
#include <iostream>

#define DEZL "C++ - it is cool!"

using namespace std;

const double D = 2.54;
int main()
{
    char name[15]; int duim;
    double cm;
    cout << DEZL <<endl;
    cout << "What's you name?" << endl;
    cin >> name;
    cout << "Hello, " << name << endl;
    cout << name << " input length in duim: ";
    cin >> duim;
    cm = D * duim;
    cout << duim << "duim = " << cm << "sm" << '\n';
    return 0;
}