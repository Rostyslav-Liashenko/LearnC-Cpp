// Liashenko_stack.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include "CStack.h"
 
main()
{
    CStack s1, s2;
    for (int i = 0; i < 3; i++) {
        s1.push((char)(i + 97));
    }
    for (int i = 0; i < 3; i++) {
        s2.push((char)(i + 120));
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "symbols from s1: " << s1.pop() << std::endl;
    }
    for (int i = 0; i < 3; i++) {
        std::cout << "symbols from s2: " << s2.pop() << std::endl;
    }
    return 0;
}
