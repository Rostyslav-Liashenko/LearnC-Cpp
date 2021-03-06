#pragma once
class CFigure
{
	char column;
	int row;
public:
	int Init(char _column, int _row);
	int Show();
	void move();
};

