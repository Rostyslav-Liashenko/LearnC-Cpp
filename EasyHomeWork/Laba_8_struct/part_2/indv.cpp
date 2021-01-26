#include <iostream>

#define MAXLENGTHNAME 50
#define COUNTSUBJECTFORONETEACHER 10
#define MAXCOUNTRECORD 20

struct subject {
    char subject_name[MAXLENGTHNAME];
    bool is_examination = false;
};

struct teacher {
    subject sub[COUNTSUBJECTFORONETEACHER];
    int count_subject = 0;
    char first_name[MAXLENGTHNAME];
    char last_name[MAXLENGTHNAME];
    int age;
    double salary;
};

void enter_new_record(teacher *th) {
    int count_subject;
    char choose_eximination;
    std::cout << "Enter the first name:" << std::endl;
    std::cin >> th->first_name;
    std::cout << "Enter the last name:" << std::endl;
    std::cin >> th->last_name;
    std::cout << "Enter the age:" << std::endl;
    std::cin >> th->age;
    std::cout << "Enter the count subject teacher teaches:" << std::endl;
    std::cin >> count_subject;
    for (int i = 0; i < count_subject; i++) {
        std::cout << "Nom " << i + 1 <<" Enter the name of subject:" << std::endl;
        std::cin >> th->sub[i].subject_name;
        th->count_subject++;
        std::cout << "Teacher is examinator: [Y/N]";
        std::cin >>choose_eximination;
        if (choose_eximination == 'y' || choose_eximination == 'Y') {
            th->sub[i].is_examination = true;
        }
    }
    std::cout << "Enter the salary:" << std::endl;
    std::cin >> th->salary;
}

void show(teacher *th, int count_elements) {
    std::cout << "Output" << std::endl;
    for (int i = 0; i < count_elements; i++) {
        std::cout << i << std::endl;
        std::cout << th[i].first_name << std::endl;
        std::cout << th[i].last_name << std::endl;
        std::cout << th[i].age << std::endl;
        std::cout << th[i].salary << std::endl;
        std::cout << "Subject";
        for (int j = 0; j < th[i].count_subject; j++) {
            std::cout << th[i].sub[j].subject_name << std::endl;
        }
    }
} 

void create(teacher th[], int &count_record) {
    int count;
    std::cout << "Create a DataBase: " << std::endl;
    std::cout << "Input the count record you need?" << std::endl;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cout << "Record number" << i + 1 << std::endl;
        enter_new_record(&th[i]);
        count_record++;
    }
}

int main(void) {
    int count_record = 0;
    teacher teachers[MAXCOUNTRECORD];
    create(teachers,count_record);
    show(teachers,count_record);
    return 0;
}