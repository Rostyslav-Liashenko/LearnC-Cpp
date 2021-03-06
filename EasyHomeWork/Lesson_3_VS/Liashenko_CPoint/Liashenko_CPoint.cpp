// Liashenko_CPoint.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "CPoint.h"

int main()
{
    CPoint pt1(0, 0), pt2(5, 8);
    int tmp_x, tmp_y;
    std::cout << "First point: " << std::endl;
    pt1.Show();
    std::cout << "Second point: " << std::endl;
    pt2.Show();
    std::cout << "Where you move the first point: " << std::endl;
    std::cin >> tmp_x >> tmp_y;
    pt1.Move(tmp_x, tmp_y);
    std::cout << "New coordinate first point" << std::endl;
    pt1.Show();
    std::cout << "Distance from first point to second point = " << pt1.dist(pt2) <<std::endl;
    pt1.KnowAuthor();
}
