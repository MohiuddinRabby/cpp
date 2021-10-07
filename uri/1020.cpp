#include <iostream>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int days,remainder;
    cin >> days;
    cout <<days/365 << " ano(s)" << endl;
    remainder = days%365;
    cout << remainder/30 << " mes(es)" << endl;
    remainder = remainder%30;
    cout << remainder << " dia(s)" << endl;
    return 0;
}

