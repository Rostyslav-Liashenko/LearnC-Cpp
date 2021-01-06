#include <iostream>
#include <cmath>


struct str_complex {
private:
    double re,im;
public:
    str_complex(double a_re, double a_im)
        { re = a_re; im = a_im; }
    double modulo()
        { return sqrt(this->re*this->re + this->im * this->im); }
};

int main(void) {
    str_complex z(2.7, 3.8);
    double mod;
    mod = z.modulo();
    std::cout << "mod = " << mod << std::endl;
}
