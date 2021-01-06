class Complex {
    double re, im;
public:
    Complex(double a_re, double a_im)
        { re = a_re; im = a_im; }
    double GetRe() { return re; }
    double GetIm() { return im; }
    double Modulo() { return sqrt(re*re + im*im); }
    double Argument() { return atan2(im, re);}
};
