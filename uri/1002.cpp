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
    double pi=3.14159,R,A;
    cin >> R;
    A = pi*R*R;
    cout << "A=" << setprecision(4)<<fixed<< A  <<endl;
    return 0;
}
