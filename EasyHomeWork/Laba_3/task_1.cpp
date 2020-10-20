#include <iostream>
#include <math.h>

using namespace std;

int count_all_digit(int num)
{
    int count = 1;
    while( (num /= 10) != 0)
    {
        count++;
    }
    return count;
}

void matches_digit(int num, int n)
{
    int old_num = num;
    while ( num != 0)
    {
        int tmp = num % 10;
        if (n == tmp)
        {
            cout << n << " is in " << old_num << endl;
            return ;
        }    
        num /= 10;
    }
    cout << n << " is not in " << old_num << endl;
}

int count_digit(int num, int n)
{
    int count = 0;
   while ( num != 0)
    {
        int tmp = num % 10;
        if (n == tmp)
        {
            count++;
        }
        num /= 10;
    } 
    return count;
}

int oldest_digit(int num, int size)
{
    return num / pow(10,size - 1); 
}

void find_and_min_digit(int num)
{
    int max = 0, min = 9;
    while (num != 0)
    {
        int tmp = num % 10;
        
        if(tmp > max)
        {
            max = tmp;
        }   
        if (tmp < min)
        {
            min = tmp;
        }
        num /=  10; 
    }
    cout << "Max digit is " << max << endl;
    cout << "Min digit is " << min << endl;
}

int main()
{
    int num, digit; 
    /* a */
    cout << "Input the num: ";
    cin >> num;
    cout << "Count digit = "<< count_all_digit(num) << endl;
    /* b */
    cout << "Input the digit for find in number: ";
    cin >> digit;
    matches_digit(num, digit);
    /* c */
    cout << "Count " << digit << " is in " << num << " = " << count_digit(num, digit) << endl;
    /* d */
    cout << "Oldest digit " << oldest_digit(num,count_all_digit(num)) << endl;
    /* e */
    find_and_min_digit(num);
    cout << "Create By Liashenko Rostyslav\n";
    return 0;
}