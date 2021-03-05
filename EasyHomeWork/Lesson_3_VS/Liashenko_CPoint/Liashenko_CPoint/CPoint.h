#pragma once
class CPoint
{
	int x, y;
public:
	CPoint();
	CPoint(int _x, int _y);
	CPoint(const CPoint &original);
	void Init(int _x, int _y);
	void Show();
	void Move(int dx, int dy);
	double dist(CPoint &any);
	void KnowAuthor();
};

