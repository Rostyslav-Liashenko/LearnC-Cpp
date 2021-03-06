#include "CSum.h"
#include <iostream>

CSum::CSum(int _x, int _y) {
	x = _x;
	y = _y;
}

CSum::CSum(const CSum& original) {
	*this = original;
}

CSum::CSum() {
	x = 0;
	y = 0;
}

void CSum::Init(int _x, int _y) {
	x = _x;
	y = _y;
}

void CSum::Summa() {
	std::cout << x << " + " << y << " = " << x + y << std::endl;
}

void CSum::KnowAuthor() {
	std::cout << "Create by Liashenko Rostyslav" << std::endl;
}