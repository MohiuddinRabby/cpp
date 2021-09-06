#include<iostream>
using namespace std;

int main()
{
    /*
    Write a program in C++ to check whether the primitive values crossing the limits or not
    Check whether the primitive values crossing the limits or not :
    --------------------------------------------------------------------
    The Gender is : F
    Is she married? : 1
    Number of sons she has : 2
    Year of her appointment : 2009
    Salary for a year : 1500000
    Height is : 79.48
    GPA is 4.69
    Salary drawn upto : 12047235
    Balance till : 995324987
    */
    char gender = 'F';
    bool married = true;
    unsigned int numberOfSons = 2;
    int appointmentYear = 2009;
    //double yearlySalary = 1500000;
    long long int yearlySalary = 1500000;
    float height = 79.48;
    float gpa = 4.69;
    //double salaryDrawnUpto = 12047235;
    long long  salaryDrawnUpto = 12047235;
    long long  balanceTill = 995324987;
    cout << "The Gender is : "<< gender << "\n";
    cout << "Is she married?  : "<< married << "\n";
    cout << "Number of sons she has : "<< numberOfSons << "\n";
    cout << "Year of her appointment : "<< appointmentYear << "\n";
    cout << "Salary for a year : "<< yearlySalary << "\n";
    cout << "Height is : "<< height << "\n";
    cout << "Salary drawn upto : "<< salaryDrawnUpto << "\n";
    cout << "Balance till : "<< balanceTill << "\n";
    return 0;
}
