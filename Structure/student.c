#include <stdio.h>
#include <string.h>

int main(void)
{
    enum {max_name_len = 64, max_group_len = 8};

    struct student
    {
        char name[max_name_len];
        char sex;
        int year_of_birth;
        int major_code;
        int year;
        char group[max_group_len];
        float average;
    };

    struct student st1;
    strcpy(st1.name,"Otlichnikov Vasiliy Sergeevich");
    st1.sex = 'm';
    st1.year_of_birth = 1995;
    st1.major_code = 513111;
    st1.year = 3;
    strcpy(st1.group,"312");
    st1.average = 4.792;

    struct student st2 = 
    {
        "Otlichnik Petya Pupkin", 'm', 1996, 513455, 3, "312", 4.543
    };
    printf("Year = %d\n",st1.year);
    struct student *p;
    p = &st1;
    (*p).year = 4;
    printf("Year = %d\n",st1.year);
    return 0;
}
