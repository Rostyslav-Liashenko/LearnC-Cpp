#include <iostream>
#include <stdlib.h> 
#include <iomanip>

using namespace std;

int a[10][10];

void vvmatr(int k, int n) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 50;
        }
    }
}

void vivmatr(int k, int n) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << a[i][j];
        }
        cout << '\n';
    }
}

void obch(int k, int n) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                sum += a[i][j];
            }
        }
    }
    cout << "\n Sum elements above main diagonal = " << sum << endl;
}

void find_min(int k, int n) {
    int minn = a[0][0], r = 0, st = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] < minn) {
                minn = a[i][j];
                r = i;
                st = j;
            }
        }
    }
    cout << "\n Minimal element = " << minn << " row = " << r + 1 << " column = " << st+1 << endl;
}

int main(void) {
    int k,n;
    cout << "\n Input the count row matrix: ";
    cin >> k;
    cout << "\n Input the count column matrix: ";
    cin >> n;
    vvmatr(k,n);
    vivmatr(k,n);
    obch(k,n);
    find_min(k,n);
    return 0;
}