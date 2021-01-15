class Complex {
     double re, im;
public:
    Complex() {re = 0; im = 0;} // default construct 
    Complex(double a_re, double a_im)
        { re = a_re; im = a_im; }
    Complex(double a){ re = a; im = 0;} // transformation construct

    double GetRe() const { return re; }
    double GetIm() const { return im; }
    double Modulo() const { return sqrt(re*re + im*im); }
    double Argument() const { return atan2(im, re); }
    
    friend Complex operator+(const Complex&, const Complex&);
    friend Complex operator-(const Complex&, const Complex&);
    friend Complex operator*(const Complex&, const Complex&);
    friend Complex operator/(const Complex&, const Complex&);
};

Complex operator+(const Complex &a, const Complex &b) {
    return Complex(a.re + b.re, a.im + b.im);
}

Complex operator-(const Complex &a, const Complex &b) {
    return Complex(a.re - b.re, a.im - b.im);
}

Complex operator*(const Complex &a, const Complex &b) {
    return Complex(a.re * b.re - a.im * b.im, a.re * b.im + a.im * b.re);
}

Complex operator/(const Complex &a, const Complex &b) {
    double dvs = b.re * b.re + b.im * b.im;
    return Complex((a.re * b.re + a.im * b.im) / dvs, (a.im * b.re - a.re * b.im) / dvs);
}
