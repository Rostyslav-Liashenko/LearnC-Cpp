#include <iostream>
#include <iomanip>
#include <conio.h>

/*
void task_3() {
    double darray[] = {6.8791, -0.0054, 5.6789, 3};
    char col_name[] = {"znachenna"};
    std::cout << std::setw(sizeof(col_name)) << col_name << std::endl;
    std::cout << std::setprecision(3) << std::setiosflags(std::ios::fixed | std::ios::showpoint | std::ios::showpoint | std::ios::left)
        << std::setfill('*');
    for (int i = 0; i < sizeof(darray) / sizeof(darray[0]); i++) {
        std::cout << std::setw(sizeof(col_name)) << darray[i] << std::endl;
    }
}

typedef char string;

struct client {
    int number;
    string name[10];
    float balans;
};

void enter_client(client& c) {
    std::cout << "Input the number: "; std::cin >> c.number;
    std::cout << "Input the name: "; std::cin >> c.name;
    std::cout << "Input the balans: "; std::cin >> c.balans;
}

void print_client(const int i, const client& c) {
    std::cout << "Object N" << std::setw(3) << i + 1 << " num = "
        << std::setw(4) << c.number << " name =" << std::setw(11) << c.name
        << " balans = " << std::setw(8) << std::setprecision(2) << c.balans << std::endl;
}

void swap_client(client& a, client& b) {
    client c = a;
    a = b;
    b = c;
}

void sort_client(client c[], int k) {
    for (int i = 0; i < k - 1; i++) {
        for (int j = i + 1; j < k; j++) {
            if (strcmp(c[i].name, c[j].name) > 0)
                swap_client(c[i], c[j]);
        }
    }
}

void task_4() {
    int const n = 3;
    client m[n];
    for (int i = 0; i < n; i++)
        enter_client(m[i]);
    for (int i = 0; i < n; i++)
        print_client(i, m[i]);
    _getch(); // bad code
    std::cout << "Sorting..." << std::endl;
    sort_client(m, n);
    for (int i = 0; i < n; i++)
        print_client(i, m[i]);
    std::cout << std::endl;
}
*/
struct sportsmen {
    char first_name[50];
    char sur_name[50];
    char last_name[50];
    int qualification;
    int year_of_sport;
};

void enter_sportsmen(sportsmen& s) {
    std::cout << "Enter the name: "; 
    std::cin >> s.first_name;
    std::cout << "Enter the surname: ";
    std::cin >> s.sur_name;
    std::cout << "Enter the last name: ";
    std::cin >> s.last_name;
    std::cout << "Enter the qualification: ";
    std::cin >> s.qualification;
    std::cout << "Enter the year of sport: ";
    std::cin >> s.year_of_sport;
    std::cout << std::endl;
}

void print_sportsmen(sportsmen& s, int index) {
    long old_flags = std::cout.flags();
    std::cout.flags(old_flags | std::ios::showpos | std::ios::right);
    std::cout.fill('*');
    std::cout << "Object " << std::setw(3) << index + 1 << std::endl;
    std::cout << "First name: "  << std::setw(20) << s.first_name << std::endl;
    std::cout << "Sur name: " << std::setw(20) << s.sur_name << std::endl;
    std::cout << "Last name: " << std::setw(20) << s.last_name << std::endl;
    std::cout << "Quilification: " << std::setw(3) << s.qualification << std::endl;
    std::cout << "Year of sport: " << std::setw(4) << s.year_of_sport << std::endl;
    std::cout << std::endl;
}

void print_header() {
    std::cout << std::setw(4) << "Nom " << std::setw(20) << "firts name" << std::setw(20) << "surname" << std::setw(20) << "last name"
        << std::setw(3) << "QA" << std::setw(5) << "year" << std::endl;
}

void print_table(sportsmen& s, int index) {
    std::cout << std::setw(4) << index + 1;
    std::cout << std::setw(20) << s.first_name << std::setw(20) << s.sur_name << std::setw(20) << s.last_name << std::setw(3)
        << s.qualification << std::setw(5) << s.year_of_sport << std::endl;
}

void processed_sportsmen() {
    sportsmen sportsmens[20];
    int count;
    std::cout << "Input the count sportsmen: ";
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        enter_sportsmen(sportsmens[i]);
    }
    std::cout << "Output: " << std::endl << std::endl;
    print_header();
    for (int i = 0; i < count; i++) {
        print_table(sportsmens[i],i);
    }
}

int main()
{ 
    processed_sportsmen();
    std::cout << "Create by Liashenko Rostyslav\n";
    return 0;
}
