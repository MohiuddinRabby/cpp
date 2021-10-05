#include <iostream>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int N,remainder;
    cin >> N;
    cout << N << endl;
    cout << N/100 << " nota(s) de R$ 100,00" << endl;
    remainder = N%100;
    cout << remainder/50 << " nota(s) de R$ 50,00" << endl;
    return 0;
}

