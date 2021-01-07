class Complex {
     double re, im;
public:
    Complex(double a_re, double a_im)
        { re = a_re; im = a_im; }
    double GetRe() { return re; }
    double GetIm() { return im; }
    double Modulo() { return sqrt(re*re + im*im); }
    double Argument() { return atan2(im, re); }
    Complex operator+(Complex op2) {
        Complex res(re + op2.re, im + op2.im);
        return res;
    }
    Complex operator-(Complex op2) {
        Complex res(re - op2.re, im - op2.im);
        return res;
    }
    Complex operator*(Complex op2) {
        Complex res(re * op2.re - im * op2.im, re * op2.im + im * op2.re);
        return res;
    }
    Complex operator/(Complex op2) {
        double dvs = op2.re * op2.re + op2.im * op2.im;
        Complex res((re * op2.re + im * op2.im) / dvs, (im * op2.re - re*op2.im) / dvs);
        return res;
    }
};
