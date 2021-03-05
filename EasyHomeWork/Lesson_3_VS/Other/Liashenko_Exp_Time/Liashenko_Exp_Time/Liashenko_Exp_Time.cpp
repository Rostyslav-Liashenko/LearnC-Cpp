// Liashenko_Exp_Time.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include "CTime.h"

int main()
{
    CTime t1, t2(2), t3(21, 34), t4(12, 25, 42),
        t5(27, 74, 99);
    std::cout << " Variet: " << std::endl
        << "All argument is default" << std::endl << " ";
    t1.printMilitary();
    std::cout << std::endl << " ";
    t1.printStandard();

    std::cout << std::endl << "Hour is custom; minute and second is default:"
        << std::endl << " ";
    t2.printMilitary();
    std::cout << std::endl << " ";
    t2.printStandard();

    std::cout << std::endl << "Hour and minute is custom; second is default:"
        << std::endl << " ";
    t3.printMilitary();
    std::cout << std::endl << " ";
    t3.printStandard();

    std::cout << std::endl << "hour, minute and second is custom:"
        << std::endl << " ";
    t4.printMilitary();
    std::cout << std::endl << " ";
    t4.printStandard();

    std::cout << std::endl << "All value is not correct: "
        << std::endl << " ";
    t5.printMilitary();
    std::cout << std::endl << " ";
    t5.printStandard();
    std::cout << std::endl;
    return 0;
}