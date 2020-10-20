#include <iostream>

using namespace std;
int main(void)
{
    double x;
    double sum = 0;
    cout << "Enter reals:\n";
    while (cin >> x)
    {
        if (x == 0)
            break;
        if (x < 0)
            continue;
        sum += x;
    }
    cout << "sum = " << sum << endl;
    cout << "Create By Liashenko Rostyslav PSK-18\n";
    return 0;
}