// start point

#include <iostream>
#include "CPerson.h"
#include "CSum.h"

int main()
{
    char tmp[64];
    int tmp_a, tmp_b, tmp_c;
    CPerson h1;
    std::cout << "Input the name: " << std::endl;
    std::cin >> tmp;
    std::cout << "Input the year of birthday, height, weight:  " << std::endl;
    std::cin >> tmp_a >> tmp_b >> tmp_c;
    CPerson h2(tmp,tmp_a,tmp_b,tmp_c);
    CPerson h3(h2);
    std::cout << "Persona 1" << std::endl;
    h1.Show();
    std::cout << "Persona 2" << std::endl;
    h2.Show();
    std::cout << "Persona 3" << std::endl;
    h3.Show();
    CSum z1, z2(5,2), z3(z2);
    std::cout << "Suma z1" << std::endl;
    z1.Summa();
    std::cout << "Suma z2" << std::endl;
    z2.Summa();
    std::cout << "Suma z3" << std::endl;
    z3.Summa();
}
