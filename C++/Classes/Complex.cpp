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

    Complex operator-(const Complex &op2) const {
        Complex res(re - op2.re, im - op2.im);
        return res;
    }
    Complex operator*(const Complex &op2) const {
        Complex res(re * op2.re - im * op2.im, re * op2.im + im * op2.re);
        return res;
    }
    Complex operator/(const Complex &op2) const {
        double dvs = op2.re * op2.re + op2.im * op2.im;
        Complex res((re * op2.re + im * op2.im) / dvs, (im * op2.re - re*op2.im) / dvs);
        return res;
    }
};

Complex operator+(const Complex &a, const Complex &b) {
    return Complex(a.GetRe() + b.GetRe(), a.GetIm() + b.GetIm());
}
