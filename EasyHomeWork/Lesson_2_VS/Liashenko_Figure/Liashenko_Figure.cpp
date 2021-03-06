// Liashenko_Figure.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "CFigure.h"

int main()
{
    char tmp_col;
    int tmp_row;
    CFigure tura;
    std::cout << "Input the coordinate: " << std::endl;
    std::cin >> tmp_col >> tmp_row;
    tura.Init(tmp_col,tmp_row);
    tura.Show();
    tura.move();
    tura.Show();
}

