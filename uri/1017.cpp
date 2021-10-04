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
    int tripHour,avgSpeed;
    double result;
    cin>>tripHour>>avgSpeed;
    result = (avgSpeed/12.0) * tripHour;
    cout <<setprecision(3)<<fixed<< result<< endl;
    return 0;
}

