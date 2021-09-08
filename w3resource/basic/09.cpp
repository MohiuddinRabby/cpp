#include<iostream>
using namespace std;

int main()

{
    /* Write a program in C++ to display the operation of pre and post increment and decrement.
    --------------------------------------------------------------------
    The number is : 57
    After post increment by 1 the number is : 58
    After pre increment by 1 the number is : 59
    After increasing by 1 the number is : 60
    */
    int num = 57;
    cout << num++ << "\n";
    cout << ++num << "\n";
    num = num + 1;
    cout << num;
    return 0;
}
