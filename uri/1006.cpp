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
    double A, B,C,MEDIA=0;
    cin >> A;
    cin >> B;
    cin >> C;
    if(A  <=10.0 && B <=10.0 && C<=10.0)
    {
        MEDIA = (A+B+C)/3;
        cout <<setprecision(1)<< fixed<<  "MEDIA = "<< MEDIA << endl;
    }
    return 0;
}
