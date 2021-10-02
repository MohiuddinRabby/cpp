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
    double A,B,C;
    cin >> A>>B>>C;
    cout<<setprecision(3)<<fixed<<"TRIANGULO: "<< 1/2.0*(A*C)<<endl;
    cout<<setprecision(3)<<fixed<<"CIRCULO: "<< 3.14159*C*C<<endl;
    cout<<setprecision(3)<<fixed<<"TRAPEZIO: "<<  1/2.0*(A+B)*C<<endl;
    cout<<setprecision(3)<<fixed<<"QUADRADO: "<<  B*B<<endl;
    cout<<setprecision(3)<<fixed<<"RETANGULO: "<<  A*B<<endl;
    return 0;
}
