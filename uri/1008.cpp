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
    int number,workedHours;
    double amount,result;
    cin >> number>>workedHours>>amount;
    result = workedHours*amount;
    cout << "NUMBER = " << number << endl;
    cout << setprecision(2)<<fixed <<"SALARY = U$ " << result <<endl;
    return 0;
}
