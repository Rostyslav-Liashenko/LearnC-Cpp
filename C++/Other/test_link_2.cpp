#include <iostream>

#define MAXELEMENT 50

void max_min(float *arr, int len, float &min, float &max) {
    min = arr[0];
    max = arr[0];
    for(int i = 1; i < len; i++) {
        if(min > arr[i])
            min = arr[i];
        if (max < arr[i])
            max = arr[i];
    }
}

int main(void) {
    float min,max;
    float arr[MAXELEMENT];
    for (int i = 0; i < MAXELEMENT; i++)
        arr[i] = i + 10;
    max_min(arr,MAXELEMENT,min,max);
    std::cout << "max = " << max << std::endl;
    std::cout << "min = " << min << std::endl;
    return 0;
}
