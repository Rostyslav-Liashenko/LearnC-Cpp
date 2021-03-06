#pragma once
class CSum
{
	int x, y;
public:
	CSum(int _x, int _y);
	CSum(const CSum& original);
	CSum();
	void Init(int _x, int _y);
	void Summa();
	void KnowAuthor();
};

