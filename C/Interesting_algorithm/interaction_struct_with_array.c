#include <stdio.h>
#include <string.h>

enum {max_len_name = 64, max_count_student = 20};

void delete_new_line(char *s_in)
{
    int n = strlen(s_in);
    s_in[n-1] = '\0';
}

int main(void)
{
    int count_student;
    double averange, sum = 0;
    struct student
    {
        char lname[max_len_name];
        char fname[max_len_name];
        double point;

    };

    struct student array[max_count_student];
    printf("Input the count student: ");
    scanf("%d",&count_student);
    getchar(); /* bad code */
    for(int i = 0; i < count_student; i++)
    {
        printf("Input the last name: ");
        fgets(array[i].lname,sizeof(array[i].lname),stdin);
        delete_new_line(array[i].lname);

        printf("Input the first name: ");
        fgets(array[i].fname,sizeof(array[i].lname),stdin);
        delete_new_line(array[i].fname);

        printf("Input the point of student: ");
        scanf("%lf",&(array[i].point));
        sum += array[i].point;
        printf("\n");
        getchar();
    }
    averange = sum / (double) count_student;
    printf("Averange point = %.2f\n",averange);
    printf("Students who have a higher than average score\n");
    for (int i = 0; i < count_student; i++)
    {
        if (array[i].point > averange)
        {
            fputs(array[i].lname,stdout);
            printf(" ");
            fputs(array[i].fname,stdout);
            putchar(10);
        }
    }
    return 0;
}
