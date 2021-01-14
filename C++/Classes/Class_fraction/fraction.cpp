#include <iostream>

class Fraction {
    long whole;
    unsigned short fractional;

    long FindNSD(long a, long b) {
        while (a != b) {
            if (a > b)
                a -= b;
            else 
                b -= a;
        }       
        return a;
    } 

    long FindNSK(long a, long b) {
        return a * b / FindNSD(a,b);
    }

      void reduction() {
        bool isMinus = false;
        if (whole < 0) {
            whole = -whole;
            isMinus = true;
        }  
        if (whole == fractional) {
            whole = 1;
            fractional = 1;
            return ;
        }
        int nsd = FindNSD(whole,fractional);
        whole /= nsd;
        fractional /= nsd;
        if (isMinus) {
            whole = -whole;
        }
    }

    void CommonDenominator(Fraction &other) {
        if (fractional != other.fractional) {
            long nsk = FindNSK(fractional,other.fractional);
            whole *= nsk / fractional;
            fractional = nsk;
            other.whole *= nsk / other.fractional;
            other.fractional = nsk; 
        }
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
    
    unsigned short GetFractional() const { return fractional;}
    
    void Display() {
        std::cout << whole << "/" << fractional << std::endl;;
    }

    Fraction operator+(Fraction &other) {
        CommonDenominator(other);
        Fraction sum(whole + other.whole, fractional);
        sum.reduction();
        return sum;
    }

    Fraction operator-(Fraction &other) {
        CommonDenominator(other);
        Fraction difference(whole - other.whole,fractional);
        difference.reduction();
        return difference;
    }

    Fraction operator*(Fraction &other) {
        Fraction product(whole * other.whole, fractional * other.fractional);
        product.reduction();
        return product;
    }
};

int main(void) {
    Fraction num1(-4,9);
    Fraction num2(1,5);
    num1.Display();
    num2.Display();
    std::cout << "Summa" << std::endl;
    (num1 + num2).Display();
    std::cout << "Difference" << std::endl;
    (num1 - num2).Display();
    std::cout << "Product" << std::endl;
    (num1 * num2).Display();
    return 0;
}
