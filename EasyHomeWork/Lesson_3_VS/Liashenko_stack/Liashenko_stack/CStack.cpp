#include "CStack.h"
#include <iostream>

CStack::CStack() {
	std::cout << "Work with constructor stack\n";
	tos = 0;
}

void CStack::push(char ch) {
	if (tos == SIZE) {
		std::cout << "Stack is full" << std::endl;
		return;
	}
	stck[tos] = ch;
	tos++;
}

char CStack::pop() {
	if (tos == 0) {
		std::cout << "Stack is empty" << std::endl;
		return 0;
	}
	tos--;
	return stck[tos];
}
