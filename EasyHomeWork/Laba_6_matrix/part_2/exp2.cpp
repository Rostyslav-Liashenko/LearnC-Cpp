#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

#define ROW 10
#define COLUMN 10
#define STARTLIMIT 2
#define ENDLIMIT 10 

using namespace std;

void fill(int matr[][10], int k, int n) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() % 50;
        }
    }
}

void show(int matr[][10],int k, int n) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << matr[i][j];
        }
        cout << '\n';
    }
}

long calc(int matr[][10], int k, int n) {
    long sub = 0;
    short first = 1;
    cout << endl;
    cout << "Indexs: " << endl;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            if (matr[i][j] > STARTLIMIT && matr[i][j] < ENDLIMIT) {
                cout << "Matrix[" << i << "][" << j <<"] = "<< matr[i][j] << endl; 
                if (first) {
                    sub = matr[i][j];
                    first = 0;
                } else {
                    sub -= matr[i][j];
                }
            }
        }
    }
    cout << "\n";
    return sub;
}

int main(void) {
    int matrix[ROW][COLUMN];
    int row, column;
    srand(time(NULL));
    cout << "Input the count row: ";
    cin >> row;
    cout << "Input the count column: ";
    cin >> column;
    fill(matrix,row,column);
    show(matrix,row,column);
    long difference = calc(matrix,row,column);
    cout << "diffence = " << difference << endl;
    cout << "Create by Liashenko Rostyslav" << endl;
    return 0;
}

