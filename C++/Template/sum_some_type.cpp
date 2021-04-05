#include <iostream>

template <typename T>
class SumAll {
    T a;
    T b;
public:
    SumAll(T a, T b);
    T FindSum();
};

template <typename T>
SumAll<T>::SumAll(T a, T b) {
    this->a = a;
    this->b = b;
}
template <typename T>
T SumAll<T>::FindSum() {
    return a + b;
}

int main(void) {
    SumAll<int>x(4,5);
    SumAll<double>y(3.45,4.67);
    SumAll<std::string>j("rostik","mostik");
    std::cout << x.FindSum() << std::endl;
    std::cout << y.FindSum() << std::endl;
    std::cout << j.FindSum() << std::endl;
}