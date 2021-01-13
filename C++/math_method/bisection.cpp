#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

void inp_data(long double &a, long double &b, long double &e) { 
    std::cout << "Input the a, b and epsilon:" << std::endl;
    std::cin >> a >> b >> e;
}

long double calc_f(long double a) { 
    return pow(a,3) - 2 * a - 5;
}

void print_result(long double x, long double f_x) {
    std::cout << "x = " << x << std::endl;
    std::cout << "f(x) = " << f_x << std::endl;
    std::cout << "Create by Liashenko Rostyslav PSK-18"
    exit(0);
}

int main(void) {
    long double a, b, e; // inp data
    long double f_a, x, f_x; 
    inp_data(a,b,e); // step 1
    f_a = calc_f(a); // step 2
    while (true)
    {
        x = (a+b) / 2.0; // step 3
        f_x = calc_f(x);
        std::cout << std::setw(15) << a << " " << std::setw(15) << b << " " << std::setw(15) << x << " " << std::setw(15) << f_x << std::endl;
        if (f_x == 0) { // step 4
            print_result(x,f_x);
        }
        if (!(x - a > e)) { //step 5
            print_result(x,f_x);
        }
        if (f_a * f_x > 0) {
            a = x;
            f_a = f_x;
        } else {
            b = x;
        }
    }    
    return 0;
}