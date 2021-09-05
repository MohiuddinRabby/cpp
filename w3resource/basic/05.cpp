#include<iostream>
#include<climits>
using namespace std;
int main()
{
    /*Write a program in C++ to print a welcome text in a separate line
    Write a program in C++ to check the upper and lower limits of integer. Go to the editor
    Expected Output:
    Check the upper and lower limits of integer :
    --------------------------------------------------
    The maximum limit of int data type : 2147483647
    The minimum limit of int data type : -2147483648
    The maximum limit of unsigned int data type : 4294967295
    The maximum limit of long long data type : 9223372036854775807
    */
    cout << "The maximum limit of int data type : "<< INT_MAX << endl;
    cout << "The minimum limit of int data type : "<< INT_MIN << endl;

    return 0;
}
