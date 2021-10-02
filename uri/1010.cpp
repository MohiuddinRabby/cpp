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
    int productCode, units;
    double price,total=0;
    for(int i=1; i<=2; i++)
    {
        cin >> productCode>>units>> price;
        total = total + (price*units);
    }
    cout<<setprecision(2)<<fixed<<"VALOR A PAGAR: R$ "<<total<<endl;
    return 0;
}
