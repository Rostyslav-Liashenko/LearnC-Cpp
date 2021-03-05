// Liashenko_Valuta.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
#include <iostream>
#include "CValuta.h"

int main()
{
    CValuta eur("EUR", 100, 6.65);
    CValuta rur("RUR", 4500, 18.5);
    CValuta usd(eur);
    usd.SetID("USD");
    usd.SetKilk(550);
    usd.SetKurs(5.05);
    std::cout << std::endl;
    eur.Print();
    rur.Print();
    usd.Print();
    std::cout << std::endl;
    return 0;
}