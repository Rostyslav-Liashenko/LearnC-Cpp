#pragma once
class CValuta
{
	char id[4];
	float kilk;
	float kurs;
public:
	CValuta(const char*, float, float);
	CValuta(CValuta&);
	void Print();
	float GetEquivalent();
	float GetKurs();
	float GetKilk();
	char* GetID();
	void SetKurs(float);
	void SetKilk(float);
	void SetID(char*);
	void SetID(const char* value);
};

