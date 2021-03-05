#include "CValuta.h"
#include <iostream>
#include <cstring>
#include <iomanip>

CValuta::CValuta(const char* a_id, float a_kilk, float a_kurs) {
	strcpy_s(id,_countof(id),a_id);
	kilk = a_kilk;
	kurs = a_kurs;
}

CValuta::CValuta(CValuta& another) {
	*this = another;
}

float CValuta::GetEquivalent() {
	return kilk * kurs;
}

void CValuta::Print() {
	std::cout << std::setiosflags(std::ios::showpoint | std::ios::fixed)
		<< std::setprecision(2)
		<< std::setw(4) << id
		<< std::setiosflags(std::ios::right)
		<< std::setw(10) << kilk
		<< std::setw(10) << kurs
		<< std::setw(10) << GetEquivalent()
		<< std::endl;
}

char* CValuta::GetID() { return id; }
float CValuta::GetKilk() { return kilk; }
float CValuta::GetKurs() { return kurs; }

void CValuta::SetID(char* value) {
	if (*value) strcpy(id, value);
}

void CValuta::SetID(const char* value) {
	if (*value) strcpy(id,value);
}

void CValuta::SetKilk(float value) {
	if (value > 0) kilk = value;
}

void CValuta::SetKurs(float value) {
	if (kurs > 0) kurs = value;
}