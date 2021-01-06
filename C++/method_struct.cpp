#include <iostream>
#include <cmath>


struct str_complex {
    double re,im;
    double modulo() {return sqrt(this->re*this->re + this->im * this->im);}
};

int main(void) {
    str_complex z;
    double mod;
    z.re = 2.7;
    z.im = 3.8;
    mod = z.modulo();
    std::cout << "mod = " << mod << std::endl;
}
