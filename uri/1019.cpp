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
    cout<<N/3600<<":";
    remainder = N%3600;
    cout << remainder/60<<":";
    remainder = remainder%60;
    cout<<remainder<<endl;
    return 0;
}
