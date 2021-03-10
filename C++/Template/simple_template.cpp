#include <iostream>

using std::cout;
using std::endl;

template <class T>
void sort(T *array, int len) {
    for (int start = 0; ; start++) {
        bool done = true;
        for (int i = len - 2; i >= start; i--) {
            if (array[i+1] < array[i]) {
                T tmp = array[i];
                array[i] = array[i + 1];
                array[i+1] = tmp;
                done = false;
            }
        }
    if (done)
        break;
    }
}

template <class T>
void show(T *array, int len) {
    for (int i = 0; i < len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(void) {
    int array[] = {5, 67, 8, 1, 2, 5, 7};
    double d_array[] = {4.32, 8.32, 1.4, 0.69};
    show<int>(array,7);
    sort<int>(array,7);
    show<int>(array,7);
    show<double>(d_array,4);
    sort<double>(d_array,4);
    show<double>(d_array,4);
    return 0;
}
