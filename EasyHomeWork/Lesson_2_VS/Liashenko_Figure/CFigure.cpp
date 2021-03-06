#include "CFigure.h"
#include <iostream>

int CFigure::Init(char _column, int _row) {
    column = _column;
    row = _row;
    return 0;
}


int CFigure::Show() {
    std::cout << column << row << std::endl;
    return 0;
}

void CFigure::move() {
    char tmp_column;
    int tmp_row;
    std::cout << "Input the new coordinate: ";
    std::cin >> tmp_column >> tmp_row;

    if ((tmp_column < 'A' || tmp_column > 'H') || (tmp_row < 1 || tmp_row > 8)) {
        std::cout << "Out board" << std::endl;
        return;
    }

    int bool_1 = column == tmp_column && (row != tmp_row);
    int bool_2 = row == tmp_row && (column != tmp_column);
    if (bool_1 || bool_2) {
        column = tmp_column;
        row = tmp_row;
    } else {
        std::cout << "Error!" << std::endl;
    }
}
