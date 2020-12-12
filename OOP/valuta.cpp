#include "valuta.h"
#include <string.h>
#include <iostream>
#include <iomanip>
#include <ios>

using namespace std;

Cvaluta::Cvaluta(char* a_id, float a_kilk, float a_kurs, int a_norm) {
	strcpy(id,a_id);
	kilk = a_kilk;
	kurs = a_kurs;
	norma = a_norm;
}

Cvaluta::Cvaluta(Cvaluta &another) {
	*this = another;
}

Cvaluta::~Cvaluta() {
	
}

float Cvaluta::GetEquivalent() {
	return kilk / norma * kurs;
}

int Cvaluta::CompareEquivalent(Cvaluta &another) {
	return GetEquivalent() > another.GetEquivalent() ? 1 : 0;
}

void Cvaluta::Print() {
	std::cout << std::setiosflags(ios::showpoint | ios::fixed) << setprecision(2) << setw(4) << id
	<< std::setiosflags(ios::right) << setw(10) << kilk << setw(10) << kurs
	<< setw(10) << norma << setw(10) <<  GetEquivalent() << endl;
}

char* Cvaluta::GetID() {return id;}
float Cvaluta::GetKilk() {return kilk;}
float Cvaluta::GetKurs() {return kurs;}
int Cvaluta::GetNorma() {return norma;}

void Cvaluta::SetID(char *value) {
	if (*value) strcpy(id,value);
}

void Cvaluta::SetKilk(float value) {
	if (value > 0) kilk = value;
}

void Cvaluta::SetKurs(float value) {
	if (kurs > 0) kurs = value;
}

void Cvaluta::SetNorma(int value) {
	if (norma > 0) norma = value;
}

