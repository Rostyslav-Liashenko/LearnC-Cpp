#include "CPoint.h"
#include <iostream>
#include <cmath>

CPoint::CPoint() {
	x = 0;
	y = 0;
}

CPoint::CPoint(int _x, int _y) {
	x = _x;
	y = _y;
}

CPoint::CPoint(const CPoint &original) {
	*this = original;
}

void CPoint::Init(int _x, int _y) {
	x = _x;
	y = _y;
}

void CPoint::Show() {
	std::cout << "(" << x << " ," << y << ")" << std::endl;
}

void CPoint::Move(int dx, int dy) {
	x += dx;
	y += dy;
}

double CPoint::dist(CPoint& any) {
	return sqrt(pow(any.x - x,2) + pow(any.y - y,2));
}

void CPoint::KnowAuthor() {
	std::cout << "Creaty by Liashenko Rostyslav" << std::endl;
}