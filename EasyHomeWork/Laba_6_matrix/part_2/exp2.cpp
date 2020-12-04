#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>

#define ROW 10
#define COLUMN 10
#define STARTLIMIT 2
#define ENDLIMIT 10 

using namespace std;

void fill(int matr[][COLUMN], int k, int n) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = rand() % 50;
        }
    }
}

void show(int matr[][COLUMN],int k, int n) {
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(4) << matr[i][j];
        }
        cout << '\n';
    }
}

int calc(int matr[][COLUMN], int k, int n) {
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

void delete_row(int matr[][COLUMN], int* k, int n, int need_delete) {
    for (int i = need_delete; i < *k - 1; i++) {
        for (int j = 0; j < n; j++) {
            matr[i][j] = matr[i+1][j]; 
        }
    }
    (*k)--;
}

void insert_row(int matr[][COLUMN], int* k, int n, int need_insert) {
    for (int i = *k; i > need_insert - 1; i--) {
        for (int j = 0; j < n; j++) {
            matr[i+1][j] = matr[i][j];
        }
    }
    for (int j = 0; j < n; j++) {
        matr[need_insert][j] = rand() % 50;
    }
    (*k)++;
}

int main(void) {
    int matrix[ROW][COLUMN];
    int row, column;
    int op,difference,tmp;
    srand(time(NULL));
    cout << "Input the count row: ";
    cin >> row;
    cout << "Input the count column: ";
    cin >> column;
    short rep = 1;
    while (rep) {
        printf("\e[1;1H\e[2J"); /* clear console */
        printf("1 - random fill\n2 - show matrix\n3 - calc\n4 - delete one row\n5 - insert one row\n6 - exit\n");
        cin >> op;
        switch (op)
        {
        case 1:
            fill(matrix,row,column);
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 2:
            show(matrix,row,column);
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 3:
            difference = calc(matrix,row,column);
            cout << "difference = " << difference << endl;
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 4:
            cout << "Input the row is deleting: ";
            cin >> tmp;
            delete_row(matrix,&row,column,tmp);
            cout << "delete row is completety" << endl;
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 5:
            cout << "Input the row is inserting: ";
            cin >> tmp;
            insert_row(matrix,&row,column,tmp);
            cout << "Insert row is completety" << endl;
            getchar(); /* delete enter with stream*/
            getchar();
            break;
        case 6:
            rep = 0;
            break;
        default:
            break;
        }
    }
    cout << "Create by Liashenko Rostyslav" << endl;
    return 0;
}

