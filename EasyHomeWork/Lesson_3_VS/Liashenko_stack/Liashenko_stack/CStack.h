#pragma once
#define SIZE 10
class CStack
{
	char stck[SIZE];
	int tos;
public:
	CStack();
	void push(char ch);
	char pop();
};

