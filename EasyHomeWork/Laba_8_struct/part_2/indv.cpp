#include <iostream>
#include <iomanip>
#include <cstring>

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

void decorate() {
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
}

void enter_new_record(teacher *th) {
    int count_subject;
    char choose_eximination;
    std::cout << "Enter the first name: ";
    std::cin >> th->first_name;
    std::cout << "Enter the last name: ";
    std::cin >> th->last_name;
    std::cout << "Enter the age: ";
    std::cin >> th->age;
    decorate();
    std::cout << "Enter the count subject teacher teaches: " << std::endl;
    std::cin >> count_subject;
    for (int i = 0; i < count_subject; i++) {
        std::cout << "Nom " << i + 1 <<" Enter the name of subject: " << std::endl;
        std::cin >> th->sub[i].subject_name;
        th->count_subject++;
        std::cout << "Teacher is examinator: [Y/N] ";
        std::cin >>choose_eximination;
        if (choose_eximination == 'y' || choose_eximination == 'Y') {
            th->sub[i].is_examination = true;
        }
    }
    decorate();
    std::cout << "Enter the salary:" << std::endl;
    std::cin >> th->salary;
    decorate();
}

void show_one_record(teacher *th, int index) {
    std::cout << std::setw(4) << index + 1;
    std::cout << std::setw(20) << th[index].first_name;
    std::cout << std::setw(20) << th[index].last_name;
    std::cout << std::setw(3) << th[index].age;
    std::cout << std::setw(10) << th[index].salary << std::endl;
    std::cout << "  Subject" << std::endl;
    for (int j = 0; j < th[index].count_subject; j++) {
        std::cout << std:: setw(53) << th[index].sub[j].subject_name;
        if (th[index].sub[j].is_examination) {
            std::cout << std::setw(4) << "Yes" << std::endl;
        } else {
            std::cout << std::setw(4) << "No" << std::endl;
        }
    }
    decorate();
}

void show_all_record(teacher *th, int count_elements) {
    std::cout << "All record" << std::endl;
    for (int i = 0; i < count_elements; i++) {
        show_one_record(th,i);
    }
} 

void createDB(teacher th[], int &count_record) {
    int count;
    std::cout << "Create a DataBase: " << std::endl;
    std::cout << "Input the count record you need?" << std::endl;
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cout << "Record number " << i + 1 << std::endl;
        enter_new_record(&th[i]);
        count_record++;
    }
}

teacher* find_record(teacher* records,char *require_last_name, int count_record) { // return last record for requirement
    teacher* result = NULL;
    for (int i = 0; i < count_record; i++) {
        if (!strcmp(records[i].last_name,require_last_name)) {
            show_one_record(&records[i],i);
            result = &records[i];
        }
    }
    return result;
}

int main(void) {
    int count_record = 0;
    teacher teachers[MAXCOUNTRECORD];
    createDB(teachers,count_record);
    show_all_record(teachers,count_record);
    return 0;
}