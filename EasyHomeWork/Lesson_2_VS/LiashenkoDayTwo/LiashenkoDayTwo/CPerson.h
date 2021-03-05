#pragma once
class CPerson
{
	char name[50];
	int year_of_birthday;
	int height;
	int weight;
	int age;
public:
	CPerson();
	CPerson(const CPerson& original);
	CPerson(char* _name, int _year, int _h, int _w);
	void Init(char *_name, int _year, int _h, int _w);
	void Show();
	int CalcAge();
};

