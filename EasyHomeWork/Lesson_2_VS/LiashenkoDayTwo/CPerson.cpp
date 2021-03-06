#include "CPerson.h"
#include <string.h>
#include <iostream>
#include <ctime>

CPerson::CPerson() {
	strcpy(name,"");
	year_of_birthday = 0;
	height = 0;
	weight = 0;
	age = 0;
}

CPerson::CPerson(const CPerson& original) {
	*this = original;
}

CPerson::CPerson(char* _name, int _year, int _h, int _w) {
	strcpy_s(name, sizeof(name), _name);
	year_of_birthday = _year;
	height = _h;
	weight = _w;
	age = CalcAge();
}

void CPerson::Init(char *_name, int _year, int _h, int _w) {
	strcpy_s(name,sizeof(name),_name);
	year_of_birthday = _year;
	height = _h;
	weight = _w;
	age = CalcAge();
}

void CPerson::Show() {
	std::cout << "Name = " << name << std::endl;
	std::cout << "Year of birthday = " << year_of_birthday << std::endl;
	std::cout << "Height = " << height << " weight = " << weight << std::endl;
	std::cout << "Age = " << age << std::endl;
}

int CPerson::CalcAge() {
	tm newtime;
	__time64_t long_time;
	errno_t err;
	_time64(&long_time);
	err = _localtime64_s(&newtime, &long_time);
	int current_time = newtime.tm_year + 1900;
	return current_time - year_of_birthday;
}

