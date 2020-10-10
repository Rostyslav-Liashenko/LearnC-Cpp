#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int main()
{
    int a = 127;
    int z1, z2, z3, b;
    z3 = a % 10;
    a /= 10;
    z2 = a % 10;
    a /= 10;
    z1 = a % 10;
    cout << ((100 * z3 + 10 * z2 + z1) + 127)<<endl;
    return 0;
}