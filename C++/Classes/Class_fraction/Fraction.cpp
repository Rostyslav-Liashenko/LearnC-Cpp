#include <iostream>

class Fraction {
    long whole;
    unsigned short fractional;

    unsigned short FindNSD(unsigned short a, unsigned short b) {
        while (a != b) {
            if (a > b)
                a -= b;
            else 
                b -= a;
        }       
        return a;
    } 

    unsigned short FindNSK(unsigned short a, unsigned short b) {
        return a * b / FindNSD(a,b);
    }

public:

    Fraction () { 
        whole = 0; 
        fractional = 1;
    }
    Fraction (long a_whole, unsigned short a_fractional) {
        whole = a_whole;
        fractional = a_fractional;
    }
    unsigned short GetFractional() { return fractional;}

    void Display() {
        std::cout << whole << "/" << fractional << std::endl;;
    }

    Fraction operator+(Fraction &other) {
        if (fractional != other.fractional) {
            unsigned nsk = FindNSK(fractional,other.fractional);
            whole *= nsk / fractional;
            fractional = nsk;
            other.whole *= nsk / other.fractional;
            other.fractional = nsk; 
        }
        Fraction sum(whole + other.whole, fractional);
        return sum;
    }
};

int main(void) {
    Fraction num1(5,6);
    Fraction num2(5,4);
    num1.Display();
    num2.Display();
    Fraction sum = num1 + num2;
    sum.Display();
    return 0;
}
