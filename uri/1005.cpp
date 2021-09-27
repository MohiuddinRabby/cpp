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
    double A, B,MEDIA;
    cin >> A;
    cin >> B;
    if(A  <=10 && B <=10)
    {
        MEDIA = (A+B)/2;
        cout <<setprecision(5)<< fixed<<  "MEDIA = "<< MEDIA << endl;
    }
    else
    {
        false;
    }
    return 0;
}
