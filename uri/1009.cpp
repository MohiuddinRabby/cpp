#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    string empName ;
    double empSalary, totalSoldByEmp,comission,totalSalary=0;
    cin >> empName>>empSalary>>totalSoldByEmp;
    comission = (totalSoldByEmp*15) / 100;
    totalSalary = empSalary + comission;
    cout<<setprecision(2)<<fixed << "TOTAL = "<<totalSalary<<endl;
    return 0;
}
