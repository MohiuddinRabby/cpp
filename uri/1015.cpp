#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    double x1,x2,y1,y2;
    cin >> x1>>y1>>x2>>y2;
    cout <<setprecision(4)<<fixed<< sqrt(pow(x2-x1,2)+pow(y2-y1,2))<< endl;
    return 0;
}
