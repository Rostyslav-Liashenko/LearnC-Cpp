#include "CTimer.h"

CTimer::CTimer() {
	start = clock();
}

CTimer::~CTimer() {
	clock_t end;
	end = clock();
	std::cout << "Time passed: " << (end - start) / CLOCKS_PER_SEC << std::endl;
}
