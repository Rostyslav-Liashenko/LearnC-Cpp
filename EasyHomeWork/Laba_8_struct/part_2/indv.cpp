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

int find_record(teacher* records,char *require_last_name, int count_record) { // return index last record for requirement
    int index = -1;
    for (int i = 0; i < count_record; i++) {
        if (!strcmp(records[i].last_name,require_last_name)) {
            show_one_record(records,i);
            index = i;
        }
    }
    if (index == -1) {
        std::cout << "Sorry, not find record!!!" << std::endl;
    }
    return index;
}

void remove_record(teacher* records, int &count_record) {
    char require_last_name[MAXLENGTHNAME];
    std::cout << "Input the last name for delete record: ";
    std::cin >> require_last_name;
    int index_delete = find_record(records,require_last_name,count_record);
    for (int i = index_delete; i < count_record - 1; i++) {
        records[i] = records[i + 1];
    }
    count_record--;
}

void add_new_record(teacher* records, int &count_record) {
    std::cout << "Added new record" << std::endl;
    enter_new_record(&records[count_record]);
    count_record++;
}

void sort_records(teacher records[], int count_record) {
    teacher tmp;
    for (int i = 1; i < count_record; i++) {
        for (int j = count_record - 1; j >= 1; j--) {
            if (strcmp(records[j - 1].last_name,records[j].last_name) > 0) {
                tmp = records[j - 1];
                records[j - 1] = records[j];
                records[j] = tmp;
            }
        }
    }
}

int find_count_exmination(teacher records[], int count_record, char *name_sub) {
    int count = 0;
    for (int i = 0; i < count_record; i++) {
        for (int j = 0; j < records[i].count_subject; j++) {
            if (records[i].sub[j].is_examination && (!(strcmp(records[i].sub[j].subject_name,name_sub)))) {
                show_one_record(records,i);
                count++;
            }
        }
    }
    return count;
}

void delay() {
    char tmp;
    std::cout << "Press any key to continue" << std::endl;
    std::cin >> tmp;
}

void main_menu() {
    int tmp_count;
    int count_record = 0;
    teacher teachers[MAXCOUNTRECORD];
    char tmp[MAXLENGTHNAME];
    createDB(teachers,count_record);
    char choose;
    while (true) {
        std::cout << "\e[1;1H\e[2J"; // clear console in different system
        std::cout << "Menu" << std::endl;
        std::cout << "1 - show all records\n2 - Sort all records\n3 - add record\n4 - delete record\n5 - find record";
        std::cout << "\n6 - count teachers for eximination\n7 - exit" << std::endl;
        std::cin >> choose;
        switch (choose)
        {
        case '1':
            show_all_record(teachers,count_record);
            break;
        case '2':
            sort_records(teachers,count_record);
            std::cout << "Sort complete" << std::endl;
            break;
        case '3':
            add_new_record(teachers,count_record);
            break;
        case '4':
            remove_record(teachers,count_record);
            break;
        case '5':
            std::cout << "Input the last name teacher: " << std::endl;
            std::cin >> tmp;
            find_record(teachers,tmp,count_record);
            break;
        case '6':
            std::cout << "Input the name of subject: " << std::endl;
            std::cin >> tmp;
            tmp_count = find_count_exmination(teachers,count_record,tmp);
            std::cout << "count = " << tmp_count << std::endl;
            break;
        case '7':
            exit(0);
            break;
        default:
            std::cout << "You select not correct variant" << std::endl;
            break;
        }
        delay();
    }
}

int main(void) {
    main_menu();
    return 0;
}