#include <iostream>

using std::cout;
using std::cin;
using std::endl;

template <typename T>
T GetMin(T a, T b) {
    T tmp;
    return tmp = (a < b) ? a : b;
}

int main(void) {
    int tmp_1, tmp_2;
    cout << "Input the tmp_1 and tmp_2" << endl;
    cin >> tmp_1 >> tmp_2;
    int result = GetMin<int>(tmp_1,tmp_2);    
    cout << "Min value = " << result << endl;

    double tmp_3, tmp_4;
    cout << "Input the tmp_3 and tmp_4" << endl;
    cin >> tmp_3 >> tmp_4;
    double result_double = GetMin<double>(tmp_3,tmp_4);
    cout << "Min value = " << result_double << endl;
    return 0;
}